//7주차 while
#include <stdio.h>
/*while문을 이용한 구구단 프로그램

int main(void)
{
    int n;
    int i = 1;

    printf("출력하고 싶은 단:");
    scanf("%d", &n);

    while(i <=9)
    {
        printf("%d*%d = %d \n",n,i, n*i);
        i++;
    }
    return 0;
}
*/


/*while문을 이용한 제곱값 출력 프로그램
int main(void)

{
    int n;
    printf("============\n");
    printf("  n   n의 제곱\n");
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


/*1~n까지 합을 구하는 프로그램
int main(void)
{
    int i, n, sum;
    printf("정수를 입력하시오:");
    scanf("%d", &n);

    i =1;
    sum = 0;

    while(i<= n)
    {
        sum += i;
        i++;

    }

    printf("1부터 %d까지의 합은 %d입니다 \n", n, sum);
    return 0;
}

*/


/* 참과 거짓
int main(void)
{
    int i = 3;
    while(i)
    {
        printf("%d은 참입니다.", i);
        i--;
    }
    printf("%d은 거짓입니다.", i);
}

*/


// while문을 이용한 성적의 평균 구하기 프로그램
/* 센티널 (보초값의 이용 )
int main(void)
{
    int grade, n;
    float sum, average;

    n=0;
    sum=0;
    grade=0;

    printf("종료 시 음수 입력\n");

    while (grade >= 0)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", &grade);

        sum += grade;
        n++;
    }

    sum = sum - grade;
    n--;
    average = sum / n;
    printf("성적의 평균은 %f입니다. \n", average);

    return 0; 
}

*/


/* 최소값 구하기
#include <limits.h>

int main(void)
{
    int number, min_value = INT_MAX;
    printf("정수를 입력하시오\n 종료는 Ctrl+z \n");
    while(scanf("%d", &number) != EOF)
    {
        if(number < min_value)
            min_value = number;
    }
    printf("최소값은 %d", min_value);
    return 0;
}

*/



/*최대 공약수 만들기
int main(void)
{
    int x, y, r;
    printf("두개의 정수를 입력하시오(큰수, 작은수):");
    scanf("%d%d", &x, &y);

    while (y!= 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    printf("최대 공약수는 %d입니다.\n", x);

    return 0;
}

*/



/*사용자가 0을 입력할 때까지 숫자를 더한다.
int main(void)
{
    int number, sum =0;
    do
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &number);
        sum += number;

    
    } while (number!= 0);

    printf("숫자들의 합 = %d \n", sum);
    return 0;
}
*/




/* do while 문을 이용한 메뉴
int main(void)
{
    int i = 0;
    do
    {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시요.\n");
        scanf("%d", &i);
    } while(i < 1 || i > 3);

    printf("선택된 메뉴 =%d\n", i);
    return 0;
}

*/



/* 숫자 추측게임
int main(void)
{
    int answer = 59;
    int guess;
    int tries = 0;
    do {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;
        if(guess > answer)
            printf("제시한 정수가 높습니다.");
        if(guess<answer)
            printf("제시한 정수가 낮습니다.");
    } while (guess != answer);
    printf("축하합니다. 시도 횟수 = %d", tries);
    return 0;
}

*/


/* Hello World 5번 출력하기
int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        printf("Hello World!\n");

    return 0;
}
*/



/* 반복을 이용한 정수합 프로그램
int main(void)
{
    int i, sum;

    sum = 0;
    for(i =1; i <= 10; i++)
        sum += i;

    printf("1부터 10까지의 정수의 합= %d\n", sum);
    return 0;
}

*/




/* 반복을 이용한 세제곱값 구하기
int main(void)
{
    int i, n;

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    printf("=============\n");
    printf(" i    i의 세제곱\n");
    printf("=============\n");
    for(i = 1; i <=n; i++)
        printf("%5d   %5d\n", i, i*i*i);
    return 0;
}

*/


/* 반복을 이용한 네모 그리기
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




/* 반복을 이용한 팩토리얼 구하기
int main(void)
{
    long fact = 1;
    int i, n;

    printf("정수를 입력하시요:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact = fact * i;
    printf("%d!은 %d입니다.\n", n, fact);
    return 0;
}

*/



/* 반복을 이용한 팩토리얼 구하기 (while 루프 버전)
int main(void)
{
    long fact = 1;
    int i = 1, n;
    printf("정수를 입력하시요: ");
    scanf("%d", &n);
    while (i<=n)
    {
        fact = fact * i;
        i++;

    }
    printf("%d!은 %d입니다.", n, fact);

    return 0;
}

*/



/* 반복문 예제
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




/* 복리 - 원금의 10배가 언제 되냐
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



/*소문자를 대문자로 변경
int main(void)
{
    char letter;
    while(1)
    {
        printf("소문자를 입력하시오:");
        scanf(" %c", &letter);

        if(letter=='Q')
            break;
        if(letter<'a'||letter>'z')
            continue;
        
        letter -= 32;
        printf("변환된 대문자는 %c입니다.\n", letter); 
    }
    return 0;
}

*/



/* 난수 발생 
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    for(int i=0; i< 10; i++)
        printf("%d \n", rand());
}


*/


/* 난 수 발생 - 덧셈 문제

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
            printf("맞았습니다.\n");
        else
            printf("틀렸습니다. \n");

    } return 0;
}

*/ 

