// 7�� for ��
// "Hello World!" 5�� ����ϱ�
/*
#include <stdio.h>
int main(void)
{
    int i;
    for (i = 0; i < 5; i++)//i�� 0���� 4���� ����
        printf("Hello World!\n");
    return 0;

}
*/



//for ���� ����
/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (i = 1; i<= 10; i++)
        sum += i;
    printf("1���� 10������ ������ ��= %d\n", sum);
    return 0;
}
*/

//�پ��� �������� ����
/*
#include <stdio.h>
int main(void)
{
    int i, sum;
    sum = 0;
    for (int i = 10; i> 0; i--)
        sum += i;
    printf("1���� 10������ ������ ��= %d\n", sum);
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

//�پ��� �������� ����1
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
    for (printf("�ݺ�����"), i = 0 ; i < 100; i ++)
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
        printf("\n");  //���� �ݺ����� ����� ������ ����
    }
    return 0;
}
*/





//9��

//���� ���� ����
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

//���� ���� �ʱⰪ 
/*
#include <stdio.h>
int temp;
int main(void)
{
    //int temp;
    printf("temp = %d\n", temp);
}
*/

//�Լ��� �Ű� ����
/*
#include <stdio.h>
int inc(int counter);

int main(void)
{
    int i;

    i = 10;
    printf("�Լ� ȣ���� i = %d\n", i);
    inc(i);
    printf("�Լ� ȣ���� i = %d\n", i);
    return 0;
}

int inc(int counter)
{
    counter ++;
}
*/

//���� ������ �ʱⰪ�� ���� �Ⱓ
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

//���� ������ �ʱⰪ 
/*
#include <stdio.h>

int counter;
int main(void)
{
    printf("counter=%d\n", counter);
    return 0;
}
*/

//���� ���� ������ static
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

//���� �̸��� ���������� ��������
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






//10�� �迭
//�迭 ����(���� ó��)
/*
#include <stdio.h>
#define STUDENTS 10
int main (void)

{
    int scores [STUDENTS];
    int sum = 0;
    int i , average;

    for(i = 0; i < STUDENTS; i++){
        printf("�л����� ������ �Է��Ͻÿ�:");
        scanf("%d", &scores[i]);
    }
    for (i=0; i< STUDENTS; i++)
        sum += scores[i];
    average = sum / STUDENTS;
    printf("���� ��� = %d\n", average);
    return 0;
}
*/

//�迭�� �ʱ�ȭ ����
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


//�迭�� �Լ�
/*
#include <stdio.h>
#define STUDENTS 5
int get_average(int scores[], int n);
int main(void)
{
    int scores[STUDENTS] = {1,2,3,4,5};
    int avg;

    avg = get_average(scores, STUDENTS);
    printf("����� %d�Դϴ�. \n", avg);
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

//�迭�� �Լ��� �μ��� ���
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


//�������� (selection sort)
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

//2���� �迭�� Ȱ��
/*
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5

int main(void)
{
    int s[ROWS][COLS]; //2���� �迭 ����
    int i , j ; //2���� �ε��� ����

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


//2���� �迭�� �Լ��� �����ϱ�
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
    printf("�Ѹ����� %d�Դϴ�.\n", total_sale);

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






//11�� ������
//������ ����
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

//������ ����
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

//������ ���� ������:�������� Ÿ�԰� ������ Ÿ���� ��ġ�Ͽ��� �Ѵ�.
/*
#include <stdio.h>

int main(void)
{
    int i; 
    double *pd;

    pd = &i; // ����! double�� �����Ϳ� int�� ������ �ּҸ� ����
    *pd =36.5;

    return 0;
}
*/

//���� ���� �����ڿ� ���� ������
/*
#include <stdio.h>

int main(void)
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);
    (*pi) ++;  //pi�� ����Ű�� ��ġ�� ���� �����Ѵ�.
    printf("i = %d, pi = %p\n", i, pi);
    
    printf("i = %d, pi = %p\n", i, pi);
    *pi++;  //pi�� ����Ű�� ��ġ���� ���� ������ �Ŀ� pi�� �����Ѵ�.
    printf("i = %d, pi = %p\n", i, pi);
    
    return 0;
}
*/

//swap() �Լ� #1(���� ���� ȣ��)
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

//swap() �Լ� #2 (������ ���� ȣ��)
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

//2�� �̻��� ����� ��ȯ
#include <stdio.h>
//����� y������ ���
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
        printf("����\n");
    else   
        printf("����� %f, y������ %f\n", s, y);
    return 0;
}