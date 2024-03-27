#include <stdio.h> 
#include <stdlib.h>

int main() {
        printf("[----- [이지현]  [2023078007] -----]");

    int list[5]; // 정수형 배열 'list' 선언, 크기는 5
    int *plist[5]; // 정수형 포인터 배열 'plist' 선언, 크기는 5

    
    list[0] = 10; //list[0]에 10 저장
    list[1] = 11; //list[1]에 11 저장
    
    plist[0] = (int*)malloc(sizeof(int)); // plist[0]에 int 하나의 크기로 동적 메모리 할당
   
    printf("list[0] \t= %d\n", list[0]);//lidw[0]의 값 출력
    printf("list \t\t= %p\n", list); //list의 시작 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list[]의 시작 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list[1]의 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list[2]의 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list[3]의 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list[4]의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력

    free(plist[0]); //할당된 메모리를 해제
}
