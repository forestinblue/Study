
//음수 양수 판단
/*
int main(void)
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num > 0) { //grouping
		printf("양수입니다.\n");
	}
	else {
		printf("음수입니다. \n");	
	}
	printf("입력한 수는 %d입니다. \n", num);
	return 0;
}

*/
// 성적 입력
/*
int main(void)
{
	int num;
	printf("성적을 입력하세요 : ");
	scanf_s("%d", &num);

	if (num >= 90) { //grouping
		printf("A입니다.\n");
	}
	else if (num >= 80)
		printf("B입니다.\n");
	else if (num >= 70)
		printf("C입니다.\n");
	else if (num >= 60)
		printf("D입니다.\n");
	else {
		printf("F입니다. \n");
	}
	return 0;
}
*/
//다중 if
//두 과목을 입력받아서 합격 여부 판단
//합격 조건: 평균이 60점 이상, 과목별 40점 이상은 합격, 그렇지 않으면 불합격
/* 내가 짠 코드
int main(void)
{
	int A_score;
	printf("A 성적을 입력하세요 : ");
	scanf_s("%d", &A_score);
	int B_score;
	printf("B 성적을 입력하세요 : ");
	scanf_s("%d", &B_score);
	int mean_score;
	mean_score = (A_score + B_score) / 2;
	printf(mean_score);
	if (mean_score >= 60 && (A_score >= 40 && B_score >= 40)) {
		printf("합격입니다.");
	}
	else
		printf("불합격입니다 ㅠㅠ");
	return 0;

}
*/
/*교수님 코드
int main(void)
{
	int a, b;  // 두 과목 점수 입력
	double avg;// 두 과목 평균 계산

	printf("두 과목의 점수를 입력하세요 : ");
	scanf_s("%d %d" , &a , &b);

	avg = (a + b) / 2.0;
	
	if (avg >= 60)
		if (a >= 40 && b >= 40)
			printf("합격입니다. \n");
		else
			printf("과락이네요! 불합격 \n");
	else
		printf("평균 미달입니다. 불합격 \n");
	return 0;

}
*/
//짝수 홀수 판단
/*
int main(void)
{
	int a;
	printf("정수 입력 : ");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d는(은) 짝수입니다. \n", a);
	else
		printf("%d는(은) 홀수입니다. \n", a);

	return 0;
}
*/
//분자 분모
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a, b; //a가 분자 b 가 분모
	double div;
	printf("정수 입력 : ");
	scanf_s("%d %d", &a, &b);

	if (b == 0)
		printf("0으로 나눌 수 없습니다. \n");
	else
	{
		div = (double)a / b;
		printf("%d / %d = %.1lf \n", a, b, div);
	}
	return 0;
}
*/
//윤년
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int year; 
	printf("연도 입력 : ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d년은 윤년입니다. \n", year);
	else
		printf("%d년은 윤년이 아닙니다. \n", year);

	return 0;
}
*/
/*

int main(void)
{
	int num;

	printf("정수는 입력 : ");
	scanf("%d", &num);

	switch (num)
	{
	case 0 :
		printf("없음 \n");
		break;
	case 1 :
		printf("하나 \n");
		break;
	case 2:
		printf("둘 \n");
		break;
	default :
		printf("3이상이군요 \n");
		break;

	}
	return 0; 
}
*/
//근무 시간
/* 내가 짠
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_
int main(void)
{	
	double total_payment;
	int hour;
	int over_hour;
	int payment;
	printf("근무 시간, 시간당 임금 입력 : ");
	scanf("%d %d", &hour , &payment);

	if (hour <= 40)
	{
		total_payment = hour * payment;
		printf("총 임금은 %lf입니다. \n", total_payment);
	}
	else
	{
		over_hour = hour - 40;
		total_payment = 40 * payment + over_hour * (1.5) * payment;
		printf("총 임금은 %lf입니다. \n", total_payment);
	}
	return 0;
}
*/
/* 수업 코드
int main(void)
{
	int time, pay;
	double total_pay;
	printf("근무 시간을 입력하세요 : ");
	scanf("%d", &time);
	printf("시간당 급여를 입력하세요 : ");
	scanf("%d", &pay);

	if (time > 40)
		total_pay = 40 * pay + (time - 40) * pay * 1.5;
	else
		total_pay = time * pay;

	printf("근무 시간은 %d시간, 시급은 %d원 , 급여는 %.0lf입니다. \n", time, pay, total_pay);
}
*/

//사용자로부터 x값을 입력받아 함수값 계산 x는 정수
/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int x;
	double y;
	printf("x을 입력하세요 : ");
	scanf("%d", &x);


	if (x <= 0)
	{
		y = (x * x - 9 * x + 2);
		printf("답은 %.0lf", y);
	}
	else
	{
		y = (7 * x + 2);
		printf("답은 %.0lf", y);

	}
}
*/

//키는 cm
//몸무게는 kg

#include <stdio.h>
int main(void)
{
	int  height_cm;
	int weight;
	double height_m;
	printf("키를 입력하세요 : ");
	scanf("%d", &height_cm);
	printf("몸무게를 입력하세요 : ");
	scanf_s("%d", &weight);
	height_m = (double) height_cm / 100;
	double BMI;
	BMI = (double)weight / (height_m * height_m);
		if (BMI < 18.5)
			printf("저체중");
		else if (BMI < 23)
			printf("정상");
		else if (BMI < 25)
			printf("과체중");
		else if (BMI < 30)
			printf("경도비만");
		else if (BMI < 35)
			printf("중등도비만");
		else
			printf("고도비만");
			
	return 0;
}

/*
int main(void)
{
	int num;
	printf("성적을 입력하세요 : ");
	scanf_s("%d", &num);

	if (num >= 90) { //grouping
		printf("A입니다.\n");
	}
	else if (num >= 80)
		printf("B입니다.\n");
	else if (num >= 70)
		printf("C입니다.\n");
	else if (num >= 60)
		printf("D입니다.\n");
	else {
		printf("F입니다. \n");
	}
	return 0;
}
*/