
//포인터 선언 예제
/*
#include <stdio.h>

int main(void)
{
    int i = 10;
    double f = 12.3;
    int *pi = NULL;

    double * pf = NULL;
    pi = &i;
    pf = &f;

    printf("%u %u\n", pi, &i);
    printf("%u %u\n", pf, &f);
    return 0; 
    
}
*/

//포인터 예제 #1
/*
#include <stdio.h>
int main(void)
{
    int i = 3000;
    int *p = NULL;

    p = &i;

    printf("i = %d\n", i); //변수의 값 출력
    printf("&i = %u \n\n", &i);  //변수의 주소 출력

    printf("p = %u\n", p);
    printf("*p= %d\n", *p);

    return 0;
}
*/

//포인터 예제 #2
/*
#include <stdio.h>

int main(void)
{
    int x = 10, y =20;
    int *p;

    p = &x;
    printf("p = %d\n", p);
    printf("*p = %d\n\n", *p);

    p = &y;
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    return 0;
}
*/

//포인터 예제 #3
/*
#include <stdio.h>
int main(void)
{
    int i =10;
    int *p;

    p = &i;
    printf("i = %d\n", i);

    *p = 20;
    printf("i = %d\n", i);
    return 0;
}
*/

//포인터 사용시 주의점: 포인터의 타입과 변수의 타입은 일치하여야 한다.
/*
#include <stdio.h>

int main(void)
{
    int i;
    double *pd;

    pd = &i;
    *pd = 36.5;

    return 0;
}
*/

//증가 연산 예제
/*
int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *) 10000;
    pd = (double *) 10000;
    printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

    pc++;
    pi++;
    pd++;
    printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    printf("pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc+2, pi+2, pd+2);
    return 0;
}
*/

//간접 참조 연산자와 증감 연산자
/*
#include <stdio.h>

int main(void)
{
    int i = 10;
    int * pi = &i;

    printf("i = %d, pi = %p\n", i, pi);
    (*pi)++;
    printf("i = %d, pi = %p\n", i, pi);

    printf("i = %d, pi = %p\n", i, pi);
    *pi++;
    printf("i = %d, pi = %p\n", i, pi);
    
    return 0; 
}
*/

//포인터의 형 변환 예제
/*
#include <stdio.h>

int main(void)
{
    int data = 0x0A0B0C0D;
    char *pc;
    pc = (char *)&data;

    for (int i =0; i < 4; i++){
        printf("*(pc + %d) = %02X \n", i , *(pc + i ));
    }
    return 0;
}
*/


//swap() 함수 #1 (값에 의한 호출)
/*
#include <stdio.h>
void swap(int x, int y);
int main(void)
{
    int a = 100, b = 200;
    printf("a = %d  b = %d\n",a, b);

    swap(a,b);

    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap(int x, int y)
{
    int tmp;
    printf("x = %d  y = %d\n",x,y);

    tmp = x;
    x = y;
    y = tmp;

    printf("x = %d  y = %d\n", x, y);
}
*/


//swap() 함수 #2(참조에 의한 호출)
/*
#include <stdio.h>
void swap(int *px, int *py);
int main(void)
{
    int a = 100, b = 200;
    printf("a = %d b = %d\n",a,b);

    swap(&a, &b);

    printf("a=%d b=%d\n", a, b);
    return 0;
}

void swap(int *px, int *py)
{
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}
*/



//2개 이상의 결과를 
/*
#include <stdio.h>
//기울기와 y절편을 계산
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
    if(x1 == x2)
        return -1;
    else {
        *slope = (float)(y2 - y1)/(float)(x2 - x1);
        *yintercept = y1 - (*slope) * x1;
        return 0;
    }
}

int main(void)
{
    float s, y;
    if (get_line_parameter(3,3,6,6, &s, &y) == -1)
        printf("에러\n");
    else
        printf("기울기는 %f, y절편은 %f\n",s, y);
    return 0;
}
*/


//포인터와 배열
/*
#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};

    printf("&a[0] = %u\n", &a[0]);
    printf("&a[1] = %u\n", &a[1]);
    printf("&a[2] = %u\n", &a[2]);

    printf("a = %u\n", a);
    return 0;
    
}
*/

//포인터와 배열의 관계
/*
#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40 ,50};
    printf("a = %u\n", a);
    printf("a + 1 = %u\n", a+1);
    printf("*a = %d\n", *a);
    printf("*(a+1) = %d\n", *(a+1));
    return 0;
}
*/

//포인터를 배열처럼 사용
/*
#include <stdio.h>
int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    int *p;

    p = a;
    printf("a[0]=%d a[1]=%d a[2]= %d \n", a[0], a[1], a[2]);
    printf("p[0]=%d p[1]=%d p[2]= %d \n", p[0], p[1], p[2]);
    
    p[0] = 60;
    p[1] = 70;
    p[2] = 80;

    printf("a[0]=%d a[1]=%d a[2]= %d \n", a[0], a[1], a[2]);
    printf("p[0]=%d p[1]=%d p[2]= %d \n", p[0], p[1], p[2]);
    return 0; 
    }
*/

//포인터와 함수의 관계
#include <stdio.h>

void sub(int b[], int n);

int main(void)
{
    int a[3] = {1,2,3};

    printf("%d %d %d \n", a[0], a[1], a[2]);
    sub(a,3);
    printf("%d %d %d \n", a[0], a[1], a[2]);
    
    return 0;
}

void sub(int b[], int n)
{
    b[0] =4;
    b[1] = 5;
    b[2] =6;
    
}