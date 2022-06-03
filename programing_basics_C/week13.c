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

    printf("i의 주소 = %u \n", &i);
    printf("c의 주소 = %u \n", &c);
    printf("f의 주소 = %u \n", &f);
    
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
    * p = 20; //원본인 i의 값 변경됨
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

    printf("증가 전 pc = %d pi = %d     pd = %d  \n", pc, pi , pd);
    pc ++;
    pi ++;
    pd ++ ;
    printf("증가 전 pc = %d pi = %d     pd = %d  \n", pc, pi , pd);
    
    return 0;
}
*/



////이제 부터 시험에 나오면 헷갈리는 부분!!!!!!!!!!!!!!!!!!


/*
int main(void)
{
    int a, b, i =10;
    int * pi;
    pi = &i;

    printf("i = %d  pi = %p \n", i, pi);
    a = (*pi)++;  /// a가 뭐가 나와야 할까???? -> 이런게 시험 문제이다.!!!!!!!!!!!!!!!!!
    printf("i = %d  a = %d  pi = %p \n", i, a, pi);
    
    b = *pi++; // pi 주소 증가 
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

    printf("증가전 pc = %d      pi = %d     pd = %d \n", pc, pi, pd);
    printf("증가후 pc = %d      pi = %d     pd = %d \n", pc+2, pi+2, pd+2);

    return 0;

}
*/



/*
int main(void)
{
    int * data = 0x0A0B0C0D; // 배열이 아닌, 하나의 숫자
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

    pritnf("스왑 전: a = %d   b = %d \n", a, b);
    swap(&a, &b);
    pritnf("스왑 후: a = %d   b = %d \n", a, b);
    
    return  0;
}
*/


/*

#define MAX 10

void sort(int* a)
{
    int temp, i, k;
    for(i = 0; i < MAX; i++){
        for(k = i +1; k < MAX; k++){
            if(*(a+i) > *(a+k)){
                //위치교환 swap 선택 장렬
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
        printf("%d번째 데이터 : ", i+1);
        scanf("%d", &s[i]);
        
    }
    printf("정렬 전 데이터 ==> ");
    array_print(s);

    printf("정렬 후 데이터 ==> ");
    sort(s);

    return 0;
}

*/






/*
#include <stdio.h>

#define N_DATA 4

void merge(int *A, int *B, int *C, int size);

void array_print(char *name, int *a, int size)

{

        int i;

        printf("%s[] = ", name);

        for (i = 0; i<size; i++) {

                printf("%d ", a[i]);

        }

        printf("\n");

}

int main(void)

{

    int i;



    int A[] = { 2, 5, 7, 8};

    int B[] = { 1, 3, 4, 6};

    int C[8];

        array_print("A", A, N_DATA);   

array_print("B", B, N_DATA);

    merge(A, B, C, 4);

        array_print("C", C, 2*N_DATA);

    for(i=0;i<8;i++)

        printf("%d ", C[i]);

    return 0;

}



void merge(int *A, int *B, int *C, int size)

{ 

    int i, a, b, c;



    for(a=0, b=0, c=0;a<size && b<size;){

        if(A[a]<=B[b])

            C[c++] = A[a++];

        else

            C[c++] = B[b++];

    }

    for(i=a; i<size; i++)

        C[c++] = A[i];

    for(i=b; i<size; i++)

        C[c++] = B[i];
}

*/

/* 병합 프로그램 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 4
void merge(int* A, int * B, int * C , int size)
{
    int i , j;
    for ( i = 0; i < size ; i++) // A[0] ~ A[3] ==> i = 4
        C[i] = A[i];
    for ( j = 0 ; j < size ; j ++) // C[4] = B[0] , C[5] = B[1]
        C[i + j] = B[j];

}

void sort(int* a )
{
    int temp , i , k;
    for ( i = 0; i < 8 ; i++ ){
        for (k = i + 1 ; k <8; k++){
            if (* (a + i) > *(a + k)){
                temp = *(a+i);
                *(a+i) = *(a + k);
                *(a + k) = temp ;
            }
        }
    }
}

void array_print(char * name , int * arr , int size)
{
    printf("%s [] = ", name);
    for (int i = 0 ;  i < MAX; i++)
        printf("%d \t", arr[i]);
    printf("\n");
}
int main(void)
{
    int A[] = {2,5,7,8};
    int B[] = {1,3,4,6};
    int C[MAX * 2];
    array_print("A",A , MAX);
    array_print("B", B, MAX);
    merge(A, B, C, MAX);
    printf("정렬 전 = >");
    sort(C);
    printf("정렬 후 = >");
    array_print("C", C, MAX * 2);
    return 0;


}



-> 앞의 것의 교수님 버전인데, 탭이 안되어 있음






#define _CRT_SECURE_NO_WARNINGS

#include < stdio.h  >   

#define MAX 4



void merge(int* A, int* B, int* C, int size)

{

int i, j;


for (i = 0; i < size; i++)     //A[0] ~ A[3]   ==> i =4

C[i] = A[i];



for (j = 0; j < size; j++)//C[4] = B[0], C[5] = B[1]  ...

C[i + j] = B[j];

}



void sort(int* C)

{

int temp, i, k;

for (i = 0; i < 8; i++) {

for (k = i + 1; k < 8; k++) {

if (*(C + i) > *(C + k)) {

temp = *(C + i);

*(C + i) = *(C + k);

*(C + k) = temp;

}

}

}

}

void array_print(char *name, int* arr, int size)

{

printf("%s[] = ", name);

for (int i = 0; i < size; i++)

printf("%d ", arr[i]);

printf("\n");

}

int main(void)

{

int A[] = { 2, 5, 7, 8 };

int B[] = { 1, 3, 4, 6 };

int C[MAX * 2];



array_print("A", A, MAX);

array_print("B", B, MAX);

merge(A, B, C, MAX);

printf("정렬 전 => ");

array_print("C", C, MAX * 2);

sort(C);

printf("정렬 후 => ");

array_print("C", C, MAX * 2);



return 0;

}



*/





/* 병합 프로그램 2
#define _CRT_SECURE_NO_WARNINGS

#include < stdio.h  >   

#define MAX 4



void merge(int* A, int* B, int* C, int size)

{

int i, j, k;


for (i = 0, j = 0, k = 0; i < size || j < size; )  //i = A원소 j = B원소  k = C원소

{

if (i == 4)//i =4이면 배열 A값은 모두 참조가 되었으므로 B값을 C에 저장

C[k++] = B[j++];

else if (j == 4)

C[k++] = A[i++]; //j =4이면 배열 B값은 모두 참조가 되었으므로 A값을 C에 저장



else if (A[i] <= B[j])    //A가 B보다 작으면 A값을 C에 저장

C[k++] = A[i++];  

else                       

C[k++] = B[j++];

}

}





void array_print(char *name, int* arr, int size)

{

printf("%s[] = ", name);

for (int i = 0; i < size; i++)

printf("%d ", arr[i]);

printf("\n");

}

int main(void)

{

int A[] = { 2, 5, 7, 8 };

int B[] = { 1, 3, 4, 6 };

int C[MAX * 2];



array_print("A", A, MAX);

array_print("B", B, MAX);

merge(A, B, C, MAX);

printf("정렬 후 => ");

array_print("C", C, MAX * 2);



return 0;

}

*/


i