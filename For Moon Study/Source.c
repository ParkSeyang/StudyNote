#include <stdio.h>
#include <windows.h>
int main(void)
{
	// int a = 1;
	// 
	// while(a < 10 // ���ǽ��� ���̿��� ���� ��ɹ��� ������ ���� ���ǽ��� �����϶� ��������)
	// {
	// 	a = a * 2;
	// 	printf("a : %d\n", a);
	// }
	
	// for�� ����

	// int a = 1;
	// int i;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	a = a * 2;
	// }
	// 
	// printf("a �� �� : %d\n",a);

	// �ݺ��� Ȯ�ι��� 1
	
	// int a = 0;
	// do
	//  {
	//  scanf_s("%d", &a);
	//  } while (a < 0);

	// �ݺ��� Ȯ�ι��� 2

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

	// �ݺ��� Ȯ�ι��� 3

	// int i;
	// for (int i = 0; i < 10; i++)
	// {
	// 	printf("$");
	// }

	// ��ø �ݺ������� �� ����ϱ�(2�� for��)
	
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
	// ��ø �ݺ������� ������ �����
	// for (int i = 2; i <= 9; i++) // �պκ� ���� 2�� ~ 9�ܱ���
	// {
	// 	Sleep(1000);
	// 	for (int j = 1; j <= 9; j++) // �ڿ� ���� �κ� 1 ~ 9 ���� 
	// 	{
	// 		Sleep(500);
	// 		printf("%d * %d = %d\n",i, j, i * j);
	// 	}
	// }
	
	// 2�� for �� �� �����
	
	// int i = 0; ����
	// int j = 0; ��
	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("��");
	// 	}
	// 	printf("\n");
	// }
	// 
	// for (int i = 5; i > 0; i--)
	// {
	// 	for (int j = 0; j < i; j++)
	// 	{
	// 	  printf("��");
	// 	}
	// 	printf("\n");
	// }

	// 3�� for ������ ���̾Ƹ�����
	// int i; // ����
	// int	j; // ��
	// int	n; // ��ĭ ����
	// 
	// printf("����� �� ���� �Է��ϼ��� : ");
	// 
	// scanf_s("%d", &n);
	// 
	// ���� �Ƕ�̵�
	// 
	// for (int i = 1; i <= n; i++)
	// {
	// 	for (int j = 1; j <= n - i; j++) // ������ ����
	// 	{
	// 		printf("  ");
	// 	}
	// 	for (int j = 1; j <= 2 * i - 1; j++) // ���� ����Ƚ����ŭ �ݺ���
	// 	{
	// 		printf("��");
	// 	}
	// 	printf("\n"); // ����Ƚ���� �ݺ��ϰ��� �����ٷ� �Ѿ
	// }
	// 
	// �Ʒ��� �Ƕ�̵�
	// for (int i = n - 1; i >= 1; i--)
	// {
	// 	for (int j = 1; j <= n - i; j++)
	// 	{
	// 		printf("  ");
	// 	}
	// 	for (int j = 1; j <= 2 * i - 1; j++)
	// 	{
	// 		printf("��");
	// 	}
	// 	printf("\n");
	// }


	return 0;
}