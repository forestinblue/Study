//print_stars 함수를 2번 호출해 출력
/*
#include <stdio.h>

void print_stars()
{
    for (int i = 0; i < 30; i++)
        printf("*");
}
int main(void)
{
    print_stars();
    printf("\nHello World!\n");
    print_stars();
    printf("\n");
    return 0;
}
*/

//두수중에서 큰 수를 찾는 함수 예제
/*
#include <stdio.h>
int get_max(int x , int y)
{
    if(x > y) return(x);
    else return(y);
}

int main(void)
{
    int a,b;

    printf("두개의 정수를 입력하시오:");
    scanf("%d %d", &a , &b);

    printf("두수 중에서 큰 수는 %d입니다. \n", get_max(a,b));

    return 0;
}
*/

//지역 변수 예제
/*
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        int temp = 1;
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}
*/

//지역변수 초기값 - temp는 초기화 되지 않았으므로 쓰레기 값을 가진다.
/*
#include <stdio.h>
int main(void)
{
    int temp;
    printf("temp= %d\n", temp);
}
*/

//함수의 매개 변수
/*
#include <stdio.h>
int inc(int counter);

int inc(int counter)
{
    counter ++;
    return counter;
}

int main(void)
{
    int i;

    i = 10;
    printf("함수 호출 전 i=%d\n", i);
    inc(i);
    printf("함수 호출 후 i=%d\n", i);
    return 0;
}
*/

//전역 변수의 초기값과 생존 기간
/*
#include<stdio.h>
int A;
int B;
int add()
{
    return A + B;
}

int main()
{
    int answer;
    A = 5;
    B = 7;
    answer = add();
    printf("%d + %d = %d\n", A, B, answer);
    return 0;
}
*/



//전역 변수의 초기값
/*
#include <stdio.h>

int counter;

int main(void)
{
    printf("counter = %d \n", counter);
    return 0;
}
*/

//변수의 속성
/*
#include <stdio.h>
int x;
void sub();

int main(void)
{
    for (x = 0 ; x <10 ; x++)
        sub();
}

void sub()
{
    for (x = 0; x < 10; x++)
        printf("*");
}
*/

//같은 이름의 전역변수와 지역변수
/*
#include <stdio.h>

int sum = 1; //전역 변수
int main(void)
{
    int sum = 0; //지역 변수
    printf("sum = %d\n", sum);
    return 0;
}
*/

//저장 유형 지정자 static
/*
#include <stdio.h>

void sub() {
    static int scount = 0;
    int acount =0;
    printf("scount = %d\t", scount);

    printf("acount = %d\n", acount);
    scount++;
    acount++;
}

int main(void){
    sub();
    sub();
    sub();
    return 0;
}
*/