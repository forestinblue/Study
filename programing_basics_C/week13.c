#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void)
{
    char * pc;
    float * pf;
    double * pd;

    printf("%u %u %u \n", sizeof(pc), sizeof(pf), sizeof(pd));
    printf("%u %u %u \n", sizeof(char), sizeof(float), sizeof(double));
}
*/


/*
int main(void)
{
    int i = 10;
    char c =69;
    float f = 12.3;

    printf("i�� �ּ� = %u \n", &i);
    printf("c�� �ּ� = %u \n", &c);
    printf("f�� �ּ� = %u \n", &f);
    
}
*/



/*
int main(void)
{
    int i = 10;
    double f =12.3;
    int * pi;
    double * pf;

    pi = &i;
    pf = &f;

    printf("i = %d      &i = %u     pi = %u     *pi = %d  \n", i, &i, pi, *pi);
    printf("i = %lf      &f = %u     pf = %u     *pf = %lf  \n", f, &f, pf, *pf);
    
}
*/

/*
int main(void)
{
    int i = 10;
    int * p;
    p = &i;
    printf("i = %d \n", i);
    * p = 20; //������ i�� �� �����
    printf("i = %d \n", i);
    
    return 0 ;
}
*/

/*
int main(void)
{
    char * pc;
    int * pi;
    double * pd;

    pc = (char*) 10000;
    pi = (int*)20000;
    pd = (double*)30000;

    printf("���� �� pc = %d pi = %d     pd = %d  \n", pc, pi , pd);
    pc ++;
    pi ++;
    pd ++ ;
    printf("���� �� pc = %d pi = %d     pd = %d  \n", pc, pi , pd);
    
    return 0;
}
*/



////���� ���� ���迡 ������ �򰥸��� �κ�!!!!!!!!!!!!!!!!!!


/*
int main(void)
{
    int a, b, i =10;
    int * pi;
    pi = &i;

    printf("i = %d  pi = %p \n", i, pi);
    a = (*pi)++;  /// a�� ���� ���;� �ұ�???? -> �̷��� ���� �����̴�.!!!!!!!!!!!!!!!!!
    printf("i = %d  a = %d  pi = %p \n", i, a, pi);
    
    b = *pi++; // pi �ּ� ���� 
    printf("i = %d  a = %d  pi = %p \n", i, a, pi);
    return 0;
}

*/



/*
int main(void)
{
    char* pc;
    int * pi;
    double * pd;

    pc = (char*)10000;
    pi = (int*)20000;
    pd = (double*)30000;

    printf("������ pc = %d      pi = %d     pd = %d \n", pc, pi, pd);
    printf("������ pc = %d      pi = %d     pd = %d \n", pc+2, pi+2, pd+2);

    return 0;

}
*/



/*
int main(void)
{
    int * data = 0x0A0B0C0D; // �迭�� �ƴ�, �ϳ��� ����
    char* pc;

    pc = (char*)&data;

    for(int i =0; i < 4; i++)
        printf("*(pc+%d) = %02X \n", i , *(pc + i));

    return 0 ; 
}
*/


/*
void swap(int* i , int * j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
int main(void)
{
    int a = 10, b = 20;

    pritnf("���� ��: a = %d   b = %d \n", a, b);
    swap(&a, &b);
    pritnf("���� ��: a = %d   b = %d \n", a, b);
    
    return  0;
}
*/




#define MAX 10

void sort(int* a)
{
    int temp, i, k;
    for(i = 0; i < MAX; i++){
        for(k = i +1; k < MAX; k++){
            if(*(a+i) > *(a+k)){
                //��ġ��ȯ swap ���� ���
                temp = *(a+i);
                *(a + i) = *(a+k);
                *(a+k) = temp;
                
            }
        }
    }
}


void array_print(int * b)
{
    for (int i = 0; i < MAX;  i++)
        printf("%d \t", *(b+i));
    printf("\n");
}


int main(void)
{
    int s[MAX];

    for(int i = 0; i<MAX; i++){
        printf("%d��° ������ : ", i+1);
        scanf("%d", &s[i]);
        
    }
    printf("���� �� ������ ==> ");
    array_print(s);

    printf("���� �� ������ ==> ");
    sort(s);

    return 0;
}


