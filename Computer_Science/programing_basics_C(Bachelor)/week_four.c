/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAX_RATE 0.2 // 기호 상수

int main(void)
{
	const int MONTHS = 12; // 기호 상수
	int m_salary, y_salary;  // 변수 선언
	
	printf("월급을 입력하세요: ");  // 입력 안내문
	scanf("%d", &m_salary);
	y_salary = MONTHS * m_salary; // 순수입 계산
	printf("연봉은 %d입니다.", y_salary);
	printf("세금은 %f입니다.", y_salary * TAX_RATE);

	return 0;
}
*/

/*
/*2의 보수 프로그램
#include <stdio.h>

int main(void)
{
	int x = 3;
	int y = -3;  // 음수가 2의 보수로 표현되는지를 알아보자.

	printf("x = %08X\n", x);  //8자리의 16진수로 출력한다
	printf("y = %08X\n", y); //8자리의 16진수로 출력한다.
	printf("x+y = %08X\n", x + y); //8자리의 16진수로 출력한다.
}
*/


/* 부동 소수점 자료형의 크기 계산*/
/*
#include <stdio.h>
int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float의 크기=%d\n", sizeof(float));
	printf("double의 크기=%d\n", sizeof(double));

	printf("x = %30.25f\n", x);
	printf("y = %30.25f\n", y);
	return 0;

}
*/

/*부동 소수점 오버플로우*/
/*
#include <stdio.h>

int main(void)
{
	float x = 1e39; //숫자가 커서 오버플로우 발생
	printf("x = %e\n", x);
}
*/

/*부동 소수점 언더플로우*/
/*
#include <stdio.h>
int main(void)
{
	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46; //숫자가 작아서 언더플로우 발생

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);
}

*/

/*부동 소수점형 사용시 주의 사항 - 오차가 있을 수 있다.*/
/*
#include <stdio.h>
int main(void)
{
	double x;
	x = (1.0e20 + 5.0) - 1.0e20; //부동소수점 연산에서는 오차가 발생한다. 5.0이 아니라 0으로 계산된다
	printf("%f \n", x);
	return 0;
}
*/

/*예제- 문자 변수와 문자 상수*/
/*
#include <stdio.h>
int main(void)
{
	char code1 = 'A'; // 문자 상수로 초기화
	char code2 = 65; //아스키 코드로 초기화

	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code2);
}
*/

/*이스케이프 시퀀스 예제*/
/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int id, pass;
	printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");

	printf("id:____\b\b\b\b");
	scanf("%d", &id);

	printf("pass:____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a입력된 아이디는 \"%d\"이고 패스워드는  \"%d\"입니다.\n", id, pass);

	return 0;
}

*/
/*정수형으로서의 char형-8비트의 정수를 저장하는데 char 형을 사용할 수 있다.*/
/*
#include <stdio.h>
int main(void)
{
	char code = 'A';
	printf("%d %d %d \n", code, code + 1, code + 2); // 65 66 67이 출력된다.
	printf("%c %c %c \n", code, code + 1, code + 2); // A B C 가 출력된다.
	return 0;
}
*/

/*문자 입출력 예제*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char initial;
	char grade;
	printf("영어 이름 첫글자는 무엇인가요: ");
	scanf(" %c", &initial);

	printf("프로그래밍 과목 학점을 물어보아도 되나요?(A부터 F) ");
	scanf(" %c", &grade);

	printf("");
	printf("\n%c군의 프로그래밍 과목 성적은 %c입니다. ", initial, grade);
	return(0);

}
*/
/*기호 상수 - 세금 예제*/
/*
#define _CRT_SECURE_NO_WARNINGS
#define TAX_RATE  0.2
#include <stdio.h>

int main(void)
{
	const int MONTHS = 12; //const 수정이 불가능하다.
	int m_salary, y_salary;

	printf("월급을 입력하세요 : ");
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d입니다. \n", y_salary);
	printf("세금은 %.1f입니다. \n", y_salary * TAX_RATE);
	return 0;

}
*/

/* beep문*/
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

/* sun += x , sum 초기화 예제*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, sum;
	printf("3개의 정수를 입력해주세요 : ");
	scanf("%d %d %d", &x, &y, &z);
	sum = 0;
	sum += x; // sum = sum + x
	sum += y;
	sum += z;

	printf("3개의 정수의 합은 %d \n", sum);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, h;
	printf("두 수를 입력해주세요 : ");
	scanf("%d%d", &x, &y);
	z = x;
	h = y;
	x = h;
	y = z;
	printf("swap된 후의 결과 x: %d, y: %d \n", x, y);
	return 0;
}
