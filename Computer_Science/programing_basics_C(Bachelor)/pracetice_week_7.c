//7���� while
#include <stdio.h>
/*while���� �̿��� ������ ���α׷�

int main(void)
{
    int n;
    int i = 1;

    printf("����ϰ� ���� ��:");
    scanf("%d", &n);

    while(i <=9)
    {
        printf("%d*%d = %d \n",n,i, n*i);
        i++;
    }
    return 0;
}
*/


/*while���� �̿��� ������ ��� ���α׷�
int main(void)

{
    int n;
    printf("============\n");
    printf("  n   n�� ����\n");
    printf("============\n");

    n=1;
    while(n<= 10)
    {
        printf("%5d  %5d\n", n, n*n);
        n++;
    }
    return 0;
}
*/


/*1~n���� ���� ���ϴ� ���α׷�
int main(void)
{
    int i, n, sum;
    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &n);

    i =1;
    sum = 0;

    while(i<= n)
    {
        sum += i;
        i++;

    }

    printf("1���� %d������ ���� %d�Դϴ� \n", n, sum);
    return 0;
}

*/


/* ���� ����
int main(void)
{
    int i = 3;
    while(i)
    {
        printf("%d�� ���Դϴ�.", i);
        i--;
    }
    printf("%d�� �����Դϴ�.", i);
}

*/


// while���� �̿��� ������ ��� ���ϱ� ���α׷�
/* ��Ƽ�� (���ʰ��� �̿� )
int main(void)
{
    int grade, n;
    float sum, average;

    n=0;
    sum=0;
    grade=0;

    printf("���� �� ���� �Է�\n");

    while (grade >= 0)
    {
        printf("������ �Է��Ͻÿ�: ");
        scanf("%d", &grade);

        sum += grade;
        n++;
    }

    sum = sum - grade;
    n--;
    average = sum / n;
    printf("������ ����� %f�Դϴ�. \n", average);

    return 0; 
}

*/


/* �ּҰ� ���ϱ�
#include <limits.h>

int main(void)
{
    int number, min_value = INT_MAX;
    printf("������ �Է��Ͻÿ�\n ����� Ctrl+z \n");
    while(scanf("%d", &number) != EOF)
    {
        if(number < min_value)
            min_value = number;
    }
    printf("�ּҰ��� %d", min_value);
    return 0;
}

*/



/*�ִ� ����� �����
int main(void)
{
    int x, y, r;
    printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������):");
    scanf("%d%d", &x, &y);

    while (y!= 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    printf("�ִ� ������� %d�Դϴ�.\n", x);

    return 0;
}

*/



/*����ڰ� 0�� �Է��� ������ ���ڸ� ���Ѵ�.
int main(void)
{
    int number, sum =0;
    do
    {
        printf("������ �Է��Ͻÿ�: ");
        scanf("%d", &number);
        sum += number;

    
    } while (number!= 0);

    printf("���ڵ��� �� = %d \n", sum);
    return 0;
}
*/




/* do while ���� �̿��� �޴�
int main(void)
{
    int i = 0;
    do
    {
        printf("1---���θ����\n");
        printf("2---���Ͽ���\n");
        printf("3---���ϴݱ�\n");
        printf("�ϳ��� �����Ͻÿ�.\n");
        scanf("%d", &i);
    } while(i < 1 || i > 3);

    printf("���õ� �޴� =%d\n", i);
    return 0;
}

*/



/* ���� ��������
int main(void)
{
    int answer = 59;
    int guess;
    int tries = 0;
    do {
        printf("������ �����Ͽ� ���ÿ�: ");
        scanf("%d", &guess);
        tries++;
        if(guess > answer)
            printf("������ ������ �����ϴ�.");
        if(guess<answer)
            printf("������ ������ �����ϴ�.");
    } while (guess != answer);
    printf("�����մϴ�. �õ� Ƚ�� = %d", tries);
    return 0;
}

*/


/* Hello World 5�� ����ϱ�
int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        printf("Hello World!\n");

    return 0;
}
*/



/* �ݺ��� �̿��� ������ ���α׷�
int main(void)
{
    int i, sum;

    sum = 0;
    for(i =1; i <= 10; i++)
        sum += i;

    printf("1���� 10������ ������ ��= %d\n", sum);
    return 0;
}

*/




/* �ݺ��� �̿��� �������� ���ϱ�
int main(void)
{
    int i, n;

    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &n);

    printf("=============\n");
    printf(" i    i�� ������\n");
    printf("=============\n");
    for(i = 1; i <=n; i++)
        printf("%5d   %5d\n", i, i*i*i);
    return 0;
}

*/


/* �ݺ��� �̿��� �׸� �׸���
int main(void)
{
    int i;
    printf("**********\n");
    for(i=0; i<5; i++)
        printf("*        *\n");
    printf("**********\n");

    return 0;

}

*/




/* �ݺ��� �̿��� ���丮�� ���ϱ�
int main(void)
{
    long fact = 1;
    int i, n;

    printf("������ �Է��Ͻÿ�:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact = fact * i;
    printf("%d!�� %d�Դϴ�.\n", n, fact);
    return 0;
}

*/



/* �ݺ��� �̿��� ���丮�� ���ϱ� (while ���� ����)
int main(void)
{
    long fact = 1;
    int i = 1, n;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    while (i<=n)
    {
        fact = fact * i;
        i++;

    }
    printf("%d!�� %d�Դϴ�.", n, fact);

    return 0;
}

*/



/* �ݺ��� ����
int main(void)
{
    int x, y;
    for(y =1; y <= 5; y++)
    {
        for(x = 0; x < y; x++)
            printf("*");
        printf("\n");
    }
    return 0;
}

*/




/* ���� - ������ 10�谡 ���� �ǳ�
#define SEED_MONEY 1000000

int main(void)
{
    int year = 0 , money = SEED_MONEY;
    while(1)
    {
        year ++;
        money += money * 0.30;
        if (money > 10 * SEED_MONEY)
            break;
    }
    printf("%d", year);
    return 0;
}

*/



/*�ҹ��ڸ� �빮�ڷ� ����
int main(void)
{
    char letter;
    while(1)
    {
        printf("�ҹ��ڸ� �Է��Ͻÿ�:");
        scanf(" %c", &letter);

        if(letter=='Q')
            break;
        if(letter<'a'||letter>'z')
            continue;
        
        letter -= 32;
        printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter); 
    }
    return 0;
}

*/



/* ���� �߻� 
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    for(int i=0; i< 10; i++)
        printf("%d \n", rand());
}


*/


/* �� �� �߻� - ���� ����

#include <stdlib.h>

int main(void)
{
    int x , y, answer, i;
    srand(time(NULL));

    for ( i =0; i < 10; i++){
        x = rand() % 10;
        y = rand() % 10;
        printf("%d + %d = ", x, y);
        scanf("%d", &answer);
        if ( x + y == answer)
            printf("�¾ҽ��ϴ�.\n");
        else
            printf("Ʋ�Ƚ��ϴ�. \n");

    } return 0;
}

*/ 

