#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(vod)
{
	int n;
	int fact = 1;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		fact *= i;

	printf("%d != %d", n, fact);
	return 0;
}
*/

/*
int main(vod)
{
	int n , m= 1;
	int fact = 1;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	while (m <= n)
	{
		fact = 1;
		for (int i = 1; i <= m; i++)
			fact *= i;
		printf("%d != %||d \n", m, fact);
		m++;
	}
	return 0;
}
*/

/*

int main(vod)
{
	int n, m = 1;
	long long fact;

	while (1)
	{
		fact = 1;
		for (int i = 1; i <= m; i++)
			fact *= i;
		if (fact < 0) {
			printf("%d�̻��� ǥ���� �� �����ϴ�(overflow �߻�!) \n", m);
			break;
		}
		printf("%d != %||d \n", m, fact);
		m++;
	}
	return 0;
}

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(vod)
{
	int a, b, answer, sel;
	srand((int)time(NULL)); //���� �ʱ�ȭ

	for (;;)
	{
		a = rand() % 100;
		b = rand() % 100;
		printf("%d + %d = ", a, b);
		scanf("%d", &answer);
		if (a + b == answer)
			printf("�����Դϴ�. \n");

		else
			printf("�����Դϴ�.\n")
	}
}

//

/*


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(vod)
{
	int a, b, answer, sel;
	srand((int)time(NULL)); //���� �ʱ�ȭ

	for (;;)
	{
		a = rand() % 100;
		b = rand() % 100;
		printf("%d + %d = ", a, b);
		scanf("%d", &answer);

		while (a + b != answer) {
			printf("�����Դϴ�. �ٽ� Ǯ���ּ���! \n");
			printf("%d + %d = ", a, b);
			scanf("%d", &answer);
		}
		printf("�����Դϴ�. \n");
		printf("1.��� \t2.���� (��ȣ ����) : ");
		scanf("%d", &sel);
		if (sel == 2)
			break;
	
}

*/

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(vod)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(vod)
{
	int i, j, n, k;
	printf("�� �� ������? :");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
			print(" ");
		for (j = 0; j <= i; j++)
		//for (j = i ; j >=0; j--)
		//for (j = 0; j <n- i; j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
*/

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(vod)
{
	int i, j, n, k;
	printf("�� �� ������? :");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (k = n-i; k < 1; k--)
			printf(" ");
		for (j = 0; j <= i; j++)
			//for (j = i ; j >=0; j--)
			//for (j = 0; j <n- i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(vod)
{
	int i, j, n, k;
	printf("�� �� ������? :");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (k = n - i; k < 1; k--)
			printf(" ");
		for (j = 0; j <= i; j++)
			//for (j = i ; j >=0; j--)
			//for (j = 0; j <n- i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main(vod)
{
	int a, b, c;
	int d;
	printf("�� �� ������: ");
	scanf("%d", &d);
	for (a = 1; a <= d; a++)
	{
		for (b = d - a; b >= 0; b--)
		{
			printf(" ");
		}
		for (c = 2; c <= a * 2; c++)
			printf("*");
	}
	print("\n");
}