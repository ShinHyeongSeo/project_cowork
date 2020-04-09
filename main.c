#include "members.h"

// 애플리케이션용 함수 원형
void create_record();
void read_record();
void list_record();
void update_record();
void delete_one_record();
void delete_multi_record();
void search_record();
void load_file();
void save_file();
void sorting_record();
void print_income();
void save_statistics();
void debug_records(); // for debug  
int main(){
    m_init();
    int menu;
    while(1){
        printf("\nMenu : 1.Create 2.Read 3.List 4.Update 5.Delete(one) 6.Delete(multi) 7.Search 8.Load 9.Save 10.Sorting 11.print_income 12.save_statistics 0.Quit > ");
        scanf("%d", &menu);
        printf("\n");
        switch(menu){
            case 1: 
                create_record();
                break;
            case 2: 
                read_record();
                break;
            case 3: 
                list_record();
                break;
            case 4: 
                update_record();
                break;
            case 5: 
                delete_one_record();
                break;
            case 6: 
                delete_multi_record();
                break;
            case 7: 
                search_record();
                break;
            case 8: 
                load_file();
                break;
            case 9: 
                save_file();
                break;
            case 10: 
                sorting_record();
                break;
            case 11: 
                print_income();
                break;
            case 12: 
                save_statistics();
                break;                
            case 13: 
                debug_records();
                break;
            case 0: 
            default: 
                return 0;
        }
    }
    return 0;
}

void create_record(){
    if(!m_is_available()) {
        printf("There is no space!\n");
        return;
    }

    char name[20];  // 주문자 이름
    char addr[150]; // 주문자가 주문 시 입력한 주소(배달할 주소)
    char phone[20]; // 주문자 전화번호
    char menu_name[20]; // 주문한 메뉴 이름
    int price; // 주문한 메뉴의 가격
    int qty; // 주문한 메뉴의 개수
    char time[20]; // 주문자가 주문을 완료한 시간
    char pay[20]; // 주문자가 원하는 결제 방법  

    printf("Enter a new member's info.\n");
    printf("Name > ");
    scanf("%s", name);
    // if(m_search_by_name(name)) {
    //     printf("Duplicated name!\n");
    //     return;
    // }
    printf("Address > ");
    scanf("%s", addr);
    printf("Phone > ");
    scanf("%s", phone);
    printf("Menu Name > ");
    scanf("%s", menu_name);
    printf("Price > ");
    scanf("%d", &price);
    printf("Qty > ");
    scanf("%d", &qty);
    printf("Time > ");
    scanf("%s", time);
    printf("Pay > ");
    scanf("%s", pay);
    m_create(name, addr, phone, menu_name, price, qty, time, pay);
}

void read_record(){
    char name[20];
    printf("Enter a name > ");
    scanf("%s", name);

    T_Record* p = m_search_by_name(name);
    if(p) {
        printf("Member info.\n");
        printf("Name : %s\n", m_get_name(p));
        printf("Address : %s\n", m_get_addr(p));
        printf("Phone : %s\n", m_get_phone(p));
        printf("Menu name : %s\n", m_get_menu(p));
        printf("Price : %d\n", m_get_price(p));
        printf("Qty : %d\n", m_get_qty(p));
        printf("Time : %s\n", m_get_time(p));
        printf("Pay : %s\n", m_get_pay(p));
    }
    else {
        printf("No such member!\n");
    }
}

void update_record(){
    char name[20];  // 주문자 이름
    char addr[150]; // 주문자가 주문 시 입력한 주소(배달할 주소)
    char phone[20]; // 주문자 전화번호
    char menu_name[20]; // 주문한 메뉴 이름
    int price; // 주문한 메뉴의 가격
    int qty; // 주문한 메뉴의 개수
    char time[20]; // 주문자가 주문을 완료한 시간
    char pay[20]; // 주문자가 원하는 결제 방법

    printf("Enter a name > ");
    scanf("%s", name);

    T_Record* p = m_search_by_name(name);
    if(p) {
        printf("Enter a updated info.\n");
        printf("Address > ");
        scanf("%s", addr);
        printf("Phone > ");
        scanf("%s", phone);
        printf("Menu Name > ");
        scanf("%s", menu_name);
        printf("Price > ");
        scanf("%d", &price);
        printf("Qty > ");
        scanf("%d", &qty);
        printf("Time > ");
        scanf("%s", time);
        printf("Pay > ");
        scanf("%s", pay);
        m_update(p, addr, phone, menu_name, price, qty, time, pay);
    }
    else {
        printf("No such member!\n");
    }
}

void delete_one_record(){
    printf("not completed");
}

void delete_multi_record(){
    printf("not completed");
    // char name[20];
    // printf("Enter a name > ");
    // scanf("%s", name);

    // T_Record* p = m_search_by_name(name);
    // if(p) {
    //     m_delete(p);
    //     printf("The record is deleted!\n");
    // }
    // else {
    //     printf("No such member!\n");
    // }
}

void list_record(){
    // 전체 리스트 출력
    printf("All records.\n");
    int size = m_count();
    T_Record* records[MAX_MEMBERS];
    m_get_all(records);
    for(int i=0; i<size; i++){
        T_Record* p = records[i];
        printf("%d. %s\n", i+1, m_to_string(p));
    }
}

void search_record(){
    printf("not completed");
    // //이름 일부문자열로 검색
    // char name[20];
    // printf("Enter a name > ");
    // scanf("%s", name);

    // T_Record* records[MAX_MEMBERS];
    // int size = m_get_all_by_name(records, name);
    // printf("%d records found.\n", size);
    // for(int i=0; i<size; i++){
    //     T_Record* p = records[i];
    //     printf("%d. %s\n", i+1, m_to_string(p));
    // }
}
void search_city(){
    printf("not completed");
    // // 거주도시로 검색
    // char name[20];
    // printf("Enter a city > ");
    // scanf("%s", name);

    // T_Record* records[MAX_MEMBERS];
    // int size = m_get_all_by_city(records, name);
    // printf("%d records found.\n", size);
    // for(int i=0; i<size; i++){
    //     T_Record* p = records[i];
    //     printf("%d. %s\n", i+1, m_to_string(p));
    // }
}
void load_file(){
    // 데이터파일 읽기
    printf("All data will be deleted and new records will be reloaded.\n");
    printf("1.Yes 0.No > ");
    int yesno;
    scanf("%d", &yesno);
    if (yesno == 0) return;
    m_init();   // 레코드 모두 제거 

    FILE* f = fopen("members.txt", "r");
    char name[20];  // 주문자 이름
    char addr[150]; // 주문자가 주문 시 입력한 주소(배달할 주소)
    char phone[20]; // 주문자 전화번호
    char menu_name[20]; // 주문한 메뉴 이름
    int price; // 주문한 메뉴의 가격
    int qty; // 주문한 메뉴의 개수
    char time[20]; // 주문자가 주문을 완료한 시간
    char pay[20]; // 주문자가 원하는 결제 방법

    while(!feof(f)){
        if(!m_is_available()) {
            printf("[Load] There is no space!\n");
            break;
        }
    
        int n = fscanf(f,"%s %s %s %s %d %d %s %s", name, addr, phone, menu_name, &price, &qty, time, pay);
        if (n<4) break;
        // if(m_search_by_name(name)) {
        //     printf("[Load] Duplicated name(%s)! loading.\n", name);
        //     continue;
        // }
        m_create(name, addr, phone, menu_name, price, qty, time, pay);
        //printf("[Load] load %s\n", name);
    }
    printf("%d records are read from file!\n", m_count());    
    fclose(f);
}


void save_file(){
    // 데이터파일 저장
    FILE* f = fopen("members.txt", "w");
    printf("All records.\n");
    int size = m_count();
    T_Record* records[MAX_MEMBERS];
    m_get_all(records);
    for(int i=0; i<size; i++){
        T_Record* p = records[i];
        fprintf(f,"%s\n", m_to_string_save(p));
    }
    fclose(f);
}

void sorting_record(){
    printf("not completed");
}

void print_income(){
    printf("income.\n");
    int size = m_count();
    static int total =0;
    T_Record* records[MAX_MEMBERS];
    m_get_all(records);
    for(int i=0; i<size; i++){
        T_Record* p = records[i];
        printf("%d \n", each_result(p));
        total = total + each_result(p);
    }
    printf("Total income.\n%d", total);

}

void save_statistics(){
    FILE* f = fopen("income.txt", "w");
    int size = m_count();
    static int total =0;
    T_Record* records[MAX_MEMBERS];
    m_get_all(records);
    for(int i=0; i<size; i++){
        T_Record* p = records[i];
        total = total + each_result(p);
    }
    fprintf(f,"%d\n", total);
    printf("All income saved.\n");
    fclose(f);
}

void debug_records(){
    // for debug  
    T_Record* records[MAX_MEMBERS]={0};
    m_get_all2(records);
    for(int i=0; i<MAX_MEMBERS; i++){
        printf("%d - %p\n",i, records[i]);
    }    
}

