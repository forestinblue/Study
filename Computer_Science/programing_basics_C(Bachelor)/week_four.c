/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAX_RATE 0.2 // ��ȣ ���

int main(void)
{
	const int MONTHS = 12; // ��ȣ ���
	int m_salary, y_salary;  // ���� ����
	
	printf("������ �Է��ϼ���: ");  // �Է� �ȳ���
	scanf("%d", &m_salary);
	y_salary = MONTHS * m_salary; // ������ ���
	printf("������ %d�Դϴ�.", y_salary);
	printf("������ %f�Դϴ�.", y_salary * TAX_RATE);

	return 0;
}
*/

/*
/*2�� ���� ���α׷�
#include <stdio.h>

int main(void)
{
	int x = 3;
	int y = -3;  // ������ 2�� ������ ǥ���Ǵ����� �˾ƺ���.

	printf("x = %08X\n", x);  //8�ڸ��� 16������ ����Ѵ�
	printf("y = %08X\n", y); //8�ڸ��� 16������ ����Ѵ�.
	printf("x+y = %08X\n", x + y); //8�ڸ��� 16������ ����Ѵ�.
}
*/


/* �ε� �Ҽ��� �ڷ����� ũ�� ���*/
/*
#include <stdio.h>
int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float�� ũ��=%d\n", sizeof(float));
	printf("double�� ũ��=%d\n", sizeof(double));

	printf("x = %30.25f\n", x);
	printf("y = %30.25f\n", y);
	return 0;

}
*/

/*�ε� �Ҽ��� �����÷ο�*/
/*
#include <stdio.h>

int main(void)
{
	float x = 1e39; //���ڰ� Ŀ�� �����÷ο� �߻�
	printf("x = %e\n", x);
}
*/

/*�ε� �Ҽ��� ����÷ο�*/
/*
#include <stdio.h>
int main(void)
{
	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46; //���ڰ� �۾Ƽ� ����÷ο� �߻�

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);
}

*/

/*�ε� �Ҽ����� ���� ���� ���� - ������ ���� �� �ִ�.*/
/*
#include <stdio.h>
int main(void)
{
	double x;
	x = (1.0e20 + 5.0) - 1.0e20; //�ε��Ҽ��� ���꿡���� ������ �߻��Ѵ�. 5.0�� �ƴ϶� 0���� ���ȴ�
	printf("%f \n", x);
	return 0;
}
*/

/*����- ���� ������ ���� ���*/
/*
#include <stdio.h>
int main(void)
{
	char code1 = 'A'; // ���� ����� �ʱ�ȭ
	char code2 = 65; //�ƽ�Ű �ڵ�� �ʱ�ȭ

	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code2);
}
*/

/*�̽������� ������ ����*/
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int id, pass;
	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");

	printf("id:____\b\b\b\b");
	scanf("%d", &id);

	printf("pass:____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������  \"%d\"�Դϴ�.\n", id, pass);

	return 0;
}

*/
/*���������μ��� char��-8��Ʈ�� ������ �����ϴµ� char ���� ����� �� �ִ�.*/
/*
#include <stdio.h>
int main(void)
{
	char code = 'A';
	printf("%d %d %d \n", code, code + 1, code + 2); // 65 66 67�� ��µȴ�.
	printf("%c %c %c \n", code, code + 1, code + 2); // A B C �� ��µȴ�.
	return 0;
}
*/

/*���� ����� ����*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char initial;
	char grade;
	printf("���� �̸� ù���ڴ� �����ΰ���: ");
	scanf(" %c", &initial);

	printf("���α׷��� ���� ������ ����Ƶ� �ǳ���?(A���� F) ");
	scanf(" %c", &grade);

	printf("");
	printf("\n%c���� ���α׷��� ���� ������ %c�Դϴ�. ", initial, grade);
	return(0);

}
*/
/*��ȣ ��� - ���� ����*/
/*
#define _CRT_SECURE_NO_WARNINGS
#define TAX_RATE  0.2
#include <stdio.h>

int main(void)
{
	const int MONTHS = 12; //const ������ �Ұ����ϴ�.
	int m_salary, y_salary;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("������ %d�Դϴ�. \n", y_salary);
	printf("������ %.1f�Դϴ�. \n", y_salary * TAX_RATE);
	return 0;

}
*/

/* beep��*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char beep = '\a';

	printf("%c", beep);
	return 0;
}
*/

/* sun += x , sum �ʱ�ȭ ����*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, sum;
	printf("3���� ������ �Է����ּ��� : ");
	scanf("%d %d %d", &x, &y, &z);
	sum = 0;
	sum += x; // sum = sum + x
	sum += y;
	sum += z;

	printf("3���� ������ ���� %d \n", sum);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, h;
	printf("�� ���� �Է����ּ��� : ");
	scanf("%d%d", &x, &y);
	z = x;
	h = y;
	x = h;
	y = z;
	printf("swap�� ���� ��� x: %d, y: %d \n", x, y);
	return 0;
}
