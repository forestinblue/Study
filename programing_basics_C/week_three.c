


/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2(void)
{
	int x, y;
	int sum, diff, mul, div;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &x);
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &y);

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("%d+ %d = %d \n", x, y, sum);
	printf("%d - %d = %d \n", x, y, diff);
	printf("%d * %d = %d \n", x, y, mul);
	printf("%d / %d = %d \n", x, y, div);

	return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2(void)
{
	int k, e, m;
	int sum;
	double avg;

	printf("국어 점수 값: ");
	scanf("%d", &k);
	printf("영어 점수 값 : ");
	scanf("%d", &e);
	printf("수학 점수 값 : ");
	scanf("%d", &m);

	sum = k + e + m;
	avg = (double)sum / 3;

	printf("총점 : %d   평균 : %.1lf \n", sum, avg);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double area;
	double perimeter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ysalary; //연봉
	int msalary; //월급

	printf("연봉을 입력하세요 : ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("월 수령액 : %d \n", msalary);

	return 0;

}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5(void)
{
	int ysalary; //연봉
	double msalary , later_back_money , health_ins, silver_ins, hire_ins, earn_tax, live_tax, real_recieve_money;

	printf("연봉을 입력하세요 : ");
	scanf("%d", &ysalary);

	later_back_money = ysalary * 0.045;
	health_ins = ysalary * 0.035;
	silver_ins = health_ins * 0.1227;
	hire_ins = ysalary * 0.0008;
	earn_tax = ysalary * 0.04;
	live_tax = earn_tax * 0.1;
	real_recieve_money = ysalary - later_back_money - health_ins - silver_ins - hire_ins - earn_tax - live_tax;
	msalary = real_recieve_money / 12;
	printf("매달 공제 금액 합계");
	printf("1년간 실 수령액: %lf\n", real_recieve_money);
	printf("월 수령액: %0.1f \n", msalary);
	return 0;

}

*/

/*
	연봉 

	국민 연금:  4.5%
	건강 보험: 3.5%
	요양 보험: 건강보험의 12.27%
	고용 보험: 0.08%
	소득세: 4%
	지방소득세: 소득세의 10%
	
	수령액 = 월급 - 국민연금 - 건강보험- 요양보험-고용보험-소득세-지방소득세
	*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void)

{

	int ysalary;//연봉

	int temp_two; // 연봉 - 기본 공제액
	
	double msalary;//월급

	double pension;//국민연금 4.5%

	double health;//건강보험 3.5%

	double care;//요양버험은 건강보험의 12.27%

	double empolyment;//고용보험 0.08%

	double tax;//근로소득세 4%

	double local_tax;//지방소득세는 근로소득세의 10%

	double temp;//임시저장



	printf("연봉을 입력하세요 : ");

	scanf("%d", &ysalary);

	temp_two = ysalary - 120;

	pension = temp_two * 0.045;

	health = temp_two * 0.035;

	care = temp_two * 0.1227;

	empolyment = temp_two * 0.008;

	tax = temp_two * 0.04;

	local_tax = temp_two * 0.1;



	temp = temp_two - pension - health - care - empolyment - tax - local_tax;

	

	msalary = (temp / 12);



/*

	printf("\n##### 매달 공제 금액 합계 #####\n\n");

	printf("국민연금 : \t%10.0lf 원\t---4.5%%공제\n", pension / 12);

	printf("건강보험 : \t%10.0lf 원\t---3.5%%공제\n", health / 12);

	printf("요양보험 : \t%10.0lf 원\t---건강보험의 12.27%%공제\n", care / 12);

	printf("고용보험 : \t%10.0lf 원\t---0.08%%공제\n", empolyment / 12);

	printf("소득세 :   \t%10.0lf 원\t---4%%공제\n", tax / 12);

	printf("지방소득세 : \t%10.0lf 원\t---소득세의 10%%공제\n", local_tax / 12);



	printf("\n#################################\n\n");

	*/

	printf("일년간 총 수령액 : %.0lf 원\n", temp);

	printf("월 수령액 : %.0lf 원\n\n\n", msalary);



	return 0;

}