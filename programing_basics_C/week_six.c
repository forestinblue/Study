
//���� ��� �Ǵ�
/*
int main(void)
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num > 0) { //grouping
		printf("����Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�. \n");	
	}
	printf("�Է��� ���� %d�Դϴ�. \n", num);
	return 0;
}

*/
// ���� �Է�
/*
int main(void)
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num >= 90) { //grouping
		printf("A�Դϴ�.\n");
	}
	else if (num >= 80)
		printf("B�Դϴ�.\n");
	else if (num >= 70)
		printf("C�Դϴ�.\n");
	else if (num >= 60)
		printf("D�Դϴ�.\n");
	else {
		printf("F�Դϴ�. \n");
	}
	return 0;
}
*/
//���� if
//�� ������ �Է¹޾Ƽ� �հ� ���� �Ǵ�
//�հ� ����: ����� 60�� �̻�, ���� 40�� �̻��� �հ�, �׷��� ������ ���հ�
/* ���� § �ڵ�
int main(void)
{
	int A_score;
	printf("A ������ �Է��ϼ��� : ");
	scanf_s("%d", &A_score);
	int B_score;
	printf("B ������ �Է��ϼ��� : ");
	scanf_s("%d", &B_score);
	int mean_score;
	mean_score = (A_score + B_score) / 2;
	printf(mean_score);
	if (mean_score >= 60 && (A_score >= 40 && B_score >= 40)) {
		printf("�հ��Դϴ�.");
	}
	else
		printf("���հ��Դϴ� �Ф�");
	return 0;

}
*/
/*������ �ڵ�
int main(void)
{
	int a, b;  // �� ���� ���� �Է�
	double avg;// �� ���� ��� ���

	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf_s("%d %d" , &a , &b);

	avg = (a + b) / 2.0;
	
	if (avg >= 60)
		if (a >= 40 && b >= 40)
			printf("�հ��Դϴ�. \n");
		else
			printf("�����̳׿�! ���հ� \n");
	else
		printf("��� �̴��Դϴ�. ���հ� \n");
	return 0;

}
*/
//¦�� Ȧ�� �Ǵ�
/*
int main(void)
{
	int a;
	printf("���� �Է� : ");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d��(��) ¦���Դϴ�. \n", a);
	else
		printf("%d��(��) Ȧ���Դϴ�. \n", a);

	return 0;
}
*/
//���� �и�
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a, b; //a�� ���� b �� �и�
	double div;
	printf("���� �Է� : ");
	scanf_s("%d %d", &a, &b);

	if (b == 0)
		printf("0���� ���� �� �����ϴ�. \n");
	else
	{
		div = (double)a / b;
		printf("%d / %d = %.1lf \n", a, b, div);
	}
	return 0;
}
*/
//����
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int year; 
	printf("���� �Է� : ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d���� �����Դϴ�. \n", year);
	else
		printf("%d���� ������ �ƴմϴ�. \n", year);

	return 0;
}
*/
/*

int main(void)
{
	int num;

	printf("������ �Է� : ");
	scanf("%d", &num);

	switch (num)
	{
	case 0 :
		printf("���� \n");
		break;
	case 1 :
		printf("�ϳ� \n");
		break;
	case 2:
		printf("�� \n");
		break;
	default :
		printf("3�̻��̱��� \n");
		break;

	}
	return 0; 
}
*/
//�ٹ� �ð�
/* ���� §
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
int main(void)
{	
	double total_payment;
	int hour;
	int over_hour;
	int payment;
	printf("�ٹ� �ð�, �ð��� �ӱ� �Է� : ");
	scanf("%d %d", &hour , &payment);

	if (hour <= 40)
	{
		total_payment = hour * payment;
		printf("�� �ӱ��� %lf�Դϴ�. \n", total_payment);
	}
	else
	{
		over_hour = hour - 40;
		total_payment = 40 * payment + over_hour * (1.5) * payment;
		printf("�� �ӱ��� %lf�Դϴ�. \n", total_payment);
	}
	return 0;
}
*/
/* ���� �ڵ�
int main(void)
{
	int time, pay;
	double total_pay;
	printf("�ٹ� �ð��� �Է��ϼ��� : ");
	scanf("%d", &time);
	printf("�ð��� �޿��� �Է��ϼ��� : ");
	scanf("%d", &pay);

	if (time > 40)
		total_pay = 40 * pay + (time - 40) * pay * 1.5;
	else
		total_pay = time * pay;

	printf("�ٹ� �ð��� %d�ð�, �ñ��� %d�� , �޿��� %.0lf�Դϴ�. \n", time, pay, total_pay);
}
*/

//����ڷκ��� x���� �Է¹޾� �Լ��� ��� x�� ����
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int x;
	double y;
	printf("x�� �Է��ϼ��� : ");
	scanf("%d", &x);


	if (x <= 0)
	{
		y = (x * x - 9 * x + 2);
		printf("���� %.0lf", y);
	}
	else
	{
		y = (7 * x + 2);
		printf("���� %.0lf", y);

	}
}
*/

//Ű�� cm
//�����Դ� kg

#include <stdio.h>
int main(void)
{
	int  height_cm;
	int weight;
	double height_m;
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%d", &height_cm);
	printf("�����Ը� �Է��ϼ��� : ");
	scanf_s("%d", &weight);
	height_m = (double) height_cm / 100;
	double BMI;
	BMI = (double)weight / (height_m * height_m);
		if (BMI < 18.5)
			printf("��ü��");
		else if (BMI < 23)
			printf("����");
		else if (BMI < 25)
			printf("��ü��");
		else if (BMI < 30)
			printf("�浵��");
		else if (BMI < 35)
			printf("�ߵ��");
		else
			printf("����");
			
	return 0;
}

/*
int main(void)
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num >= 90) { //grouping
		printf("A�Դϴ�.\n");
	}
	else if (num >= 80)
		printf("B�Դϴ�.\n");
	else if (num >= 70)
		printf("C�Դϴ�.\n");
	else if (num >= 60)
		printf("D�Դϴ�.\n");
	else {
		printf("F�Դϴ�. \n");
	}
	return 0;
}
*/