//ctrl alt c  -> ctrl alt R : C��� ����







/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 5
int main(void)
{
    int i;
    int data[ROWS][COLS] = {{87, 56, 32, 86, 3}, {99, 55, 54, 91, 1},
    {100, 100, 80, 90, 0}};

    double final_score;

    for (i =0 ; i < ROWS; i ++)
    {
        final_score = data[i][0] * 0.3 + data[i][1] * 0.4 + data[i][2] * 0.2 + data[i][3] * 0.1 - data[i][4];
        printf("%d��° �л��� ���� : %.1lf \n", i+1, final_score);
    }

    return 0;
}
*/







/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
    int i;
    int data[ROWS][COLS] = {{87, 56, 32, 86, 3}, {99, 55, 54, 91, 1},
    {100, 100, 80, 90, 0}};

    double final_score;

    for (i =0 ; i < ROWS; i ++)
    {
        printf("%��° �л��� ������ �Է��ϼ��� (�߰�, �⸻, ����, �⼮, �Ἦ Ƚ��) : ", i + 1);
        scanf("%d %d %d %d %d", &data[i][0], &data[i][1],&data[i][2], &data[i][3],&data[i][4]);

    }
    for (i =0; i < ROWS; i++)
    {
        for (j =0; j < COLS; j++)
            printf("data[%d][%d] = %d  ", i , j , data[i][j]);
    printf("\n");
    }
    for (i =0 ; i < ROWS; i ++)
    {
        final_score = data[i][0] * 0.3 + data[i][1] * 0.4 + data[i][2] * 0.2 + data[i][3] * 0.1 - data[i][4];
        printf("%d��° �л��� ���� : %.1lf \n", i+1, final_score);
    }

    return 0;
}

*/






/*

//�ζ����α׷� �ۼ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6



int sort_lotto(int list[])
{
    int i , j , temp , min;
    for (i = 0; i< SIZE-1; i ++)
    {
        min = i;
        for(j = i+1; j<SIZE; j++)
            if (list[j] < list[min])
                min = j;
        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }

}




void print_lotto(int list[])
{
	int i;
	for (i = 0; i < SIZE; i++)
		printf("%5d ", list[i]);
}
int main(void)
{
	int num[SIZE];
	int i, j, n, k = 0;
	srand((int)time(NULL));
	printf("\n�� ���� �ҷ�? ");
	scanf_s("%d", &n);		//n�� ���� Ƚ��
	while (k < n)
	{
		for (i = 0; i < SIZE; i++)
		{
			num[i] = rand() % 45 + 1;
			for (j = 0; j < i; j++)
				if (num[i] == num[j])
					num[i] = rand() % 45 + 1;
		}
		k++;
		//�� �κ��� �Լ��� ���α׷� ���� sort_lotto(num);

        sort_lotto(num);
		print_lotto(num);
		printf("\n");
	}

}

*/




//�߱�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num[3], play[10];
int strike[10] , ball[10], tri;
int S;
int B;
void make_num();
void scan_check();
int main(void)
{
    printf("[���� �߱� ����\n 0~9���� ������ 3�ڸ� ���ڸ� �����ϼ���. ��ȸ�� �� 10�� \n");
    make_num(); 
    scan_check(); // ����ڷ� ���� ���� �޾Ƽ� üũ�ϴ� �κ�
}

void make_num()
{
    int i;
    srand((unsigned)time(NULL));
    while(1)
    {
        for(i = 0 ; i < 3; i++)
            num[i] = rand() % 10;
        if(num[0] != num[1] && num[1] != num[2] && num[2] != num[0]) // 3���� ���ڰ� ��δٸ����� �ݺ��� ��������
            break;
    
    }
}
void scan_check()
{
    int i , j, k;
    int check[3];


    for (i = 0; i < 10; i++)
    {
        tri++;
        printf("�����Ͻ� 3�ڸ� �� : ");
        scanf("%d", &play[i]);  //987
        check[0] = play[i] / 100; //9
        check[1] =   (play[i] % 100) / 10;  // 87/10 = 8
        check[2] =  play[i] % 10;  // 7

        if(check[0] == check[1] || check[1] == check[2] || check[2] == check[0])
        {
            printf("�ٽ� �Է��ϼ���! \n");
            tri--;
            i--;

        }
        else
        {
            //�� ���� ���ڸ� ���ؼ� ��ġ�� ���� ��123�ڰ� ������ S,
            //��ġ�� �ٸ����� ���ڰ� ������ B�� ó��

        for (i = 0; i < 3; i++) 

          for (j = 0; j < 3; j++) 

              if (check[i] == play[j])

                  if (i == j) 
                    {
                      S++; // ��Ʈ����ũ ���� ���� 
                       
                    }

                  else // �ٸ� ��ġ�� ��� 

                    {
                      B++; // �� ���� ���� 
                     
                    }

         printf("[���]��Ʈ����ũ : %d, �� : %d\n\n", S, B); 
        }
    }

}
