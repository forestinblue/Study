/* 
#include <stdio.h>
int main(void)
{
	int a = 4, b = 6;
	double x = 3.3, y = 4.7;
	printf("%d \n", a + b > y && x < y);
	printf("%d \n", a++ - --b * 2);
	printf("%lf \n", a > b ? x + 1 : y * 2);
	printf("%lf \n", x += 3 && y + 2);
	printf("%lf \n", (x = x + 1, y = y + 1));
	return 0;
}
*/
/*
# define _CRT_SECURE_NO_WARNINGS
#define SEC 60
#include <stdio.h>
int main(void)
{
	int input, minute, second;

	printf("�� ������ �ð��� �Է��ϼ��� : ");
	scanf("%d", &input);

	minute = input / SEC;
	second = input % SEC;
	
	printf("%d  �ʴ� %d �� %d ���Դϴ�. \n", input, minute, second );

	return 0;
}
*/
/*

# define _CRT_SECURE_NO_WARNINGS
#define SEC 60
#include <stdio.h>
int main(void)
{
	int x = 10, y = 10;
	printf("x= %d \n", x);
	printf("++x = %d \n", ++x);
	printf("���� ���� �� x = %d \n", x);

	printf("y= %d \n", y);
	printf("y++   = %d \n", y++);
	printf("���� ���� �� y = %d \n", y);


}
*/
/*���� �Ž��� ��*/
/*
# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int user, change = 0;
	int price, c10000, c5000, c1000, c500, c100, c50, c10;

	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &price);

	printf("�󸶸� ���� �ǰ���? ");
	scanf("%d", &user);
	change = user - price;
	printf("�Ž������� %d���Դϴ�. \n", change);
	c10000 = change / 10000;
	change %= 10000; //change = change / 10000
	c5000 = change / 5000;
	change %= 5000; //change = change / 5000
	c1000 = change / 1000;
	change %= 1000; //change = change / 1000

	c500 = change / 500;
	change %= 500; //change = change / 500
	c100 = change / 100;
	change %= 100; //change = change / 100
	c50 = change / 50;
	change %= 50; //change = change / 50
	c10 = change / 10;
	change %= 10; //change = change / 10

	printf("���� : %d ��   õ�� : %d �� \n", c10000, c5000);
	printf("����� : %d ��  ��� : %d ��   ���ʿ� : %d ��, �ʿ�: %d�� \n", c500, c100, c50, c10);
	return 0;
}
*/
/*����*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//4�� ���������� �������� 0�̰�, 100���� ���������� 0�� ���� �ʴ�.
	//400���� ���������� �������� 0�� �ش� �����̴�,

	int year, result;
	printf("������� �¾ �ظ� �Է��ϼ��� : ");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	//printf("result=%d \n", result);
	(result == 1) ? printf("�����Դϴ� \n") : printf("������ �ƴմϴ�\n");
	 ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	//printf("result=%d \n", result)? printf("%d�⵵�� �����Դϴ�.\n", year): printf("%d�⵵�� ������ �ƴմϴ�.\n", year);
	return 0;
	
}

*/
/*��ȣȭ ����*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char data;
	char key = 0x0f;
	char en_data; //��ȣ����
	char org_data; //��ȣȭ �� ����

	printf("��ȣ���ڸ� �Է��ϼ��� : ");
	scanf("%c", &data);

	en_data = data ^ key;
	printf("��ȣȭ�� ���� : %c \n", en_data);

	org_data = en_data ^ key;
	printf("��ȣȭ�� ����: %c \n", org_data);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#define MIN 60
#include <stdio.h>
int main(void)
{
	int in_hour, in_minute, out_minute, out_hour;
	int total_in_minute, total_out_minute, total_minute;
	int cost, cost_count;
	printf("������ �ð��� �Է��ϼ���( �� �� ) : ");
	scanf("%d d%",  &in_hour, &in_minute);  //scanf("%d %d %d", &x, &y, &z);
	printf("������ �ð��� �Է��ϼ���( �� �� ) : ");
	scanf("%d d%", &out_hour, &out_minute);
	total_in_minute = in_hour * 60 + in_minute;
	total_out_minute = out_hour * 60 + out_minute;
	total_minute = (total_out_minute - total_in_minute);

	printf("�����忡 �ӹ� �ð��� : %d �Դϴ� \n", total_minute);
	total_minute = (total_minute + 9) / 10 * 10;
	cost = 500 * total_minute;
	printf("��������� %d �Դϴ� \n", cost);



}

