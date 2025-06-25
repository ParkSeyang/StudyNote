#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region MyRegion
/*
* absolutes�� ���̴� 1 �̻� 1,000 �����Դϴ�.
* absolutes�� ��� ���� ���� 1 �̻� 1,000 �����Դϴ�.
* signs�� ���̴� absolutes�� ���̿� �����ϴ�.
* signs[i] �� ���̸� absolutes[i] �� ���� ������ �������, �׷��� ������ �������� �ǹ��մϴ�.
* for (int n : nums) 
* {
*   isNegative.push_back(n < 0);  // ������ true, �ƴϸ� false
* }
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

#pragma region �������� (1)�� �Ǵ� �� ã��

/* ���� ����
* �ڿ��� n�� �Ű������� �־����ϴ�. n�� x�� ���� �������� 1�� �ǵ��� �ϴ� ���� ���� �ڿ��� x�� return �ϵ��� solution �Լ��� �ϼ����ּ���. 
* ���� �׻� �������� ����� �� �ֽ��ϴ�.
* 
* ���ѻ���
* 3 �� n �� 1,000,000
* 
* ����� �� ����
* ����� �� #1
* 10�� 3���� ���� �������� 1�̰�, 3���� ���� �ڿ��� �߿��� ������ ������ �����ϴ� ���� �����Ƿ�, 3�� return �ؾ� �մϴ�.
* ����� �� #2
* 12�� 11�� ���� �������� 1�̰�, 11���� ���� �ڿ��� �߿��� ������ ������ �����ϴ� ���� �����Ƿ�, 11�� return �ؾ� �մϴ�.
*/

// int solution(int n)
// {
//     int answer = 0;
// 
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (n % i == 1)
//         {
//             answer = i;
//             return answer;
//         }
// 
//     }
// }
// 
// int main()
// {
//     int sum = solution(10);
// 
//     cout << sum << endl;
// }

#pragma endregion

#pragma region ���ܿ��� ���� (����� 67%)
/*���� ����
* ���ڳ��� ������ �� ��翡�Դ� 1������ number���� ��ȣ�� �����Ǿ� �ֽ��ϴ�. 
* ������ ���������� ���⸦ �����Ϸ��� �մϴ�.
* �� ���� �ڽ��� ��� ��ȣ�� ��� ������ �ش��ϴ� ���ݷ��� ���� ���⸦ �����Ϸ� �մϴ�. 
* ��, �̿�������� ���࿡ ���� ���ݷ��� ���Ѽ�ġ�� ���ϰ�, ���Ѽ�ġ���� ū ���ݷ��� ���� ���⸦ �����ؾ� �ϴ� ���� 
* ���������� ���� ���ݷ��� ������ ���⸦ �����ؾ� �մϴ�.
* ���� ���, 15������ ������ ���ܿ��� 15�� ����� 1, 3, 5, 15�� 4�� �̹Ƿ�, ���ݷ��� 4�� ���⸦ �����մϴ�. 
* ����, �̿�������� �������� ������ ���ݷ��� ���Ѽ�ġ�� 3�̰� ���Ѽ�ġ�� �ʰ��� ��簡 ����� ������ ���ݷ��� 2���, 
* 15������ ������ ���ܿ��� ���������� ���ݷ��� 2�� ���⸦ �����մϴ�. ���⸦ ���� ��, ������ ���ݷ� 1�� 1kg�� ö�� �ʿ��մϴ�. 
* �׷��� ���������� ���⸦ ��� ����� ���� �ʿ��� ö�� ���Ը� �̸� ����Ϸ� �մϴ�.
* ���ܿ��� ���� ��Ÿ���� ���� number�� �̿������ �������� ������ ���ݷ��� ���Ѽ�ġ�� ��Ÿ���� ���� limit�� 
* ���Ѽ�ġ�� �ʰ��� ��簡 ����� ������ ���ݷ��� ��Ÿ���� ���� power�� �־����� ��, 
* �������� ������ ���⸦ ��� ����� ���� �ʿ��� ö�� ���Ը� return �ϴ� solution �Լ��� �ϼ��Ͻÿ�.
* 
* ���ѻ���
* 1 �� number �� 100,000
* 2 �� limit �� 100
* 1 �� power �� limit
*
* ����� ��
* number	limit	power	result
*   5         3       2	      10
*   10	      3	      2	      21
* 
* ����� �� ����
* 
* ����� �� #1
* 1���� 5������ ����� ������ ������� [1, 2, 2, 3, 2]���Դϴ�. 
* ��� ���ݷ� ���� ��ġ�� 3�� ���� �ʱ� ������ �ʿ��� ö�� ���Դ� �ش� ������ ���� 10�� �˴ϴ�. 
* ���� 10�� return �մϴ�.
*
* ����� �� #2
* 1���� 10������ ����� ������ ������� [1, 2, 2, 3, 2, 4, 2, 4, 3, 4]���Դϴ�. 
* ���ݷ��� ���Ѽ�ġ�� 3�̱� ������, 6, 8, 10�� ���� ���ݷ��� 2�� ���⸦ �����մϴ�. 
* ���� �ش� ������ ���� 21�� return �մϴ�.
*/

int solution(int number, int limit, int power) 
{
    int answer = 0;

    for (size_t i = 0; i < length; i++)
    {
        if ()
        {

        }
    }

    return answer;
}

int main()
{
    int answer = solution(5, 3, 2);

    cout << answer << endl;
}

#pragma endregion

