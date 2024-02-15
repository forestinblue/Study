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

	printf("초 단위의 시간을 입력하세요 : ");
	scanf("%d", &input);

	minute = input / SEC;
	second = input % SEC;
	
	printf("%d  초는 %d 분 %d 초입니다. \n", input, minute, second );

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
	printf("전위 연산 후 x = %d \n", x);

	printf("y= %d \n", y);
	printf("y++   = %d \n", y++);
	printf("전위 연산 후 y = %d \n", y);


}
*/
/*물건 거스름 값*/
/*
# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int user, change = 0;
	int price, c10000, c5000, c1000, c500, c100, c50, c10;

	printf("물건 값을 입력하세요 : ");
	scanf("%d", &price);

	printf("얼마를 내실 건가요? ");
	scanf("%d", &user);
	change = user - price;
	printf("거스름돈은 %d원입니다. \n", change);
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

	printf("만원 : %d 장   천원 : %d 장 \n", c10000, c5000);
	printf("오백원 : %d 개  백원 : %d 개   오십원 : %d 개, 십원: %d개 \n", c500, c100, c50, c10);
	return 0;
}
*/
/*윤년*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//4로 나누었을때 나머지가 0이고, 100으로 나누었을때 0과 같지 않다.
	//400으로 나누었을때 나머지가 0인 해는 윤년이다,

	int year, result;
	printf("여러뷴아 태어난 해를 입력하세요 : ");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	//printf("result=%d \n", result);
	(result == 1) ? printf("윤년입니다 \n") : printf("윤년이 아닙니다\n");
	 ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	//printf("result=%d \n", result)? printf("%d년도는 윤년입니다.\n", year): printf("%d년도는 윤년이 아닙니다.\n", year);
	return 0;
	
}

*/
/*암호화 문자*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char data;
	char key = 0x0f;
	char en_data; //암호문자
	char org_data; //복호화 한 문자

	printf("암호문자를 입력하세요 : ");
	scanf("%c", &data);

	en_data = data ^ key;
	printf("암호화된 문자 : %c \n", en_data);

	org_data = en_data ^ key;
	printf("복호화한 문자: %c \n", org_data);
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
	printf("입차한 시간을 입력하세요( 시 분 ) : ");
	scanf("%d d%",  &in_hour, &in_minute);  //scanf("%d %d %d", &x, &y, &z);
	printf("출차한 시간을 입력하세요( 시 분 ) : ");
	scanf("%d d%", &out_hour, &out_minute);
	total_in_minute = in_hour * 60 + in_minute;
	total_out_minute = out_hour * 60 + out_minute;
	total_minute = (total_out_minute - total_in_minute);

	printf("주차장에 머문 시간은 : %d 입니다 \n", total_minute);
	total_minute = (total_minute + 9) / 10 * 10;
	cost = 500 * total_minute;
	printf("주차요금은 %d 입니다 \n", cost);



}

