//문자 처리 라이브러리 함수
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if(islower(c))
            c = toupper(c)
        putchar(c);
    }
    return 0;
}
*/



//문자열 연결 strcpy와 strcat
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char string[80];

    strcpy(string, "Hello world from ");
    strcat(string , "strcpy ");
    strcat(string , "and ");
    strcat(string , "strcat!");
    printf("string = %s\n", string );
    return 0;

}
*/

//문자열 비교 예제
//strcmp() 함수
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char s1[80]; //첫번째 단어를 저장할 문자배열
    char s2[80]; //두번째 단어를 저장할 문자배열
    int result;

    printf("첫번째 단어를 입력하시오:");
    scanf("%s", s1);
    printf("두번쨰 단어를 입력하시오:");
    scanf("%s", s2);

    result = strcmp(s1, s2);

    if (result < 0)
        printf("%s가 %s보다 앞에 있습니다. \n", s1, s2);
    else if (result == 0)
        printf("%s가 %s와 같습니다. \n", s1, s2);
    else
        printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
    return 0;
    
}4*/


//문자 검색
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char s[] = "language";
    char c = 'g';
    char *p;
    int loc;

    p = strchr(s, c);
    loc  = (int)(p - s);
    if (p != NULL)
        printf("첫번째 %c가 %d에서 발견되었음 \n", c, loc);
    else   
        prinf("%c가 발견되지 않았음 \n", c);
    return 0;
}
*/

//문자열 검색
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char s[] = "A joy that's shared is a joy made double";
    char sub[] = "joy";
    char * p ;
    int loc;
    p = strstr(s, sub);

    loc = (int)(p -s);
    if (p != NULL)
        printf("첫번쩨 %s가 %d에서 발견되었음\n", sub, loc);
    else 
        printf("%s가 발견되지 않았음 \n", sub);
}
*/


//문자열 토큰 분리
//strtok 함수의 사용 예
/*
#include <string.h>
#include <stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char *token;

int main(void)
{
    //문자열을 전달하고 다음 토큰을 얻는다.
    token = strtok(s, seps);
    while(token!= NULL)
    {
        //문자열 s에 토큰이 있는 동안 반복한다.
        printf(" 토큰: %s\n", token);
        //다음 토큰을 얻는다.
        token = strtok(NULL, seps);
    }
}
*/

//sprintf()와 sscanf() 예제
#include <stdio.h>

int main(void)
{
    char s[] = "100";
    int value;

    sscanf(s, "%d", &value);
    printf("%d \n", value);
    value++;

    sprintf(s, "%d", value);
    printf("%s \n", s);
    return 0;
}
