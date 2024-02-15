//배열 선언 예제
/*
#include <stdio.h>

int main(void)
{
    int i;
    int scores[5];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    for (i = 0; i < 5;i++)
        printf("scores[%d]=%d\n", i, scores[i]);
    return 0; 
}
*/

//배열 예제(난수로 채우기)
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int scores[SIZE];

    for(i = 0; i < SIZE; i++)
        scores[i] = rand() % 100;
    for (i=0; i< SIZE; i++)
        printf("scores[%d] = %d\n", i , scores[i]);

    return 0;
}
*/

//배열 예제 (성적 처리)
/*
#include <stdio.h>
#define STUDENTS 10
int main(void)
{
    int scores [STUDENTS];
    int sum = 0;
    int i , average;

    for(i = 0; i < STUDENTS; i++){
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);
    }
    for(i=0; i < STUDENTS;i++ )
        sum += scores[i] ;

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
    int scores[5] = {31, 63, 62, 87, 14};
    int i;

    for (i = 0; i < 5; i++)
        printf("scores[%d] = %d\n", i, scores[i]);

    return 0;
}
*/

//배열의 초기화 예제
/*
#include <stdio.h>
int main(void)
{
    int scores[5] = {31, 63};
    int i;

    for(i = 0; i < 5; i++)
        printf("scores[%d] = %d\n", i , scores[i]);

    return 0;
}
*/

//배열
/*
#include <stdio.h>
int main(void)
{
    int scores[5];
    int i;

    for (i = 0; i< 5; i++)
        printf("scores[%d] = %d\n", i , scores[i]);
    return 0;
}
*/

//배열 예제(최솟값 찾기)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(void)
{
    int prices[SIZE] = {0};
    int i, minimum;
    printf("-----------------------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("-----------------------------------------\n");
    srand((unsigned)time(NULL));
    for (i =0;i<SIZE; i++){
        prices[i] = (rand()%100) + 1;
        printf("%-3d", prices[i]);
    }
    printf("\n\n");
    minimum = prices[0];
    for(i = 1; i < SIZE; i++)
    {
        if(prices[i] < minimum)
            minimum = prices[i];
    }
    printf("최소값은 %d입니다.\n", minimum);
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
    int scores[STUDENTS]= {1,2, 3,4,5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("평균은 % d 입니다. \n", avg);
    return 0;
}

int get_average(int scores[], int n)
{
    int i;
    int sum = 0;

    for (i = 0; i < n ; i++)
        sum += scores[i];
    return sum / n;
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
    print_array(list, SIZE);

    return 0;
}

void modify_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        ++a[i];
}
void print_array(int a[], int size)
{
    int i;
    for(i = 0; i< size; i++)
        printf("%d ", a[i]);
    printf("\n");
}
*/

//선택 정렬
/*
#include <stdio.h>
#define SIZE 10

int main(void)
{
    int list[SIZE] = {3,2,9,7,1,4,8,0,6,5};
    int i, j, temp, least;

    for (i =0; i < SIZE - 1; i++)
    {
        least = i;
        for(j = i + 1; j < SIZE; j++)
            if(list[j] < list[least])
                least = j;
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
    for (i = 0; i < SIZE; j++)
        printf("%d ", list[i]);

    printf("\n");
    return 0;
}
*/

//순차탐색

/*
#include <stdio.h>
#define SIZE 10

int main(void)

{
    int key, i;
    int list[SIZE] = {1,2,3,4,5,6,7,8,9};

    printf("탐색할 값을 입력하시오:");
    scanf("%d", &key);

    for(i = 0; i < SIZE; i++)
        if(list[i] == key)
            pritf("탐색 성공 인덱스= %d\n", i);
    printf("탐색 종료\n");
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
    int i, j; //2개의 인덱스 변수

    for (i = 0; i < ROWS ; i++)
        for(j=0; j< COLS; j++)
            s[i][j] = rand() % 100;
    for (i = 0; i < ROWS; i++){
        for (j = 0; j < COLS; j++)
            printf(" % 02d", s[i][j]);
        printf("\n");
    }
    return 0;
}
*/


//2차원 배열의 초기화
/*
#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(voud) {
    int a[ROWS][COLS] = {{87, 98, 80, 76, 3},
    {99, 89,90, 90, 0},
    {65, 68, 50, 49, 0}
    };

    int i;
    for(i = 0; i< ROWS;i++ ){
        double final_scores = a[i][0]  * 0.3 + a[i][1] * 0.4 + 
        a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];

        printf("학생 #%i의 최종성적 = %10.2f \n", i+1 , final_scores);

    }
    return 0;
}
*/

//2차원 배열을 이용한 행렬의 표현
/*
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(void)
{
    int A[ROWS][COLS] = {{2,3,0}, 
                        {8,9,1}, {7, 0, 5}};
    int B[ROWS][COLS] = {{1,0,0}, 
                        {1,0,0,}, {1,0,0}};
    int C[ROWS][COLS];

    int r, c;

    //두개의 행렬을 더한다.
    for(r = 0; r < ROWS; r++)
        for(c = 0; c < COLS; c++)
            C[r][c] = A[r][c] + B[r][c];

    //행렬을 출력한다.
    for(r = 0; r < ROWS; r++)
    {
        for(c = 0; c< COLS; c++)
            printf("%d", C[r][c]);
        printf("\n");
    }
    return  0;
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
    printf("총매출은 %d입니다. \n",
    total_sale);

    return 0;
}

int sum(int scores [YEARS][PRODUCTS])
{
    int y, p;
    int total = 0;

    for(y = 0; y< YEARS; y++)
        for(p = 0; p< PRODUCTS; p++)
            total += scores[y][p];

    return total;
}
*/


