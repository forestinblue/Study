//���� ó�� ���̺귯�� �Լ�
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



//���ڿ� ���� strcpy�� strcat
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

//���ڿ� �� ����
//strcmp() �Լ�
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char s1[80]; //ù��° �ܾ ������ ���ڹ迭
    char s2[80]; //�ι�° �ܾ ������ ���ڹ迭
    int result;

    printf("ù��° �ܾ �Է��Ͻÿ�:");
    scanf("%s", s1);
    printf("�ι��� �ܾ �Է��Ͻÿ�:");
    scanf("%s", s2);

    result = strcmp(s1, s2);

    if (result < 0)
        printf("%s�� %s���� �տ� �ֽ��ϴ�. \n", s1, s2);
    else if (result == 0)
        printf("%s�� %s�� �����ϴ�. \n", s1, s2);
    else
        printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);
    return 0;
    
}4*/


//���� �˻�
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
        printf("ù��° %c�� %d���� �߰ߵǾ��� \n", c, loc);
    else   
        prinf("%c�� �߰ߵ��� �ʾ��� \n", c);
    return 0;
}
*/

//���ڿ� �˻�
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
        printf("ù���� %s�� %d���� �߰ߵǾ���\n", sub, loc);
    else 
        printf("%s�� �߰ߵ��� �ʾ��� \n", sub);
}
*/


//���ڿ� ��ū �и�
//strtok �Լ��� ��� ��
/*
#include <string.h>
#include <stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char *token;

int main(void)
{
    //���ڿ��� �����ϰ� ���� ��ū�� ��´�.
    token = strtok(s, seps);
    while(token!= NULL)
    {
        //���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�.
        printf(" ��ū: %s\n", token);
        //���� ��ū�� ��´�.
        token = strtok(NULL, seps);
    }
}
*/

//sprintf()�� sscanf() ����
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
