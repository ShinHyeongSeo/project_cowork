# <배달 오더 목록 관리 시스템> #
주문이 들어온 정보를 관리하는 시스템입니다.
주문자의 이름, 주소, 전화번호, 메뉴 이름, 가격, 개수, 주문 시간, 결제 방법 총 8가지의 정보를 관리합니다.

## *메뉴 설명 ##
총 11가지의 메뉴가 있습니다.
1. 주문정보 추가
2. 주문자 명으로 해당  주문정보 출력
3. 주문정보 전체 리스트 출력
4. 주문정보 변경
5. 주문취소
6. 주문정보를 원하는 항목별로 검색
7. 저장된 주문 정보 불러오기
8. 주문 정보 파일에 저장하기
9. 주문자명을 알파벳순으로 정렬
10. 수입 출력하기(각 수입, 총 수입)
11. 수입 파일로 저장하기

## *메뉴별 세부설명 ##

1. 주문정보 추가
-> 주문이 들어온 경우 주문자의 정보를 추가한다.

2. 주문자 명으로 해당 주문정보 출력 
-> 주문정보를 찾기 원하는 주문자가 있다면 이름으로 검색하여 주문정보를 출력한다.

3. 주문정보 전체 리스트 출력
-> 현재 관리하고 있는 주문정보 전체 리스트를 출력한다.

4. 주문정보 변경
-> 주문을 변경하고 싶은 주문자의 이름을 입력하고 정보를 수정한다.

5. 주문취소
-> 주문을 취소한 주문자의 이름을 입력하여 주문정보 리스트에서 삭제한다.

6. 주문정보를 원하는 항목별로 검색
-> 항목별로 겹치는 사항을 출력하고 싶을 때 원하는 항목을 선택하고 내용을 입력하면 해당하는 정보만 출력된다.
(ex. 메뉴 이름이라는 항목을 선택하고 Hamburger라고 입력하면 Hamburger를 주문한 사람들의 정보만 출력된다.)

7. 저장된 주문 정보 불러오기
-> members.txt에 저장되어 있는 주문 정보들을 파일로 불러와서 현재 리스트로 관리한다.

8. 주문 정보 파일에 저장하기
-> 현재 관리하고 있는 주문 정보를 members.txt 파일에 저장한다.

9. 주문자명을 알파벳순으로 정렬
-> 주문자명을 알파벳순으로 정렬하여 전체 리스트를 출력합니다.

10. 수입 출력하기(각 수입, 총 수입)
-> index 순서대로 각 수입이 출력되고 최종적으로 총 수입이 출력된다.

11. 수입 파일로 저장하기
-> 총 수입을 income.txt 파일에 저장합니다.


## *build & run ##

1. 프로그램 실행- 아래 순서대로 입력
```C
make main
```
```C
./main
```
2. 프로그램 디버깅 실행- 아래 순서대로 입력
```C
make main_debug
```
```C
./main
```
3. .o 파일(object 파일)과 main 최종 실행 파일을 지울 때
```C
make clean
```

1. 실행 후 2. 실행을 하거나 2. 실행 후 1. 을 실행할 때 

첫 번째 실행 후 두 번째 실행을 하기 전 3. 을 실행해주기!



감사합니다 !
