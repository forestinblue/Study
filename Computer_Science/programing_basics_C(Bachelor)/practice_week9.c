//print_stars �Լ��� 2�� ȣ���� ���
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

//�μ��߿��� ū ���� ã�� �Լ� ����
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

    printf("�ΰ��� ������ �Է��Ͻÿ�:");
    scanf("%d %d", &a , &b);

    printf("�μ� �߿��� ū ���� %d�Դϴ�. \n", get_max(a,b));

    return 0;
}
*/

//���� ���� ����
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

//�������� �ʱⰪ - temp�� �ʱ�ȭ ���� �ʾ����Ƿ� ������ ���� ������.
/*
#include <stdio.h>
int main(void)
{
    int temp;
    printf("temp= %d\n", temp);
}
*/

//�Լ��� �Ű� ����
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
    printf("�Լ� ȣ�� �� i=%d\n", i);
    inc(i);
    printf("�Լ� ȣ�� �� i=%d\n", i);
    return 0;
}
*/

//���� ������ �ʱⰪ�� ���� �Ⱓ
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



//���� ������ �ʱⰪ
/*
#include <stdio.h>

int counter;

int main(void)
{
    printf("counter = %d \n", counter);
    return 0;
}
*/

//������ �Ӽ�
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

//���� �̸��� ���������� ��������
/*
#include <stdio.h>

int sum = 1; //���� ����
int main(void)
{
    int sum = 0; //���� ����
    printf("sum = %d\n", sum);
    return 0;
}
*/

//���� ���� ������ static
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