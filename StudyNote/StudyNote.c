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


#pragma region ������ �迭
// 2���� �迭 ����
// int main(void)
// {
// 	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
// 
// 	printf("arr �迭�� 2�� 3���� ���� ��� : %d \n", arr[1][2]);
// 	printf("arr �迭�� 1�� 2���� ���� ��� : %d \n", arr[0][1]);
// 	return 0;
// }

// �л� �� �� �Է¹ޱ� 
// int main(void)
// {
// 	int score[3][2];
// 	int i, j;
// 
// 	for (i = 0; i < 3; i++)
// 	{
// 		for (j = 0; j < 2; j++)
// 		{
// 			if (j == 0)
// 			{
// 				printf("%d ��° �л��� ���� ���� : ", i + 1);
// 				scanf_s("%d", &score[i][j]);
// 			}
// 			else if (j == 1)
// 			{
// 				printf("%d ��° �л��� ���� ���� : ", i + 1);
// 				scanf_s("%d",&score[i][j]);
// 			}
// 
// 		}
// 	}
// 
// 
// 	for (i = 0; i < 3; i++)
// 	{
// 		printf("%d ��° �л��� ���� ���� : %d, �������� : %d \n", i + 1, score[i][0], score[i][1]);
// 	}
// 
// 	return 0;
// }

#pragma endregion


#pragma region ������ (1)
/* & ������ */
// int main(void)
// {
// 	int a;
// 	a = 2;
// 
// 	printf("%p \n", &a);
// 	return 0;
// }
// 
// �ּҿ����ڸ� Ȱ���Ͽ� ������ �޸��ּ� Ȯ���ϱ�.
// int main()
// {
//     int a;
//     double b;
//     char c;
// 
//     printf("int �� ������ �ּ� : %p\n", &a);
//     printf("double �� ������ �ּ� : %p\n", &b);
//     printf("char �� ������ �ּ� : %p\n", &c);
// 
//     return 0;
// }

// �������� ����� ���
int main()
{
    int a;
    int* pa;

    pa = &a;
    *pa = 10;

    printf("�����ͷ� a�� ��� : %d \n",*pa);
    printf("���������� a�� ��� : %d\n", a);

    return 0;
}

// �������� ����
// int main(void)
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 
// 	printf("������ p�� ��� �ִ� �� : %p \n", p);
// 	printf("int ���� a�� ����� �ּ� : %p \n", &a);
// 
// 	return 0;
// }

// * �������� �̿�
// int main(void)
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 	a = 2;
// 
// 	printf("a �� �� : %d \n",a);
// 	printf("*p �� �� : %d \n",*p);
// 
// 	return 0;
// }


// * �������� �̿� 2
// int main()
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 	*p = 3;
// 
// 	printf("a �� �� : %d \n", a);
// 	printf("*p �� �� : %d \n",*p);
// 
// 	return 0;
// }

// �����͵� �����̴�.
// int main(void)
// {
// 	int a;
// 	int b;
// 	int* p;
// 
// 	p = &a;
// 	*p = 2;
// 
// 	p = &b;
// 	*p = 4;
// 
// 	printf("a : %d \n",a);
// 	printf("b : %d \n",b);
// 	
// 	return 0;
// 	
// }
#pragma endregion


#pragma region ������ (2)
/* ��� ������? */
// int main()
// 
// 	int a;
// 	int b;
// 
// 	const int* pa = &a;
// 
// 	*pa = 3; // �ùٸ��� ���� ����
// 	pa = &b; // �ùٸ� ����
// 
// 	return 0;
// 
/* ��� ������? */
// int main()
// {
//     int a;
//     int b;
//     int* const pa = &a;
// 
//     *pa = 3; // �ùٸ� ����
//     *pa = &b; // �ùٸ��� ���� ����
//     
//     return 0;
// 
// }

/* �������� ���� */
// int main()
// {
// 	int a;
// 	int* pa;
// 	pa = &a;
// 
// 	printf("pa �� ��: %p \n",pa);
// 	printf("(pa + 1) �� �� : %p \n", pa + 1);
// 	return 0;
// }

/* �������� ����2 */
// int main()
// {
// 	int a;
// 	char b;
// 	double c;
// 	int* pa = &a;
// 	char* pb = &b;
// 	double* pc = &c;
// 
 	// int ���� �⺻ 4byte �޸𸮸� 
 	// �Ҵ������� 4byte ��ŭ �ּҰ��� ��������.
// 	printf("pa �� �� : %p \n", pa);
// 	printf("(pa + 1) �� �� : %p \n", pa + 1);
// 
 	// char �� �� �⺻ 1byte �޸𸮸� 
 	// �Ҵ������� 1byte ��ŭ �ּҰ��� ��������.
// 	printf("pb �� �� : %p \n", pb);
// 	printf("(pb + 1) �� �� : %p \n", pb + 1);
// 
 	// double ���� �⺻ 8byte�� �޸𸮸�
	// �Ҵ������� 8byte ��ŭ �ּҰ��� ��������.
// 	printf("pc �� �� : %p \n", pc);
// 	printf("(pc + 1) �� �� : %p \n", pc + 1);
// 
// }

/* ������ ���� */
// int main()
// {
//     int a;
//     int* pa = &a;
// 
    // int ���� �⺻ 4byte �޸𸮸� 
    // �Ҵ������� 4byte ��ŭ �ּҰ��� ������ �ȴ�.
//     printf("pa �� �� : %p \n",pa);
//     printf("(pa - 1) �� �� : %p \n",pa - 1);
// }

/* �����ͳ����� ���� */

// int main()
// {
//     int a;
//     int* pa = &a;
//     int b;
//     int* pb = &b;
//     int* pc = pa + pb;
// 
// ������ ������ ������ �ƹ��� �ǹ̰� ���� ������ 
// C ���� ������ �� �����ϴ�.
// 
//     return 0;
// }



#pragma endregion
