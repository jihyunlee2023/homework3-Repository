#include <stdio.h> 
#define MAX_SIZE 100 //최대 배열 크기를 100으로 정의

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer; //전역 변수로 입력 배열과 답을 저장할 변수 선언
int i; //전역 변수 선언

int main(void) {
    printf("[----- [이지현]  [2023078007] -----]\n");
    for(i=0; i < MAX_SIZE; i++) //input[]을 i로 초기화하는 반복문
        input[i] = i;

    printf("--------------------------------------\n"); 
    printf(" sum1(input, MAX_SIZE) \n"); //sum1 호출해서 결과를 출력
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input); //input의 메모리 주소 출력

    answer = sum1(input, MAX_SIZE);//sum1를 호출하고 결과를 answer에 저장 
    printf("The sum is: %f\n\n", answer); //answer 출력

    printf("--------------------------------------\n"); 
    printf(" sum2(input, MAX_SIZE) \n"); //sum2 호출해서 결과를 출력
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input); //input의 메모리 주소 출력

    answer = sum2(input, MAX_SIZE);//sum2를 호출하고 결과를 answer에 저장 
    printf("The sum is: %f\n\n", answer); //answer 출력


    printf("--------------------------------------\n"); 
    printf(" sum3(MAX_SIZE, input) \n"); //sum3 호출해서 결과를 출력
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input); //input의 메모리 주소 출력

    
    answer = sum3(MAX_SIZE, input); //sum3를 호출하고 결과를 answer에 저장 
    printf("The sum is: %f\n\n", answer); //answer 출력
}

float sum1(float list[], int n) {
    printf("list \t= %p\n", list); //매개변수로 받은 배열의 주소 출력
    printf("&list \t= %p\n\n", &list); //매개변수 배열의 주소 출력

    int i; //정수형 변수 i 선언
    float tempsum = 0; //실수형 변수 tempsum 선언
    for(i = 0; i < n; i++) //배열의 모든 요소를 반복문으로 합계 계산
        tempsum += list[i];
    return tempsum; //합계 반환
}

float sum2(float *list, int n) {
    printf("list \t= %p\n", list); //매개변수로 받은 배열의 주소 출력
    printf("&list \t= %p\n\n", &list); //매개변수 포인터의 주소 출력

    int i;//정수형 변수 i 선언
    float tempsum = 0; //실수형 변수 tempsum 선언
    for(i = 0; i < n; i++) //배열의 모든 요소를 반복문으로 합계 계산
        tempsum += *(list + i);
    return tempsum; //합계 반환
}

float sum3(int n, float *list) {
    printf("list \t= %p\n", list); //매개변수로 받은 list[0]을 가리키는 주소 출력
    printf("&list \t= %p\n\n", &list); //list 포인터 변수의 주소 출력

    int i;//정수형 변수 i 선언
    float tempsum = 0; //실수형 변수 tempsum 선언
    for(i = 0; i < n; i++) //배열의 모든 요소를 반복문으로 합계 계산
        tempsum += *(list + i);
    return tempsum; //계산된 합계 반환
}