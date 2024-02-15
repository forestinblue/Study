/*
	학과
	학번
	이름
	프로그램 설명: 덧셈 뺄셈을 수행하는 프로그램
	작성 날짜
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
	int  r; // 반지름
	int h; // 높이
	double vol; //부피저장
	double area; //겉넓이 저장

	r = 5;
	h = 10;
	vol = 3.14 * r * r * h;
	area = 3.14 * 2 * r * r + 2 * 3.14 *r * h;

	printf("3.14 * %d ^2 * %d = %.2lf \n", r, h, vol);
	printf("2* 3.14 * 5(%d + %d) = %.2lf \n", r, h, area);
	return 0;
}