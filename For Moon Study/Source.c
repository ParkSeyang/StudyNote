#include <stdio.h>
#include <windows.h>
int main(void)
{
	// int a = 1;
	// 
	// while(a < 10 // 조건식이 참이여야 밑의 명령문을 실행함 그후 조건식이 거짓일때 빠져나옴)
	// {
	// 	a = a * 2;
	// 	printf("a : %d\n", a);
	// }
	
	// for문 예제

	// int a = 1;
	// int i;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	a = a * 2;
	// }
	// 
	// printf("a 의 값 : %d\n",a);

	// 반복문 확인문제 1
	
	// int a = 0;
	// do
	//  {
	//  scanf_s("%d", &a);
	//  } while (a < 0);

	// 반복문 확인문제 2

	// int i = 0;
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("Be happy\n");
	// }

	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("Be happy\n");
	// 	i++;
	// }

	// 반복문 확인문제 3

	// int i;
	// for (int i = 0; i < 10; i++)
	// {
	// 	printf("$");
	// }

	// 중첩 반복문으로 별 출력하기(2중 for문)
	
	// int i, j;
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 5; j++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }
	// 
	// 중첩 반복문으로 구구단 만들기
	// for (int i = 2; i <= 9; i++) // 앞부분 곱셈 2단 ~ 9단까지
	// {
	// 	Sleep(1000);
	// 	for (int j = 1; j <= 9; j++) // 뒤에 곱셈 부분 1 ~ 9 까지 
	// 	{
	// 		Sleep(500);
	// 		printf("%d * %d = %d\n",i, j, i * j);
	// 	}
	// }
	// int i = 0;	// 반복 횟수를 세기위한 제어 변수
	// int sum = 0; // 1부터 10까지의 합을 누적할 변수
	// 
	// for (int i = 1; i <= 10; i++) // i 는 1부터 10까지 증가하면서 열 번 반복
	// {
	// 	sum += i; // i값을 sum에 누적
	// 	if (sum > 30)break; // 누적한 값이 30보다 크면 반복문을 끝낸다.
	// }
	// 
	// printf("누적한 값 : %d\n", sum);
	// printf("마지막으로 더한 값 : %d\n", i);


	// 2중 for 문 의 별찍기
	
	// int i = 0; 공백
	// int j = 0; 별
	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("★");
	// 	}
	// 	printf("\n");
	// }
	// 
	// for (int i = 5; i > 0; i--)
	// {
	// 	for (int j = 0; j < i; j++)
	// 	{
	// 	  printf("★");
	// 	}
	// 	printf("\n");
	// }

	// 3중 for 문으로 다이아몬드찍기
	// int i; // 공백
	// int	j; // 별
	// int	n; // 줄칸 갯수
	// 
	// printf("출력할 줄 수를 입력하세요 : ");
	// 
	// scanf_s("%d", &n);
	// 
	// 위쪽 피라미드
	// 
	// for (int i = 1; i <= n; i++)
	// {
	// 	for (int j = 1; j <= n - i; j++) // 공백을 만듬
	// 	{
	// 		printf("  ");
	// 	}
	// 	for (int j = 1; j <= 2 * i - 1; j++) // 별을 일정횟수만큼 반복함
	// 	{
	// 		printf("★");
	// 	}
	// 	printf("\n"); // 일정횟수를 반복하고나면 다음줄로 넘어감
	// }
	// 
	// 아래쪽 피라미드
	// for (int i = n - 1; i >= 1; i--)
	// {
	// 	for (int j = 1; j <= n - i; j++)
	// 	{
	// 		printf("  ");
	// 	}
	// 	for (int j = 1; j <= 2 * i - 1; j++)
	// 	{
	// 		printf("★");
	// 	}
	// 	printf("\n");
	// }
	// 확인문제 중첩반복문을 실행할때 Be happy가 출력되는 횟수를 맞춰보시오
	// 1번 문제
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 4; j++)
	// 	{
	// 		printf("Be happy\n");
	// 		if (j == 2)break;
	// 	}
	// }
	// 정답 12번
	// 이유 i에서 3번의 반복 그리고 j에서 4번의 Be happy가 출력되므로 12번의 Be happy가 출력됩니다.
	// 2번 문제 
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 4; j++)
	// 	{
	// 		printf("Be happy\n");
	// 		if (j == 2)break;
	// 	}
	// }
	// 정답 9번
	// 이유 j 0번째부터 Be happy가 출력됩니다 그래서 0~2번이될때까지 
	// be happy 총 3번을출력하고 if의 조건식을검토후 j가 2가되면 break로 하나의 for문을 빠져나오게됩니다 
	// 그리고 다시반복함으로 i는 3번이될때가지 반복함으로 3번의출력이 3번반복됨으로 총 9번의 be happy가 출력됩니다.

	// 중첩 반복문을 활용해서 별찍기만들기
	// 내가 풀어낸 정답.
	// int i = 0;
	// int j = 0;
	// 
	// for (i = 0; i < 5; i++)
	// {
	// 	for (j = 0; j < 5; j++)
	// 	{
	// 		if (i==j)
	// 		{
	// 			printf("★");
	// 		}
	// 		else if (i + j == 4)
	// 		{
	// 			printf("★");
	// 		}
	// 		else
	// 		{
	// 		  printf("  ");
	// 		}
	// 	}
	// 	printf("\n");
	// }

	// 실제 정답
	// int i = 0;
	// int j = 0;
	// 
	// for (i = 0; i < 5; i++)
	// {
	// 	for (j = 0; j < 5; j++)
	// 	{
	// 		if ((i==j) || i+j == 4)
	// 		{
	// 			printf("★");
	// 		}
	// 		else
	// 		{
	// 			printf("  ");
	// 		}
	// 	}
	// 	printf("\n");
	// }

	return 0;
}