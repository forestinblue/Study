// 7장 for 문
// "Hello World!" 5번 출력하기
/*
#include <stdio.h>
int main(void)
{
    int i;
    for (i = 0; i < 5; i++)//i는 0부터 4까지 증가
        printf("Hello World!\n");
    return 0;

}
*/



//for 루프 예제
/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (i = 1; i<= 10; i++)
        sum += i;
    printf("1부터 10까지의 정수의 합= %d\n", sum);
    return 0;
}
*/

//다양한 증감수식 형태
/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (int i = 10; i> 0; i--)
        sum += i;
    printf("1부터 10까지의 정수의 합= %d\n", sum);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (int i = 0; i < 10; i += 2)
        printf("Hello World!%d\n ", i);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (int i = 1; i < 10; i *= 2)
        printf("Hello World!%d\n ", i);
    return 0;
}  
*/


/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (int i = 0; i < 100; i = (i*i)+2)
        printf("Hello World!%d\n ", i);
    return 0;
}
*/

//다양한 증감수식 형태1
/*
#include <stdio.h>
int main(void)
{
    int i,  sum;
    sum = 0;

    for (; i < 100; i++)
        printf("Hello World!%d\n ", i);
    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
    int i,  sum;
    sum = 0;
    int k;
    for (printf("반복시작"), i = 0 ; i < 100; i ++)
        printf("Hello World!%d\n ", i);

    return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
    int x, y;
    for (y = 1; y <= 5; y ++)
    {
        for (x = 0 ; x< y; x++)
            printf("*");
        printf("\n");  //내부 반복문이 종료될 때마다 실행
    }
    return 0;
}
*/





//9장

//지역 변수 예제
/*
#include <stdio.h>
int main(void)
{
    int i;
    for( i = 0 ; i < 5 ; i++)
    {
        int temp = 1;
        printf("temp = %d\n", temp);
        temp ++;
    }
    return 0;
}
*/

//지역 변수 초기값 
/*
#include <stdio.h>
int temp;
int main(void)
{
    //int temp;
    printf("temp = %d\n", temp);
}
*/

//함수의 매개 변수
/*
#include <stdio.h>
int inc(int counter);

int main(void)
{
    int i;

    i = 10;
    printf("함수 호출전 i = %d\n", i);
    inc(i);
    printf("함수 호출후 i = %d\n", i);
    return 0;
}

int inc(int counter)
{
    counter ++;
}
*/

//전역 변수의 초기값과 생존 기간
/*
#include <stdio.h>

int A;
int B;
int add()
{
    return A + B;
}

int main()
{
    int answer;
    //A = 5;
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
    printf("counter=%d\n", counter);
    return 0;
}
*/

//저장 유형 지정자 static
/*
#include <stdio.h>

void sub() {
    static int scount = 0;
    int acount = 0;
    printf("scount = %d\t", scount );

    printf("acount = %d\n", acount);
    scount ++;
    acount ++;
}

int main(void){
    sub();
    sub();
    sub();

    return 0;
}
*/

//같은 이름의 전역변수와 지역변수
/*
#include <stdio.h>

int sum = 1;

int main(void)
{
    int sum = 0; 
    printf("sum = %d\n", sum);
    return 0;
}
*/






//10장 배열
//배열 예제(성적 처리)
/*
#include <stdio.h>
#define STUDENTS 10
int main (void)

{
    int scores [STUDENTS];
    int sum = 0;
    int i , average;

    for(i = 0; i < STUDENTS; i++){
        printf("학생들의 성적을 입력하시오:");
        scanf("%d", &scores[i]);
    }
    for (i=0; i< STUDENTS; i++)
        sum += scores[i];
    average = sum / STUDENTS;
    printf("성적 평균 = %d\n", average);
    return 0;
}
*/

//배열의 초기화 예제
/*
#include <stdio.h>
int main(void)
{
    int scores[5] = {31, 63};
    int i ;

    for(i = 0; i < 5; i++)
        printf("scores[%d] = %d\n", i , scores[i]);
    return 0;
}
*/


//배열과 함수
/*
#include <stdio.h>
#define STUDENTS 5
int get_average(int scores[], int n);
int main(void)
{
    int scores[STUDENTS] = {1,2,3,4,5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("평균은 %d입니다. \n", avg);
    return 0;
}
int get_average(int scores[] , int n)
{
     int i;
     int sum = 0;

     for(i = 0; i < n; i++)
        sum += scores[i];
    return sum / n ;
}
*/

//배열이 함수의 인수인 경우
/*
#include <stdio.h>
#define SIZE 7

void modify_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = {1,2,3,4,5,6,7};

    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list,SIZE);

    return 0;
}

void modify_array(int a[], int size)
{
    int i;

    for(i =0; i< size; i++)
        ++a[i];
}
void print_array(int a[], int size)
{
    int i;

    for (i =0; i < size; i++)
        printf("%3d", a[i]);
    printf("\n");
}
*/


//선택정렬 (selection sort)
/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int list[SIZE] = {3,2,9,7,1,4,8,0,6,5};
    int i, j, temp , least;

    for (i = 0; i < SIZE-1; i++)
    {
        least = i;
        for(j = i+1; j< SIZE ; j++)
            if(list[j] < list[least])
                least = j;
            
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
        
    }
    for (i = 0; i < SIZE; i++)
        printf("%d", list[i]);

    printf("\n");
    return 0;
}
*/

//2차원 배열의 활용
/*
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5

int main(void)
{
    int s[ROWS][COLS]; //2차원 배열 선언
    int i , j ; //2개의 인덱스 변수

    for (i = 0; i < ROWS ; i++)
        for (j = 0; j < COLS; j++)
            s[i][j] = rand() % 100;
    
    for (i = 0; i< ROWS; i++){
        for (j = 0 ; j < COLS; j++)
            printf(" % 02d", s[i][j]);
        printf("\n");
    }
    return 0;

}
*/


//2차원 배열을 함수로 전달하기
/*
#include <stdio.h>

#define YEARS 3
#define PRODUCTS 5

int sum(int scores[YEARS][PRODUCTS]);

int main(void)
{
    int sales[YEARS][PRODUCTS] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int total_sale;

    total_sale = sum(sales);
    printf("총매출은 %d입니다.\n", total_sale);

    return 0;
}

int sum(int scores[YEARS][PRODUCTS]
)
{
    int y,p;
    int total = 0;

    for (y = 0; y < YEARS; y++)
        for (p = 0 ; p < PRODUCTS; p++)
            total += scores[y][p];
    return total;
}
*/






//11장 포인터
//포인터 예제
/*
#include <stdio.h>

int main(void)
{
    int x = 10, y=20;
    int *p;

    p= &x;
    printf("p= %d\n", p);
    printf("*p = %d\n\n", *p);

    p = &y;
    printf("p= %d\n",p);
    printf("*p = %d\n", *p);
    return 0;
}
*/

//포인터 예제
/*
#include <stdio.h>
int main(void)
{
    int i = 10;
    int *p;

    p = &i;
    printf("i = %d\n", i);

    * p = 20;

    printf("i = %d\n", i);
    return 0;
}
*/

//포인터 사용시 주의점:포인터의 타입과 변수의 타입은 일치하여야 한다.
/*
#include <stdio.h>

int main(void)
{
    int i; 
    double *pd;

    pd = &i; // 오류! double형 포인터에 int형 변수의 주소를 대입
    *pd =36.5;

    return 0;
}
*/

//간접 참조 연산자와 증감 연산자
/*
#include <stdio.h>

int main(void)
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);
    (*pi) ++;  //pi가 가리키는 위치의 값을 증가한다.
    printf("i = %d, pi = %p\n", i, pi);
    
    printf("i = %d, pi = %p\n", i, pi);
    *pi++;  //pi가 가리키는 위치에서 값을 가져온 후에 pi를 증가한다.
    printf("i = %d, pi = %p\n", i, pi);
    
    return 0;
}
*/

//swap() 함수 #1(값에 의한 호출)
/*
#include <stdio.h>
void swap(int x, int y);
int main(void)
{
    int a = 100, b= 200;
    printf("a = %d  b = %d \n", a, b);

    swap(a, b);

    printf("a = %d  b = %d\n",a ,b);
    return 0;
}

void swap(int x , int y)
{
    int tmp;
    printf("x = %d y = %d\n", x, y);

    tmp = x;
    x = y;
    y = tmp;

    printf("x=%d y=%d\n", x, y);
}
*/

//swap() 함수 #2 (참조에 의한 호출)
/*
#include <stdio.h>
void swap(int *px , int *py);
int main(void)
{
    int a = 100, b = 200;
    printf("a = %d b = %d \n",a, b);

    swap(&a, &b);

    printf("a = %d b = %d\n",a, b);
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

//2개 이상의 결과를 반환
#include <stdio.h>
//기울기와 y절편을 계산
int get_line_parameter(int x1, int y1 , int x2, int y2, float *slope , float *yintercept)
{
    if(x1 == x2)
        return -1;
    else{
        *slope = (float)(y2 - y1)/(float)(x2 - x1);
        *yintercept = y1 - (*slope)*x1;
        return 0;
    }
}

int main(void)
{
    float s, y;
    if (get_line_parameter(3,3,6,6,&s,&y) == -1)
        printf("에러\n");
    else   
        printf("기울기는 %f, y절편은 %f\n", s, y);
    return 0;
}