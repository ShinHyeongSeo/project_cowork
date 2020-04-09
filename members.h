#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMBERS 100      // 저장할 수 있는 회원 레코드 최대 갯수
#define MAX_INCOME_LIST 10

// 회원 정보 레코드의 데이터 타입을 정의함
typedef struct st_member{
    char name[20];  // 주문자 이름
    char addr[150]; // 주문자가 주문 시 입력한 주소(배달할 주소)
    char phone[20]; // 주문자 전화번호
    char menu_name[20]; // 주문한 메뉴 이름
    int price; // 주문한 메뉴의 가격
    int qty; // 주문한 메뉴의 개수
    char time[20]; // 주문자가 주문을 완료한 시간
    char pay[20]; // 주문자가 원하는 결제 방법
} T_Record;

typedef struct st_income{
    int income;
} I_Record;

// 라이브러리 함수 원형을 선언함
int m_is_available();       // 현재 추가할 수 있는 데이터 공간이 있는가?
int m_first_available();    // 추가할 수 있는 가장 빠른 포인터 배열의 인덱스 찾기
int m_count();              // 현재 저장된 회원 레코드의 갯수 가져오기
void m_create(char* name, char* addr, char* phone, char* menu_name, int price, int qty, char* time, char* pay);   // 회원정보로 신규 회원 레코드 추가
T_Record* m_search_by_name(char* n);                // 이름이 일치하는 회원 레코드 포인터 찾기
void m_update(T_Record* p, char* addr, char* phone, char* menu_name, int price, int qty, char* time, char* pay);  // 특정 회원 레코드의 정보 업데이트
void m_delete(T_Record* p);     // 특정 회원 레코드의 회원정보 제거
void m_get_all(T_Record* a[]);  // 회원정보가 들어있는 모든 레코드 포인터의 배열을 만들기
void m_get_all2(T_Record* a[]);  // 모든 레코드 포인터의 배열을 만들기 (for debug)
char* m_to_string(T_Record* p); // 특정 회원 레코드의 내용을 문자열로 가져오기
char* m_get_name(T_Record* p);   // 특정 회원 레코드의 회원이름 가져오기
char* m_get_addr(T_Record* p);  // 특정 회원 레코드의 회원 주소 가져오기
char* m_get_phone(T_Record* p); // 특정 회원 레코드의 회원전화번호 가져오기
char* m_get_menu(T_Record* p); 
int m_get_price(T_Record* p); // 특정 주문자 주문 가격 가져오기
int m_get_qty(T_Record* p);
char* m_get_time(T_Record* p);
char* m_get_pay(T_Record* p);
int m_get_all_by_name(T_Record* a[], char* n);  // 회원이름에 문자열이 포함된 모든 레코드 포인터의 배열 만들기 
//int m_get_all_by_city(T_Record* a[], char* n);  // 회원거주도시가 문자열과 일치하는 모든 레코드 포인터의 배열 만들기 
void m_init(); // 모든 레코드 제거
char* m_to_string_save(T_Record* p); // 특정 회원 레코드의 내용을 파일저장용 문자열로 가져오기
int each_result(T_Record* p);

