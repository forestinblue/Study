//ctrl alt c  -> ctrl alt R : C언어 실행







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
        printf("%d번째 학생의 성적 : %.1lf \n", i+1, final_score);
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
        printf("%번째 학생의 점수를 입력하세요 (중간, 기말, 과제, 출석, 결석 횟수) : ", i + 1);
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
        printf("%d번째 학생의 성적 : %.1lf \n", i+1, final_score);
    }

    return 0;
}

*/






/*

//로또프로그램 작성
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
	printf("\n몇 게임 할래? ");
	scanf_s("%d", &n);		//n은 게임 횟수
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
		//이 부분을 함수로 프로그램 구현 sort_lotto(num);

        sort_lotto(num);
		print_lotto(num);
		printf("\n");
	}

}

*/




//야구게임
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
    printf("[숫자 야구 게임\n 0~9까지 숫자중 3자리 숫자를 선택하세요. 기회는 단 10번 \n");
    make_num(); 
    scan_check(); // 사용자로 부터 값을 받아서 체크하는 부분
}

void make_num()
{
    int i;
    srand((unsigned)time(NULL));
    while(1)
    {
        for(i = 0 ; i < 3; i++)
            num[i] = rand() % 10;
        if(num[0] != num[1] && num[1] != num[2] && num[2] != num[0]) // 3개의 숫자가 모두다를때만 반복문 빠져나감
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
        printf("선택하신 3자리 수 : ");
        scanf("%d", &play[i]);  //987
        check[0] = play[i] / 100; //9
        check[1] =   (play[i] % 100) / 10;  // 87/10 = 8
        check[2] =  play[i] % 10;  // 7

        if(check[0] == check[1] || check[1] == check[2] || check[2] == check[0])
        {
            printf("다시 입력하세요! \n");
            tri--;
            i--;

        }
        else
        {
            //세 개의 숫자를 비교해서 위치가 같고 숫123자가 같으면 S,
            //위치는 다르지만 숫자가 같으면 B로 처리

        for (i = 0; i < 3; i++) 

          for (j = 0; j < 3; j++) 

              if (check[i] == play[j])

                  if (i == j) 
                    {
                      S++; // 스트라이크 개수 증가 
                       
                    }

                  else // 다른 위치일 경우 

                    {
                      B++; // 볼 개수 증가 
                     
                    }

         printf("[결과]스트라이크 : %d, 볼 : %d\n\n", S, B); 
        }
    }

}
