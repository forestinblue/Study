/*
#include <stdio.h>

int main(void)
{
	// 두 수를 입력받아서 두 수이의 합계 
	// 2 5
	// 합은 14
	int i, sum = 0;

	scanf_s("%d %d", &a, &b);
	i = 1;
	while (i <= 10)
	{
		sum += i;
		i++;
	 }
	printf("1부터 10까지의 합 : %d \n", sum);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	// 두 수를 입력받아서 두 수이의 합계 
	// 2 5
	// 합은 14
	int a, b , temp ,  sum = 0;
	printf("두 수를 입력 :")
	scanf_s("%d %d", &a, &b);
	temp = a;
	while (a <= b)
	{
		sum += a;
		a++;
	}
	printf("%ㅇ부터 %d까지의 합 : %d \n", temp, b, sum);
	return 0;
}

*/

/*
#include <stdio.h>

int main(void)
{
	// 두 수를 입력받아서 두 수이의 합계 
	// 2 5
	// 2부터 5까지의 짝수의 합은 = 6
	int a, b, temp, sum = 0;
	printf("두 수를 입력 :")
	scanf_s("%d %d", &a, &b);
	temp = a;
	while (a <= b)
	{
		if (a % 2 == 0)
			sum += a;
		a++;
	}
	printf("%d부터 %d지의  짝수의 합 : %d \n", temp, b, sum);
	return 0;
}

#include <stdio.h>

*/


/*
int main(void)
{
	// 두 수를 입력받아서 두 수이의 합계 
	// 2 5
	// 2부터 5까지의 짝수의 합은 = 6
	int a, b, temp, sum = 0;
	printf("두 수를 입력 :")
		scanf_s("%d %d", &a, &b);
	temp = a;
	while (a <= b)
	{
		if (a % 2 == 1)
			continue;
		sum += a;
		a++;
	}
	printf("%d부터 %d지의  짝수의 합 : %d \n", temp, b, sum);
	return 0;
}

*/


#include <stdio.h>

int main(void)
{
	int sel, a, b;
	do {
		printf("다음 중 선택을 하세요 : \n");
		print("1.덧셈 2.뺄셈 3.곱셈 4.종료 : ");
		scanf_s("%d", &sel);
		if (sel == 1)
			print
		if (sel == 4)
			break;
		print("두 수를 입력하세요 : ");
		scanf("%d %d", &a, &b);
	} while (1);

	return 0;
}
*/