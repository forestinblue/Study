/*
#include <stdio.h>

int main(void)
{
	// �� ���� �Է¹޾Ƽ� �� ������ �հ� 
	// 2 5
	// ���� 14
	int i, sum = 0;

	scanf_s("%d %d", &a, &b);
	i = 1;
	while (i <= 10)
	{
		sum += i;
		i++;
	 }
	printf("1���� 10������ �� : %d \n", sum);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	// �� ���� �Է¹޾Ƽ� �� ������ �հ� 
	// 2 5
	// ���� 14
	int a, b , temp ,  sum = 0;
	printf("�� ���� �Է� :")
	scanf_s("%d %d", &a, &b);
	temp = a;
	while (a <= b)
	{
		sum += a;
		a++;
	}
	printf("%������ %d������ �� : %d \n", temp, b, sum);
	return 0;
}

*/

/*
#include <stdio.h>

int main(void)
{
	// �� ���� �Է¹޾Ƽ� �� ������ �հ� 
	// 2 5
	// 2���� 5������ ¦���� ���� = 6
	int a, b, temp, sum = 0;
	printf("�� ���� �Է� :")
	scanf_s("%d %d", &a, &b);
	temp = a;
	while (a <= b)
	{
		if (a % 2 == 0)
			sum += a;
		a++;
	}
	printf("%d���� %d����  ¦���� �� : %d \n", temp, b, sum);
	return 0;
}

#include <stdio.h>

*/


/*
int main(void)
{
	// �� ���� �Է¹޾Ƽ� �� ������ �հ� 
	// 2 5
	// 2���� 5������ ¦���� ���� = 6
	int a, b, temp, sum = 0;
	printf("�� ���� �Է� :")
		scanf_s("%d %d", &a, &b);
	temp = a;
	while (a <= b)
	{
		if (a % 2 == 1)
			continue;
		sum += a;
		a++;
	}
	printf("%d���� %d����  ¦���� �� : %d \n", temp, b, sum);
	return 0;
}

*/


#include <stdio.h>

int main(void)
{
	int sel, a, b;
	do {
		printf("���� �� ������ �ϼ��� : \n");
		print("1.���� 2.���� 3.���� 4.���� : ");
		scanf_s("%d", &sel);
		if (sel == 1)
			print
		if (sel == 4)
			break;
		print("�� ���� �Է��ϼ��� : ");
		scanf("%d %d", &a, &b);
	} while (1);

	return 0;
}
*/