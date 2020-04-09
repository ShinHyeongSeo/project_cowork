#include "members.h"
T_Record* members[MAX_MEMBERS]; // 회원정보데이터 (전역)
int _count = 0;

int m_is_available(){
    int i;
    for(i=0; i<MAX_MEMBERS; i++){
        if(members[i]==NULL) return 1;
    }
    return 0;
}

int m_first_available(){
    int i;
    for(i=0; i<MAX_MEMBERS; i++){
        if(members[i]==NULL) return i;
    }
    return -1;
}



int m_count(){
    return _count;
}

void m_create(char* name, char* addr, char* phone, char* menu_name, int price, int qty, char* time, char* pay){
    int index = m_first_available();
    members[index] = (T_Record*)malloc(sizeof(T_Record));
    T_Record* p = members[index];
    strcpy(p->name, name);
    strcpy(p->addr, addr);
    strcpy(p->phone, phone);
    strcpy(p->menu_name, menu_name);  
    p->price = price;
    p->qty = qty;
    strcpy(p->time, time);
    strcpy(p->pay, pay);
    _count++;
}

T_Record* m_search_by_name(char* n){
    int i;
    for(i=0; i<MAX_MEMBERS; i++){
        if(members[i]!=NULL && strcmp(members[i]->name, n)==0) return members[i];
    }
    return NULL;
}

void m_update(T_Record* p, char* addr, char* phone, char* menu_name, int price, int qty, char* time, char* pay){
    strcpy(p->addr, addr);
    strcpy(p->phone, phone);
    strcpy(p->menu_name, menu_name);  
    p->price = price;
    p->qty = qty;
    strcpy(p->time, time);
    strcpy(p->pay, pay);
#ifdef DEBUG
	printf("[Update] update %s\n", addr);
#endif
}

void m_delete(T_Record* p){
    printf("not completed");
    // int i, index;
    // for(i=0; i<MAX_MEMBERS; i++)
    //     if(members[i]==p) {
    //         index=i;
    //         break;
    //     }
    // free(p);
    // members[index] = NULL;
    // _count--;
}

char* m_to_string(T_Record* p){
    static char str[500];
    sprintf(str, "name : %s / addr : %s / phone : %s / menu : %s / price : %d / qty : %d / time : %s / pay : %s", p->name, p->addr, p->phone, p->menu_name, p->price, p->qty, p->time, p->pay);
#ifdef DEBUG
	printf("[m_to_string] m_to_string %s\n", str);
#endif  
     return str;
}

int each_result(T_Record* p){
    static int result =0;
    result = (p->price) * (p->qty);
    return result;
}

void m_get_all(T_Record* a[]){
    int i, c=0;
    for(i=0; i<MAX_MEMBERS; i++){
        if(members[i]!=NULL){
            a[c]=members[i];
            c++;
        }
    }
}

void m_get_all2(T_Record* a[]){
    printf("not completed");
    // int i, c=0;
    // for(i=0; i<MAX_MEMBERS; i++){
    //     a[i]=members[i];
    // }
}

char* m_get_name(T_Record* p){
    return p->name;
#ifdef DEBUG
	printf("[GetName] GetName");
#endif
}

char* m_get_addr(T_Record* p){
    return p->addr;
#ifdef DEBUG
	printf("[GetAddr] GetAddr");
#endif
}

char* m_get_phone(T_Record* p){
    return p->phone;
#ifdef DEBUG
	printf("[GetPhone] GetPhone");
#endif
}

char* m_get_menu(T_Record* p){
    return p->menu_name;
#ifdef DEBUG
	printf("[GetMenu] GetMenu");
#endif
}

int m_get_price(T_Record* p){
    return p->price;
#ifdef DEBUG
	printf("[GetPrice] GetPrice");
#endif
}

int m_get_qty(T_Record* p){
    return p->qty;
#ifdef DEBUG
	printf("[GetQty] GetQty");
#endif
}

char* m_get_time(T_Record* p){
    return p->time;
}

char* m_get_pay(T_Record* p){
    return p->pay;
}

int m_get_all_by_name(T_Record* a[], char* n){
    // 회원이름에 문자열이 포함된 모든 레코드 포인터의 배열 만들기    
    int i, c=0;
    for(i=0; i<MAX_MEMBERS; i++){
        if(members[i]!=NULL && strstr(members[i]->name, n)){
            a[c]=members[i];
            c++;
        }
    }
    return c;
} 

// int m_get_all_by_city(T_Record* a[], char* n){
//     // 회원거주도시가 문자열과 일치하는 모든 레코드 포인터의 배열 만들기 
//     int i, c=0;
//     for(i=0; i<MAX_MEMBERS; i++){
//         if(members[i]!=NULL && (strcmp(members[i]->city, n)==0)){
//             a[c]=members[i];
//             c++;
//         }
//     }
//     return c;
// }

void m_init(){
    // 모든 레코드 제거    
    int i;
    for(i=0; i<MAX_MEMBERS; i++){
        if(members[i]!=NULL) {
            free(members[i]);
        }
        members[i] = NULL;
    }
    _count = 0;

} 

char* m_to_string_save(T_Record* p){
    static char str[300];
    sprintf(str, "%s %s %s %s %d %d %s %s", p->name, p->addr, p->phone, p->menu_name, p->price, p->qty, p->time, p->pay);
    return str;
}

