#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



/*
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
        i ++;
    }
    return 0;
    }

    */


/*

   int main(void)
{
    int i;
    char str[] = "abcdef";


    i = 0;
    while (str[i] != '\0'){
        printf("%c", str[i]);
        i ++;
    }
    printf("\n i = %d \n", i);
    return 0;
    }

    */


/*
   
   int main(void)
{

    char str[] = "abcdef";
    char str1[3] = {'k','j', '\0'};

    printf("%s  %s \n", str, str1);
    return 0;
    }

*/


/*

int main(void)
{

    char str[] = "abcdef";
    str[0] = 'k';
    printf("%s  \n", str);
    return 0;
}

*/



/*
#include <string.h>
int main(void)
{
    char src[] = " I am happy";
    char src_copy[100];
    printf("원본 문자열 : %s \n", src);
    strcpy(src_copy , src);
    
    printf("복사된 문자열 : %s \n", src_copy);
    return 0;
}

*/



/*
#include <string.h>
int main(void)
{
    char * src = "I am happy";  // 문자열 자체를 변경하고자 할때는 문자형 포인터로 선언이 쉽다. 
    src = "Goodbye";
    printf("%s \n" , src);
    

    return 0;
}

*/


/*
int main(void)
{
    char src[] = "I am Happy";
    printf("문자열 %s의 길이 : %d \n", src , strlen(src));
    return 0;
}
*/

/*

int main(void)
{
    char src[] = "김준석";
    printf("문자열 %s의 길이 : %d \n", src , strlen(src));
    return 0;
}

*/


/*
int main(void)
{
    int ch;  // 정수형 선언에 주의!
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
*/



/*
#include <conio.h>
int main(void)
{
    int ch;  // 정수형 선언에 주의!
    while ((ch = _getch()) != 'q')
        _putch(ch);
    return 0;
}
*/

/*

int main(void)
{
    char name[100];
    char addr[100];
    printf("이름을 입력하세요 : ");
    gets_s(name, 100);
    printf("주소를 입력하세요 : ");
    gets_s(addr , 100);
    puts(name);
    puts(addr);
    return 0;
}
*/



/*
int main(void)
{
    char name[100];
    char addr[100];
    printf("이름을 입력하세요 : ");
    scanf_s("%s", name , 100);
    printf("주소를 입력하세요 : ");
    scanf_s("%s", addr , 100);
    puts(name);
    puts(addr);
    return 0;
}
*/



/*
int main(void)
{
    char name[100];
    char addr[100];
    printf("이름을 입력하세요 : ");
    scanf_s("%s", name , (int)sizeof(name));
    printf("주소를 입력하세요 : ");
    scanf_s("%s", addr , 100);
    puts(name);
    puts(addr);
    return 0;
}

*/



/*

#include <ctype.h>

int main(void)
{
    int c; 
    while ((c = getchar()) != EOF) // crtl + z 가 입력될때 까지 문자 입력
    {
        if(islower(c))  //받은 문자가 소문자인지 검사
            c = toupper(c);  //소문자 라면 대문자로 변환
        putchar(c);  //문자 출력
    }
    return 0;
}

*/

/*
#include <string.h>

int main(void)
{
    char s[] = "University";
    char c = 'v';
    char * p;
    int loc;

    p = strchr(s, c); // 문자를 찾아서 찾은 위치의 주소를 저장하므로 포인터로 선언
    printf("p = %c \n", *p);
    return 0;
}
*/




/*
#include <string.h>

int main(void)
{
    char s[] = "University";
    char c = 'v';
    char * p;
    int loc;

    p = strchr(s, c); // 문자를 찾아서 찾은 위치의 주소를 저장하므로 포인터로 선언
    printf("p = %d \n", p);  //p는 주소값을 저장하고 있다.
    loc= (int)(p-s);
    if ( p != NULL)
        printf("%c가 %d 위치에서 발견되었음", c, loc+1 );
    else 
        printf("%c문자는 발견되지 않았음 \n", c);

    return 0;
}
*/



/*
int main(void)
{
    char name[] = "Kim Jun Seok";
    char *p =strtok(name," ");



    printf("%s \n", p);
    p  =strtok(NULL," ");
    printf("%s \n", p);

    return 0;
}
*/



/*
int main(void)
{
    char name[] = "Kangwon University , JunSeok Kim";
    char s[] = " ,\t\n"; //공백, 쉼표, 탭, 엔터가 들어오면 분리시킴
    char* p;
    p =strtok(name, s); // s조건에 따라 분리시킴  처음엔 kangwon 삽입

    while (p != NULL){
        printf("%s \n", p);  //kangwon 출력
        p  =strtok(NULL,s);  // p = University 
    }

    return 0;
}
*/


/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse(char str[])
{

}
int main(void)
{
    char s[100];
    printf("원하는 문자열 입력 : ");
    scanf_s("%s",s, 100);
    reverse(s);
    printf("거꾸로 출력 : %s \n", s);
    return 0;
}


*/
#include <stdio.h>
#include <string.h>

void main()
{
 int i, k;
 char str[30];

 scanf("%s",str);
 k=strlen(str);

 for(i=k-1;i>=0;i--)
 {
  printf("%c",str[i]);
 }
}




/*
#include<stdio.h>

#include<string.h>

int main()

{

        int i, count;

        char insert[19];

        printf("문자열 입력 : ");		//문자열입력받기

        gets(insert);

        count=strlen(insert);			//insert의 길이를 count에 입력

        for( i = count; i >= 0; i--)		

        {

                printf("%c", insert[i]);	//count의 마지막 단어부터 실행

        }

        printf("\n");

}

*/