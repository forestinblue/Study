


/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2(void)
{
	int x, y;
	int sum, diff, mul, div;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
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

	printf("���� ���� ��: ");
	scanf("%d", &k);
	printf("���� ���� �� : ");
	scanf("%d", &e);
	printf("���� ���� �� : ");
	scanf("%d", &m);

	sum = k + e + m;
	avg = (double)sum / 3;

	printf("���� : %d   ��� : %.1lf \n", sum, avg);
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

	printf("�簢���� ����: %lf\n", area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ysalary; //����
	int msalary; //����

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("�� ���ɾ� : %d \n", msalary);

	return 0;

}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5(void)
{
	int ysalary; //����
	double msalary , later_back_money , health_ins, silver_ins, hire_ins, earn_tax, live_tax, real_recieve_money;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &ysalary);

	later_back_money = ysalary * 0.045;
	health_ins = ysalary * 0.035;
	silver_ins = health_ins * 0.1227;
	hire_ins = ysalary * 0.0008;
	earn_tax = ysalary * 0.04;
	live_tax = earn_tax * 0.1;
	real_recieve_money = ysalary - later_back_money - health_ins - silver_ins - hire_ins - earn_tax - live_tax;
	msalary = real_recieve_money / 12;
	printf("�Ŵ� ���� �ݾ� �հ�");
	printf("1�Ⱓ �� ���ɾ�: %lf\n", real_recieve_money);
	printf("�� ���ɾ�: %0.1f \n", msalary);
	return 0;

}

*/

/*
	���� 

	���� ����:  4.5%
	�ǰ� ����: 3.5%
	��� ����: �ǰ������� 12.27%
	��� ����: 0.08%
	�ҵ漼: 4%
	����ҵ漼: �ҵ漼�� 10%
	
	���ɾ� = ���� - ���ο��� - �ǰ�����- ��纸��-��뺸��-�ҵ漼-����ҵ漼
	*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void)

{

	int ysalary;//����

	int temp_two; // ���� - �⺻ ������
	
	double msalary;//����

	double pension;//���ο��� 4.5%

	double health;//�ǰ����� 3.5%

	double care;//�������� �ǰ������� 12.27%

	double empolyment;//��뺸�� 0.08%

	double tax;//�ٷμҵ漼 4%

	double local_tax;//����ҵ漼�� �ٷμҵ漼�� 10%

	double temp;//�ӽ�����



	printf("������ �Է��ϼ��� : ");

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

	printf("\n##### �Ŵ� ���� �ݾ� �հ� #####\n\n");

	printf("���ο��� : \t%10.0lf ��\t---4.5%%����\n", pension / 12);

	printf("�ǰ����� : \t%10.0lf ��\t---3.5%%����\n", health / 12);

	printf("��纸�� : \t%10.0lf ��\t---�ǰ������� 12.27%%����\n", care / 12);

	printf("��뺸�� : \t%10.0lf ��\t---0.08%%����\n", empolyment / 12);

	printf("�ҵ漼 :   \t%10.0lf ��\t---4%%����\n", tax / 12);

	printf("����ҵ漼 : \t%10.0lf ��\t---�ҵ漼�� 10%%����\n", local_tax / 12);



	printf("\n#################################\n\n");

	*/

	printf("�ϳⰣ �� ���ɾ� : %.0lf ��\n", temp);

	printf("�� ���ɾ� : %.0lf ��\n\n\n", msalary);



	return 0;

}