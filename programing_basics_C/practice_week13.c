//���ڿ� ���ڿ� ���� #1

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

//���ڿ� ���ڿ� ����#2
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

//���ڿ� ���ڿ� ���� #3
/*
#include <stdio.h>
int main(void)
{
    char src[] = "The worst things to eat before you sleep";
    char dst[100];
    int i;
    printf("���� ���ڿ�=%s\n", src);
    for (i=0; src[i] != '\0'; i++)
        dst[i] = src[i];

    dst[i] = '\0';
    printf("����� ���ڿ�=%s\n", dst);
    return 0;
}
*/


//���ڿ��� ���� ���
/*
#include <stdio.h>

int main(void)
{
    char str[30] = "C language is easy";
    int i = 0;

    while (str[i] != 0)
        i++;

    printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

    return 0;
}
*/


//getchar()�� ���
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

//gets_s()�� puts() ���ڿ� �����
#include <stdio.h>
int main(void)
{
    char name[100];
    char address[100];
    printf("�̸��� �Է��Ͻÿ�:");
    gets_s(name, 100);
    printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�:");
    gets_s(address, 100);
    puts(name);
    puts(address);
    return 0; 
}