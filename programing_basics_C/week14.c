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
    printf("���� ���ڿ� : %s \n", src);
    strcpy(src_copy , src);
    
    printf("����� ���ڿ� : %s \n", src_copy);
    return 0;
}

*/



/*
#include <string.h>
int main(void)
{
    char * src = "I am happy";  // ���ڿ� ��ü�� �����ϰ��� �Ҷ��� ������ �����ͷ� ������ ����. 
    src = "Goodbye";
    printf("%s \n" , src);
    

    return 0;
}

*/


/*
int main(void)
{
    char src[] = "I am Happy";
    printf("���ڿ� %s�� ���� : %d \n", src , strlen(src));
    return 0;
}
*/

/*

int main(void)
{
    char src[] = "���ؼ�";
    printf("���ڿ� %s�� ���� : %d \n", src , strlen(src));
    return 0;
}

*/


/*
int main(void)
{
    int ch;  // ������ ���� ����!
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
*/



/*
#include <conio.h>
int main(void)
{
    int ch;  // ������ ���� ����!
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
    printf("�̸��� �Է��ϼ��� : ");
    gets_s(name, 100);
    printf("�ּҸ� �Է��ϼ��� : ");
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
    printf("�̸��� �Է��ϼ��� : ");
    scanf_s("%s", name , 100);
    printf("�ּҸ� �Է��ϼ��� : ");
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
    printf("�̸��� �Է��ϼ��� : ");
    scanf_s("%s", name , (int)sizeof(name));
    printf("�ּҸ� �Է��ϼ��� : ");
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
    while ((c = getchar()) != EOF) // crtl + z �� �Էµɶ� ���� ���� �Է�
    {
        if(islower(c))  //���� ���ڰ� �ҹ������� �˻�
            c = toupper(c);  //�ҹ��� ��� �빮�ڷ� ��ȯ
        putchar(c);  //���� ���
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

    p = strchr(s, c); // ���ڸ� ã�Ƽ� ã�� ��ġ�� �ּҸ� �����ϹǷ� �����ͷ� ����
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

    p = strchr(s, c); // ���ڸ� ã�Ƽ� ã�� ��ġ�� �ּҸ� �����ϹǷ� �����ͷ� ����
    printf("p = %d \n", p);  //p�� �ּҰ��� �����ϰ� �ִ�.
    loc= (int)(p-s);
    if ( p != NULL)
        printf("%c�� %d ��ġ���� �߰ߵǾ���", c, loc+1 );
    else 
        printf("%c���ڴ� �߰ߵ��� �ʾ��� \n", c);

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
    char s[] = " ,\t\n"; //����, ��ǥ, ��, ���Ͱ� ������ �и���Ŵ
    char* p;
    p =strtok(name, s); // s���ǿ� ���� �и���Ŵ  ó���� kangwon ����

    while (p != NULL){
        printf("%s \n", p);  //kangwon ���
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
    printf("���ϴ� ���ڿ� �Է� : ");
    scanf_s("%s",s, 100);
    reverse(s);
    printf("�Ųٷ� ��� : %s \n", s);
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

        printf("���ڿ� �Է� : ");		//���ڿ��Է¹ޱ�

        gets(insert);

        count=strlen(insert);			//insert�� ���̸� count�� �Է�

        for( i = count; i >= 0; i--)		

        {

                printf("%c", insert[i]);	//count�� ������ �ܾ���� ����

        }

        printf("\n");

}

*/