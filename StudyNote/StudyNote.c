#include <stdio.h>


#pragma region �迭
// int main(void)
// {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  int arr[] = { 1,2,3,4 };
//  int arr2[] = { 1,2,3,4,5,6 };
// 
// printf("array�� 11��° �迭 : %d \n", arr[2]);
// 
// return 0;
// }
#pragma endregion

#pragma region �迭 ��������

// int main(void)
// {
// 	int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
// 	int i;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("�迭�� %d ��° ���� : %d \n", i + 1, arr[i]);
// 	}
// 	return 0;
// }

#pragma endregion

#pragma region �迭�� ��ձ��ϱ�(scanf_s�� ����Ұ�.)

// int main()
// {
// 	int arr[5];
// 	int i, ave = 0;
// 
// 	for(i = 0; i < 5; i++)
// 	{
// 		printf("%d ��° �л��� ������? ", i + 1);
// 		scanf_s("%d", &arr[i]);
// 	}
// 	for (i = 0;i < 5; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 
// 	printf("��ü �л��� ����� : %d \n", ave / 5);
// 	return 0;
// }

#pragma endregion

#pragma region �迭�� ������� ������ �հ��ڿ� ���հ��� �и�

// int main(void)
// {
// 	int arr[10];
// 	int i, ave = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ��° �л��� ������? ", i + 1);
// 		scanf_s("%d", &arr[i]);
// 	}
// 	for (i = 0; i < 10; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 	ave = ave / 10;
// 	printf("��ü �л��� ����� : %d \n", ave);
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("�л� %d : ", i + 1);
// 		if (arr[i] >= ave)
// 			printf("�հ� \n");
// 		else
// 			printf("���հ� \n");
// 	}
// 
// 	return 0;
// }


#pragma endregion


#pragma region �Ҽ��� ���ϴ� ���α׷������

// int main(void)
// {
// 	int guess = 5;
// 
// 	int prime[1000];
// 
// 	int index = 1;
// 
// 	int i;
// 	int ok;
// 
// 	prime[0] = 2;
// 	prime[1] = 3;
// 
// 	for (;;)
// 	{
// 		ok = 0;
// 		for (i = 0; i <= index; i++)
// 		{
// 			if (guess % prime[i] != 0)
// 			{
// 				ok++;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 
// 		}
// 		if (ok == (index + 1))
// 		{
// 			index++;
// 			prime[index] = guess;
// 			printf("�Ҽ� : %d \n", prime[index]);
// 			if (index == 999) 
// 				break;
// 		}
// 		guess += 2;
// 	}
// 	return 0;
// }



#pragma endregion


#pragma region  �迭�� �������� ����(������ ��������)

// 1��° ����
// �ֳ��ϸ� ������ ������ �ֻ�ܿ� ����Ǿ� �Ǳ� �����Դϴ�! ���� ���� �迭 arr �� ���� i, ave �� ���� ������ �ƴ� 
// �ٸ� ���� ������ ��Ÿ�����Ƿ� C �����Ϸ��� ������ ������ ó���ϰ� �˴ϴ�. (���� C++ ������ �����մϴ�)
//���ʿ� ����� �Է��ϴ� ��� �迭�� ũ�⸦ ���Ƿ� ���� �� �� ���� ���̿�����.
// �׷��ٸ�, �׳� ���� ũ�� ������ Ư���� ���� ����ִ� ������ �������� ���� ���ô�.
// 
// int main(void)
// {
// 	int total;
// 	printf("��ü �л��� : ");
// 	scanf_s("%d", &total);
// 	int arr[total];
// 	int i, ave = 0;
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("%d ��° �л��� ������?", i + 1);
// 		scanf_s("%d",&arr[i]);
// 	}
// 	for (i = 0; i < total; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 
// 	ave = ave / total;
// 
// 	printf("��ü �л��� ����� : %d \n", ave);
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("�л� %d : ", i + 1);
// 		if (arr[i] >= ave)
// 		{
// 			printf("�հ� \n");
// 		}
// 		else
// 		{
// 			printf("���հ� \n");
// 		}
// 	}
// 	return 0;
// }

// 2 ��° ����
//C �� ó���� �迭�� ũ�⸦ ������ ���� ������ �� ���� �����ϰ� �ֱ� �����Դϴ�. 
// (���, '���� �Ҵ�' �̶�� ������� ������ �ؼ� ������ �� ������ �� �κп� ���� �̾߱�� ���߿� �ٷ絵�� �սô�.) 
// �ֳ��ϸ� ó���� �����Ϸ��� �迭�� ó���� �� �޸� �� ������ ��ƾ� �ϴµ� �� ��, ��ƾ� �Ǵ� ������ ũ�Ⱑ �ݵ�� ����� �־����� �ϱ� �����Դϴ�. 
// ���� ���ؿ��� ��� �����ϴ� ���� �ʹ� ������ �� ������ �׳� '�迭�� ũ��� ������ ������ �� ����' ������ �Ѿ���� �սô�.

// int main(void)
// {
//    int total = 3;
// 	int arr[total];
// 	int i, ave = 0;
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("%d ��° �л��� ������?", i + 1);
// 		scanf_s("%d",&arr[i]);
// 	}
// 	for (i = 0; i < total; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 
// 	ave = ave / total;
// 
// 	printf("��ü �л��� ����� : %d \n", ave);
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("�л� %d : ", i + 1);
// 		if (arr[i] >= ave)
// 		{
// 			printf("�հ� \n");
// 		}
// 		else
// 		{
// 			printf("���հ� \n");
// 		}
// 	}
// 	return 0;
// }
#pragma endregion


#pragma region ���

//int main(void)
//{
//	const int a = 3;
//
//	printf("%d",a);
//	return 0;
//}

// �ȵǴ� ���� 1��
// ó�� ����� ���ǽ� ���� ������ ���� �ʴ´ٸ�
// ������ ���� �� �߻��մϴ�.
// int main() 
// {
// 	const int a;
// 
// 	printf("%d", a);
// 	return 0;
// }

// �ȵǴ� ���� 2��
// ����� ���� �� Ư�� ��� �� �� ��ü�� �ٲ� �� �����ϴ�.
// �Ʒ��� ���� �ڵ带 �۵��Ѵٸ� 1���� ���� ������ �߻��մϴ�.
// int main() {
// 	const int a = 2;
// 
// 	a = a + 3;
// 	printf("%d", a);
// 	return 0;
// }
#pragma endregion

#pragma region �ʱ�ȭ �����ʴ� ��

// �� �ڵ尡 �۵��� ���ϴ�����
// �ü���� �ʱ�ȭ ���� ���� ������ ���� ���� ��ü�� �����ϰ� �ֽ��ϴ�.
// �� ������ �츮�� �� ������ ����ִ� �������� ���� ���ϰ� �˴ϴ�.
// int main(void)
// {
// 	int arr;
// 
// 	printf("�ʱ�ȭ�����ʴ� �� : %d", arr);
// 
// 	return 0;
// }

// ���ڵ��� ���� �̻�������
// arr[1]���� ������ �޸𸮿��� ����ߴ� �����Ⱚ�� 
// ����ֱ⶧���� �״����µȸ���̴�.
// int main(void)
// {
// 	int arr[3];
// 	arr[0] = 1;
// 	printf("arr[1] �� ����? : %d", arr[1]);
// 
// 	return 0;
// }

// ���������� ��µǴ� �ڵ� �� ����
// �� ������
//int arr[3] = { 1 }; �� ���� �����Ѵٸ� �����Ϸ��� ���������� �Ʒ��� ���� �����ϱ� �����Դϴ�.
//int arr[3] = { 1, 0, 0 };
//����, �ڵ������� �츮�� Ư���� �ʱ�ȭ ���� ���� ���ҵ鿡�� 0 �� ���� �˴ϴ�.
// 
// int main(void)
// {
// 	int arr[3] = { 1 };
// 	printf("arr[1] �� �� ��? : %d",arr[1]);
// 
// 	return 0;
// }

#pragma endregion


#pragma region �����غ�����!(�迭)

// ���� (1)
// ���� �Է� ���� �л����� ���� �� ���� ������ �����ϴ� ���α׷��� ����� ������.

//���� (2)
//�Է� ���� �л����� ������ ���� �׷����� ��Ÿ���� ���α׷��� ����� ������.
#pragma endregion
