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

/*
* long long n = (b - a) - 1;   // ������ ������ ���� (a�� b�� ������������)
* long long t = (b - a) + 1;   // �� ���� ������ ���� (a�� b�� ������)
* // (1) �� (3 + 5) / 2 = 4
* // (����) �� ((a + 1) + (b - 1)) / 2
* long long sideset = ((b - a) - 1) * ((a + 1) + (b - 1)) / 2;   // ������ ������ �� (4)
* // �� = (����)��(a + b) / 2
* long long sum =  t * (a + b) / 2;
* 
* 
*/


// ������ ������ ������ ����Ѵ�.
// long long solution(int a, int b)
// {
//     if (a > b)
//     {
//         std::swap(a, b);
//     }
// 
//     long long answer = 0;
//     long long count = (b - a) + 1;
// 
//     answer = count * (a + b) / 2;
// 
//     if (a == b)
//     {
//         answer = a;
//     }
// 
//     return answer;
// }
// 
// int main()
// {
//    long long sum = solution(5, 3);
//     
//     std::cout << sum << std::endl;
// }


#pragma endregion


#pragma region ¦���� Ȧ��

// string solution(int num)
// {
//     string answer = "";
// 
//     if (num % 2 == 0)
//     {
//         answer = "Even";
//     }
//     else
//     {
//         answer = "Odd";
//     }
//     return answer;
// }
// 
// int main()
// {
//     string result = solution(51);
// 
//     cout << result << std::endl;
// }
// else if (num % 2 == 1) �� ���ϴ� ���� 
// ��� ���� ����(-1) �� ��� �ɼ��� �ֱ⶧���Դϴ�.
#pragma endregion
