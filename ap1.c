#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("[----- [이지현]  [2023078007] -----]\n");

    int list[5]; //크기가 5인 배열을 선언한다.
    int *plist[5] = {NULL, }; //포인터를 저장할 크기가 5인 배열을 선언한다.

    plist[0]=(int *)malloc(sizeof(int)); //malloc 함수를 사용하여 정수 하나의 크기만큼의 메모리를 할당하고, 이 메모리의 주소를 plist[0]에 저장한다.

    list[0]=1; //첫번째 배열에 1을 저장한다.
    list[1]=100; //두번째 배열에 2를 저장한다.

    *plist[0]=200; //plist[0]이 가리키는 위치에 200을 저장한다. malloc으로 할당받은 주소가 저장되어 있으므로, 그 위치에 200이 저장된다.

    printf("list[0]               = %d\n", list[0]); //list[0]의 값 출력
    printf("&list[0]              = %p\n", &list[0]); //list[0]의 주소 출력
    printf("list                  = %p\n", list); //list[]의 기본 주소
    printf("&list                 = %p\n", &list); //list[] 자체의 주소

    printf("--------------------------------------------\n\n");
    printf("list[1]               = %d\n", list[1]); //list[1]의 값 출력
    printf("&list[1]              = %p\n", &list[1]); //list[1]의 주소 출력
    printf("*(list+1)             = %d\n", *(list + 1)); //list의 시작부터 1만큼 떨어진 위치의 값 = list[1] 출력
    printf("list+1                = %p\n", &list+1);

    printf("--------------------------------------------\n\n");

    printf("*plist[0]             = %d\n", *plist[0]); //plist[0]이 가리키는 위치에 저장된 값 출력
    printf("&plist [0]            = %p\n", &plist[0]); //plist 배열의 첫 번째 요소의 주소 출력
    printf("&plist                = %p\n", &plist); //plist의 시작 주소 출력
    printf("plist                 = %p\n", plist); //plist의 시작 주소 출력
    printf("plist [0]             = %p\n", plist[0]); //plist[0]에 저장된 주소 값 출력
    printf("plist[1]              = %p\n", plist[1]); //plist[1]에 저장된 주소 값 출력
    printf("plist[2]              = %p\n", plist[2]); //plist[2]에 저장된 주소 값 출력
    printf("plist[3]              = %p\n", plist[3]); //plist[3]에 저장된 주소 값 출력
    printf("plist[4]              = %p\n", plist[4]); //plist[4]에 저장된 주소 값 출력


    free(plist[0]); //plist[0]에 할당된 메모리를 해제
}