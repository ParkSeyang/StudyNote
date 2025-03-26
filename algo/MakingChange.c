#include <stdio.h>
#include "MakingChange.h"
void GetChange(int Price, int Pay, int CoinUnits[], int Change[], int Size)
{
	int i = 0;
	int ChangeAmount = Pay - Price;

	for (i = 0; i < Size; i++) // �� �˻� : ū���� �� �������� ���� ������ �������� �ʿ��� ������ ���� �Ž������� �ϼ��ȴ�.
	{
		Change[i] = CountCoins(ChangeAmount, CoinUnits[i]); // �� ���� : ���ܰ迡�� ������ �� ū ������ ������ ���ϴ�.
		ChangeAmount = ChangeAmount - (CoinUnits[i] * Change[i]);
	}
}

int CountCoins(int Amount, int CoinUnit)
{
	int CoinCount = 0;
	int CurrentAmount = Amount;

	while (CurrentAmount >= CoinUnit)
	{
		CoinCount++;
		CurrentAmount = CurrentAmount - CoinUnit;
	}

	return CoinCount;
}

void PrintChange(int CoinUnits[], int Change[], int Size)
{
	int i = 0;

	for (i = 0; i < Size; i++)
	{
		printf("%8d�� : %d��\n", CoinUnits[i], Change[i]);
	}
}