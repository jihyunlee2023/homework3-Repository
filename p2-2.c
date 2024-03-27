#include <stdio.h>
void print_one(int *ptr, int rows);

int main() {
        printf("[----- [이지현]  [2023078007] -----]");

    int one[] = {0, 1, 2, 3, 4}; //크기가 5인 배열 선언, 숫자 저장

    printf("one     = %p\n", one); //one[]의 주소 출력
    printf("&one    = %p\n", &one); //one[0]의 주소 출력
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소를 직접 출력
    printf("\n");

    printf("------------------------------------\n"); 
    printf(" print_one(&one[0], 5) \n"); //print_one 함수 호출, 결과 출력
    printf("------------------------------------\n"); 
    print_one(&one[0], 5); //one[0]의 주소와 배열의 크기를 함수에 전달

    printf("------------------------------------\n"); 
    printf(" print_one(one, 5) \n"); //print_one 함수 호출, 결과 출력
    printf("------------------------------------\n"); 
    print_one(one, 5); //one[0]의 주소와 배열의 크기를 함수에 전달
    return 0;
}

void print_one(int *ptr, int rows){
    int i; //정수형 변수 i 선언
    printf ("Address \t Contents\n"); //Address와 Contents 출력

    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //반복문으로 각 요소에 대한 주소와 값을 출력
    printf("\n");
}