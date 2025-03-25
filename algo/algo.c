#include <stdio.h>
#include <stdlib.h>
#pragma region 병합정렬
//void MergeSort(int DataSet[], int StartIndex, int EndIndex);
//void Merge(int DataSet[], int StartIndex, int MiddleIndex, int EndIndex);
//
//void MergeSort(int DataSet[], int StartIndex, int EndIndex)
//{
//    int MiddleIndex;
//
//	if (EndIndex - StartIndex < 1)
//	{
//		return;
//	}
//
//	MiddleIndex = (StartIndex + EndIndex) / 2;
//
//	MergeSort(DataSet, StartIndex, MiddleIndex);
//	MergeSort(DataSet, MiddleIndex + 1, EndIndex);
//	Merge(DataSet, StartIndex, MiddleIndex, EndIndex);
//}
//
//void Merge(int DataSet[], int StartIndex, int MiddleIndex, int EndIndex)
//{
//	int i;
//	int LeftIndex = StartIndex;
//	int RightIndex = MiddleIndex + 1;
//	int DestIndex = 0;
//
//	int* Destination = (int*)malloc(sizeof(int) * (EndIndex - StartIndex + 1));
//
//	while(LeftIndex <= MiddleIndex && RightIndex <= EndIndex)
//	{
//		if (DataSet[LeftIndex] < DataSet[RightIndex])
//		{
//			Destination[DestIndex] = DataSet[LeftIndex];
//			LeftIndex++;
//		}
//		else
//		{
//			Destination[DestIndex] = DataSet[RightIndex];
//			RightIndex++;
//		}
//		DestIndex++;
//	}
//	while (LeftIndex<=MiddleIndex)
//	{
//		Destination[DestIndex++] = DataSet[LeftIndex++];
//	}
//	while (RightIndex <= EndIndex)
//	{
//		Destination[DestIndex++] = DataSet[RightIndex++];
//	}
//	DestIndex = 0;
//	for (i = StartIndex; i <=EndIndex; i++)
//	{
//		DataSet[i] = Destination[DestIndex++];
//	}
//
//	free(Destination);
//}
//int main()
//{
//	// C언어로 병합 정렬 알고리즘 만들기 
//	int DataSet[] = { 334,6,4,2,3,1,5,117,12,34 };
//	int Length = sizeof DataSet / sizeof DataSet[0];
//	int i = 0;
//
//	MergeSort(DataSet, 0, Length - 1);
//
//	for (i = 0; i < Length; i++)
//	{
//		printf("%d ",DataSet[i]);
//	}
//	printf("\n");
//
//    return 0;
//}
#pragma endregion
typedef unsigned long ULONG;

ULONG Fibonacci(int N)
{
	int i;
	ULONG Result;
	ULONG* FibonacciTable;
	if (N == 0 || N == 1)
	{
		return N;
	}

	FibonacciTable = (ULONG*)malloc(sizeof(ULONG) * (N + 1));

	FibonacciTable[0] = 0;
	FibonacciTable[1] = 1;

	for (i = 2; i <= N; i++)
	{
		FibonacciTable[i] = FibonacciTable[i - 1] + FibonacciTable[i - 2];
	}

	Result = FibonacciTable[N];

	free(FibonacciTable);

	return Result;
}

int main()
{
	int N = 46;

	ULONG Result = Fibonacci(N);

	printf("Fibonacci(%d) = %lu \n", N, Result);

	return 0;
}
