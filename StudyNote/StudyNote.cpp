#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region MyRegion
/*
* absolutes�� ���̴� 1 �̻� 1,000 �����Դϴ�.
absolutes�� ��� ���� ���� 1 �̻� 1,000 �����Դϴ�.
signs�� ���̴� absolutes�� ���̿� �����ϴ�.
signs[i] �� ���̸� absolutes[i] �� ���� ������ �������, �׷��� ������ �������� �ǹ��մϴ�.
* for (int n : nums) {
    isNegative.push_back(n < 0);  // ������ true, �ƴϸ� false
}
*
*/
//int solution(vector<int> absolutes, vector<bool> signs) {
//    
//    int result = 0;
//   
//    for (int n : absolutes)
//    {
//        signs.push_back(n < 1);
//    }
//    for (int i = 0; i < absolutes.size(); i++)
//    {
//        if (signs[i] == true)
//        {
//            result += absolutes[i];
//        }
//        else
//        {
//            result += absolutes[i] * -1;
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    std::vector<int> data = { 4, 7, 12 };
//    std::vector<bool> set(3,false);
//
//    solution(data,set);
//    for (int i = 0; i < data.size(); i++)
//    {
//        std::cout << "���� : " << solution(data,set) << std::endl;
//    }
//    
//}
#pragma endregion


#pragma region �� ���� ������ ��
/* ���� ���� 
* �� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
* ���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.
*
* ���� ����
* a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
* a�� b�� -10,000,000 �̻� 10,000,000 ������ �����Դϴ�.
* a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.
*/
long long solution(int a, int b)
{
    std::vector<long long> side;
    long long answer = 0;
    long long n = (a + b) / 2;
    for (long long i = 0; i < b; i++)
    {
        if (a > 0)
        {
            side.push_back(a + i);

        }
    }
   
    if (a == b)
    {
        answer = a;
        return a;
    }
    
  
  
   
   
}

int main()
{
    solution(3, 5);

    std::cout << solution << std::endl;
}


#pragma endregion
