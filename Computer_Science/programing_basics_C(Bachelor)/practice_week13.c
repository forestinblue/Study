//문자와 문자열 예제 #1

/*
#include <stdio.h>

int main(void)
{
    int i;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    i = 0;

    while (str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
    return 0;
    
}
*/

//문자와 문자열 예제#2
/*
#include <stdio.h>

int main(void)
{
    char str1[6] = "Seoul";
    char str2[3] = {'i', 's', '\0'};
    char str3[] = "the capital city of Korea.";
    printf("%s %s %s\n", str1, str2, str3);
    return 0;
}
*/

//문자와 문자열 예제 #3
/*
#include <stdio.h>
int main(void)
{
    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    int i;
    printf("원본 문자열=%s\n", src);
    for (i=0; src[i] != '\0'; i++)
        dst[i] = src[i];

    dst[i] = '\0';
    printf("복사된 문자열=%s\n", dst);
    return 0;
}
*/


//문자열의 길이 계산
/*
#include <stdio.h>

int main(void)
{
    char str[30] = "C language is easy";
    int i = 0;

    while (str[i] != 0)
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);

    return 0;
}
*/


//getchar()의 사용
/*
#include <stdio.h>
int main(void)
{
    int ch;
    while((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
*/


// _getch() , _putch()
/*
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int ch;
    while ((ch = _getch()) != 'q')
        _putch(ch);
    return 0;
}
*/

//gets_s()와 puts() 문자열 입출력
#include <stdio.h>
int main(void)
{
    char name[100];
    char address[100];
    printf("이름을 입력하시오:");
    gets_s(name, 100);
    printf("현재 거주하는 주소를 입력하시오:");
    gets_s(address, 100);
    puts(name);
    puts(address);
    return 0; 
}