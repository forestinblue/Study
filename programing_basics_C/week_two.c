/*
	�а�
	�й�
	�̸�
	���α׷� ����: ���� ������ �����ϴ� ���α׷�
	�ۼ� ��¥
*/

/*
* #include <stdio.h>
int main(void)
{
	int x, y, sum, sub, mul, div;

	x = 100;
	y = 200;
	
	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = (double)y / x;
	printf("%d + %d = %d \n", x, y, sum);
	printf("%d - %d = %d \n", x, y, sub);
	printf("%d * %d = %d \n", x, y, mul);
	printf("%d / %d = %.2lf \n", y, x, div);

	return 0;
}
*/


#include <stdio.h>
int main(void)
{
	int  r; // ������
	int h; // ����
	double vol; //��������
	double area; //�ѳ��� ����

	r = 5;
	h = 10;
	vol = 3.14 * r * r * h;
	area = 3.14 * 2 * r * r + 2 * 3.14 *r * h;

	printf("3.14 * %d ^2 * %d = %.2lf \n", r, h, vol);
	printf("2* 3.14 * 5(%d + %d) = %.2lf \n", r, h, area);
	return 0;
}