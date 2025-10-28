#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#pragma region ������ ���ϱ� (�����91%)
// int solution(int num1, int num2)
// {
//     int answer;
//     if (num1 % num2 <= 1)
//     {
//         return answer = num1 % num2;
//     }
//     else
//     {
//         return answer = num1 % num2;
//     }
// 
// }
// 
// int main()
// {
//     int answer = solution(10, 5);
// 
//     cout << answer << endl;
// }

#pragma endregion

#pragma region n�� ��� (����� 90%)
/* ���� ����
* ���� num�� n�� �Ű� ������ �־��� ��, num�� n�� ����̸� 1�� return n�� ����� �ƴ϶�� 0�� return�ϵ��� solution �Լ��� �ϼ����ּ���.
*
* ���ѻ���
* 2 �� num �� 100
* 2 �� n �� 9
* 
* ����� ��
* num	n	result
* 98	2	1
* 34	3	0
* 
* ����� �� ����
* ����� �� #1
* 98�� 2�� ����̹Ƿ� 1�� return�մϴ�.
* ����� �� #2
* 32�� 3�� ����� �ƴϹǷ� 0�� return�մϴ�.
* 
* 
*/
// int solution(int num, int n)  // ���� �� Ǯ��
// {
//     int answer = 0;
// 
//     if (num % n == 0)
//     {
//         return answer += 1;
//     }
//     else if (num % n != 0)
//     {
//         return answer;
//     }
// 
// }
// 
//int solution(int num, int n) // �ٸ������Ǭ Ǯ�� ���� �����ۼ��� �ڵ�� ���� �ڵ��̴�. ���� �����ϰ� �ۼ��Ǿ��ִ�.
//{
//    return num % n == 0 ? 1 : 0;
//}
//
//int main()
//{
//    int answer = solution(98, 3);
//    cout << answer << endl;
//}


#pragma endregion

#pragma region �ֻ��� ���� 2 (����� 89%)
/* ���� ����
* 1���� 6���� ���ڰ� ���� �ֻ����� �� �� �ֽ��ϴ�. �� �ֻ����� ������ �� ���� ���ڸ� ���� a, b, c��� ���� �� ��� ������ ������ �����ϴ�.
* 
* �� ���ڰ� ��� �ٸ��ٸ� a + b + c ���� ����ϴ�.
* �� ���� �� ��� �� ���ڴ� ���� ������ �ٸ� ���ڴ� �ٸ��ٸ� (a + b + c) �� (a2 + b2 + c2 )���� ����ϴ�.
* �� ���ڰ� ��� ���ٸ� (a + b + c) �� (a2 + b2 + c2 ) �� (a3 + b3 + c3 )���� ����ϴ�.
* �� ���� a, b, c�� �Ű������� �־��� ��, ��� ������ return �ϴ� solution �Լ��� �ۼ��� �ּ���.
* 
* ���ѻ���
* a, b, c�� 1�̻� 6������ �����Դϴ�.
* ����� ��
* a	b	c	result
* 2	6	1	9
* 5	3	3	473
* 4	4	4	110592
* ����� �� ����
* ����� �� #1
* 
* ���� 1������ �� �ֻ��� ���ڰ� ��� �ٸ��Ƿ� 2 + 6 + 1 = 9���� ����ϴ�. ���� 9�� return �մϴ�.
* ����� �� #2
* 
* ���� 2������ �� �ֻ��� ���ڸ� �����Ƿ� (5 + 3 + 3) �� (52 + 32 + 32 ) = 11 �� 43 = 473���� ����ϴ�. ���� 473�� return �մϴ�.
* ����� �� #3
* 
* ���� 3������ �� �ֻ��� ���ڰ� ��� �����Ƿ� (4 + 4 + 4) �� (42 + 42 + 42 ) �� (43 + 43 + 43 ) = 12 �� 48 �� 192 = 110,592���� ����ϴ�. ���� 110592�� return �մϴ�.
*/

// int solution(int a, int b, int c) {
//     int answer = 0;
//    
//     if (a != b && b != c && a != c)
//     {
//         return answer = a + b + c;
//     }
//     else if(a == b || b == c || a == c)
//     {
//         return answer = (a + b + c) * static_cast<int>(pow(a, 2) + pow(b, 2) + pow(c, 2));
//     }
//     else
//     {
//         return answer = (a + b + c) * static_cast<int>(pow(a, 2) + pow(b, 2) + pow(c, 2)) * static_cast<int>(pow(a, 3) + pow(b, 3) + pow(c, 3));
//     }
//     
// }
// int solution(int a, int b, int c) 
// {
//     int answer1 = a + b + c;
//     int answer2 = a * a + b * b + c * c;
//     int answer3 = a * a * a + b * b * b + c * c * c;
// 
//     if (a == b && b == c)
//     {
//         return answer1 * answer2 * answer3;
//         
//     }
//     else if (a == b || b == c || a == c)
//     {
//         return answer1 * answer2;
//     }
//     else
//     {
//         return answer1;
//     }
// 
// }
// int main()
// {
//     int answer = solution(3, 5, 4);
// 
//     cout << answer << endl;
// }


#pragma endregion

#pragma region ���� ���ϱ� (����� 87%)

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

// int solution(int number, int limit, int power) 
// {
//     int answer = 0;
//     int count = 0;
//     
//    vector<int> numberCount;
//     for (int n = 1; n <= number; n++)   // n�� 1���� number���� �ݺ��ϸ� �� ����� ��ȣ�� ��Ÿ��
//     {
//         count = 0;           // vector�� ���� ������ ��� ���� �� �ݺ��Ҷ� ���� ���������ʵ��� �ʱ�ȭ
// 
//         for (int i = 1; i * i <= n; i++)     // ���� n�� ��� ������ ���ϴ� �ݺ���
//         {
//             if (n % i == 0)     // n(������ ��ȣ) %  i(���) �� 0�϶�  
//             {
//                 if (i == n / i)  // i == n / i�� ���� n�� i*i�� �������̹Ƿ�, ����� 1���� �߰�
//                 {
//                     count += 1;  
//                 }
//                 else // �������� �ƴ� ���, i�� n/i�� ���� �ٸ� �� ����̹Ƿ� �� �� ����
//                 {
//                     count += 2;  
//                 }
//             }
//         }
//         numberCount.push_back(count);
// 
//         cout << "����Ʈ ������ �ٲٱ��� �� : " << numberCount[n - 1] << endl;
// 
//         if (numberCount[n - 1] > limit)   // ��� ������ limit���� ũ�� power�� ��ü
//         {
//             numberCount[n - 1] = power;  
//         }
//     }
//     cout << "����Ʈ�� ������ ���� �� �� : " << endl;
//     for (int i = 0; i < numberCount.size(); i++)
//     {
//         cout << numberCount[i] << " ";
//     }
// 
//     for (int i = 0; i < numberCount.size(); i++)    // ������ ��� �������� ��� ���� ���� ���ݷ� ���
//     {
//         answer += numberCount[i];  // ��� ����� ������ answer ������ ���ؼ� �����Ѵ�.
//     }
//     return answer;  // �� ���� ���Ͻ�Ų��.
// }
// 
// int main()
// {
//     int answer = solution(10, 3, 2);
// 
//     cout << answer << endl;
// }

#pragma endregion

#pragma region ���� ����(1) (����� 72%)
/* ���� ����
* "���� ����"�̶�� TV ���α׷������� ���� 1���� ������ �뷡�� �θ���, ��û�ڵ��� ���� ��ǥ���� �������� ������ �ο��մϴ�. 
* ���� �⿬�� ������ ������ ���ݱ��� �⿬ �������� ���� �� ���� k��° �̳��̸� �ش� ������ ������ ���� �����̶�� ��Ͽ� �÷� ����մϴ�. 
* �� ���α׷� ���� ���� �ʱ⿡ k�ϱ����� ��� �⿬ ������ ������ ���� ���翡 ������ �˴ϴ�. 
* k�� �������ʹ� �⿬ ������ ������ ������ ���� ���� ����� k��° ������ ���� �������� �� ������, 
* �⿬ ������ ������ ���� ���翡 ������ �ǰ� ������ k��° ������ ������ ���� ���翡�� �������� �˴ϴ�.
* 
* �� ���α׷������� ���� "���� ����"�� ������ ������ ��ǥ�մϴ�. ���� ���, k = 3�̰�, 7�� ���� ����� ������ ������ [10, 100, 20, 150, 1, 100, 200]�̶��, 
* ���� ���翡�� ��ǥ�� ������ �Ʒ��� �׸��� ���� [10, 10, 10, 20, 20, 100, 100]�Դϴ�.
* 
* �׸�1.png
* 
* ���� ���� ����� ������ ���� k, 1�Ϻ��� ������ ������ �⿬�� �������� ������ score�� �־����� ��, ���� ��ǥ�� ���� ������ ������ ������ return�ϴ� solution �Լ��� �ϼ����ּ���.
* 
* ���ѻ���
* 3 �� k �� 100
* 7 �� score�� ���� �� 1,000
* 0 �� score[i] �� 2,000
* 
* ����� ��
* k	             score	                                        result
* 3	[10, 100, 20, 150, 1, 100, 200]               	[10, 10, 10, 20, 20, 100, 100]
* 4	[0, 300, 40, 300, 20, 70, 150, 50, 500, 1000]	[0, 0, 0, 0, 20, 40, 70, 70, 150, 300]
* ����� �� ����
* ����� �� #1
* 
* ������ ���ÿ� �����ϴ�.
* ����� �� #2
* 
* �Ʒ��� ����, [0, 0, 0, 0, 20, 40, 70, 70, 150, 300]�� return�մϴ�. 
*/

// vector<int> solution(int k, vector<int> score) 
// {
//     vector<int> scoreset;
// 
//     vector<int> answer;
// 
// 
//     for (int i = 0; i < score.size(); i++)
//     {
//         scoreset.push_back(score[i]);
// 
//         if (scoreset[i] > score[i])
//         {
//             answer.push_back(score[i]);
//         }
//        else if (scoreset.size() > k)
//        {
//            auto min = std::min_element(scoreset.begin(), scoreset.end());
//            answer.push_back(*min);
//        }
//        
//     }
//     
//     return answer;
// }

// ����
// vector<int> solution(int k, vector<int> score)
// {
//     priority_queue<int, vector<int>, greater<int>> scoreset;
// 
//     vector<int> answer;
// 
// 
//     for (int i = 0; i < score.size(); i++)
//     {
//         scoreset.push(score[i]);
// 
//         if (scoreset.size() > k)
//         {
//             scoreset.pop();
//         }
//         answer.push_back(scoreset.top());
//     }
// 
//     return answer;
// }
// 
// int main()
// {
//     vector<int> Score = { 10,100,20,150,1,100,200 };
//     vector<int> result = solution(3,Score);
// 
//     cout << "�����׽�Ʈ : " << endl;
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     
//    
// }


#pragma endregion

#pragma region k��° �� (Lv1 ����� 72%)(����)
/* ���� ����
* �迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.
* 
* ���� ��� array�� [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��
* 
* array�� 2��°���� 5��°���� �ڸ��� [5, 2, 6, 3]�Դϴ�.
* 1���� ���� �迭�� �����ϸ� [2, 3, 5, 6]�Դϴ�.
* 2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
* �迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� 
* ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.
* 
* ���ѻ���
* array�� ���̴� 1 �̻� 100 �����Դϴ�.
* array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
* commands�� ���̴� 1 �̻� 50 �����Դϴ�.
* commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
* 
* ����� ��
* array	                            commands	             return
* [1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]
* 
* ����� �� ����
* [1, 5, 2, 6, 3, 7, 4]�� 2��°���� 5��°���� �ڸ� �� �����մϴ�. [2, 3, 5, 6]�� �� ��° ���ڴ� 5�Դϴ�.
* [1, 5, 2, 6, 3, 7, 4]�� 4��°���� 4��°���� �ڸ� �� �����մϴ�. [6]�� ù ��° ���ڴ� 6�Դϴ�.
* [1, 5, 2, 6, 3, 7, 4]�� 1��°���� 7��°���� �ڸ��ϴ�. [1, 2, 3, 4, 5, 6, 7]�� �� ��° ���ڴ� 3�Դϴ�.
*/


// vector<int> solution(vector<int> array, vector<vector<int>> commands) 
// {
// 	vector<int> answer;
// 	 for (int i = 0; i < commands.size(); i++)
// 	 {
// 	 	int z = commands[i][0], x = commands[i][1], c = commands[i][2];
// 	 
// 	 	vector<int> cutarray(array.begin() + (z - 1), array.begin() + x);
// 	 
// 	 	sort(cutarray.begin(), cutarray.end());
// 	 
// 	 	answer.push_back(cutarray[c-1]);
// 	 }
// 	// ��� 2 
// 	// for (const auto& cmd : commands)
// 	// {
// 	// 	int z = cmd[0], x = cmd[1], c = cmd[2];
// 	// 	vector<int> cutarray(array.begin() + (z - 1), array.begin() + x);
// 	// 
// 	// 	sort(cutarray.begin(), cutarray.end());
// 	// 
// 	// 	answer.push_back(cutarray[c - 1]);
// 	// 
// 	// }
// 	 return answer;
// 
// }
// 
// 
// int main()
// {
// 	vector<int>Array = { 1, 5, 2, 6, 3, 7, 4 };
// 	vector<int> i = { 2,4,1 };
// 	vector<int>	j = { 5,4,7 };
// 	vector<int>	k = { 3,1,3 };
// 	vector<vector<int>>Commands;
// 	
// 	for (int n = 0; n < i.size(); n++)
// 	{
// 		Commands.push_back({ i[n], j[n], k[n] });
// 	}
// 
// 	vector<int> result = solution(Array, Commands);
// 
// 
// 	cout << "���� �׽�Ʈ : ";
// 	for (int val : result)
// 	{
// 		cout << val << endl;
// 	}
// 
// }


#pragma endregion

#pragma region �ּڰ� �����(Lv2 ����� 79%)(��������)
/* ���� ����
* ���̰� ���� �迭 A, B �ΰ��� �ֽ��ϴ�. �� �迭�� �ڿ����� �̷���� �ֽ��ϴ�.
* �迭 A, B���� ���� �� ���� ���ڸ� �̾� �� ���� ���մϴ�. �̷��� ������ �迭�� ���̸�ŭ �ݺ��ϸ�, �� ���� ���� ���� �����Ͽ� ���մϴ�. �̶� ���������� ������ ���� �ּҰ� �ǵ��� ����� ���� ��ǥ�Դϴ�. (��, �� �迭���� k��° ���ڸ� �̾Ҵٸ� ������ k��° ���ڴ� �ٽ� ���� �� �����ϴ�.)
* 
* ���� ��� A = [1, 4, 2] , B = [5, 4, 4] ���
* 
* A���� ù��° ������ 1, B���� ù��° ������ 5�� �̾� ���Ͽ� ���մϴ�. (������ �� : 0 + 5(1x5) = 5)
* A���� �ι�° ������ 4, B���� ����° ������ 4�� �̾� ���Ͽ� ���մϴ�. (������ �� : 5 + 16(4x4) = 21)
* A���� ����° ������ 2, B���� �ι�° ������ 4�� �̾� ���Ͽ� ���մϴ�. (������ �� : 21 + 8(2x4) = 29)
* ��, �� ��찡 �ּҰ� �ǹǷ� 29�� return �մϴ�.
* 
* �迭 A, B�� �־��� �� ���������� ������ �ּڰ��� return �ϴ� solution �Լ��� �ϼ��� �ּ���.
* 
* ���ѻ���
* �迭 A, B�� ũ�� : 1,000 ������ �ڿ���
* �迭 A, B�� ������ ũ�� : 1,000 ������ �ڿ���
* ����� ��
* A	B	answer
* [1, 4, 2]	[5, 4, 4]	29
* [1,2]	[3,4]	10
* ����� �� ����
* ����� �� #1
* ������ ���ÿ� �����ϴ�.
* 
* ����� �� #2
* A���� ù��° ������ 1, B���� �ι�° ������ 4�� �̾� ���Ͽ� ���մϴ�. (������ �� : 4) ����, A���� �ι�° ������ 2, B���� ù��° ������ 3�� �̾� ���Ͽ� ���մϴ�. (������ �� : 4 + 6 = 10)
* �� ��찡 �ּ��̹Ƿ� 10�� return �մϴ�.
*/


// priority_queue�� �̿��� �ּڰ��� �ִ��� �̿��ؼ� Ǯ�� ����Ǯ��
// int solution(vector<int> A, vector<int> B)
// {
// 	int answer = 0;
// 	priority_queue<int,vector<int>, greater<int>> resumA;
// 	priority_queue<int> resumB;
// 
// 	for (int i = 0; i < A.size(); i++)
// 	{
// 		resumA.push(A[i]);
// 		resumB.push(B[i]);
// 	}
// 
// 	for (int i = 0; i < A.size(); i++)
// 	{
// 		answer += resumA.top() * resumB.top();
// 		resumA.pop();
// 		resumB.pop();
// 
// 	}
// 
// 	return answer;
// }

// vector�� ������ �̿��� ����Ǯ��
// int solution(vector<int>A, vector<int> B)
// {
// 	int answer = 0;
// 	sort(A.begin(), A.end());
// 	sort(B.rbegin(), B.rend());
//    // reverse(B.begin(), B.end());
//    // �������Լ��� ����ҷ��� �˰��� ����� rbegin���� �س������� begin���� �ٲ�����մϴ�.
// 	for (int i = 0; i < A.size(); i++)
// 	{
// 		answer += A[i] * B[i];
// 	}
//     
// 	return answer;
// }

// int main()
// {
// 	vector<int> A1 = { 1,4,2 };
// 	vector<int> B1 = { 5,4,4 };
// 
// 
// 	int result = solution(A1,B1);
// 
// 	cout << result << endl;
// }

#pragma endregion

<<<<<<< Updated upstream
#pragma region �����
int main()
{
	int n,i;

	char star[101] = "*";

	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		printf("%c", star[i]);
		printf("\n");
	}
=======

#pragma region ���� ���� ���ϱ�(Lv1 ����� 87%)

int solution(vector<int> numbers) 
{
    vector<int> array;

   // int answer = -1;

    for (int i = 0; i < numbers.max_size(); i++)
    {
        array.push_back(numbers[i] - numbers[i + 1]);

    }
   
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << array[i] << endl;
    }


   // return answer; 
}

int main()
{
    vector<int> numbers = { 1,2,3,4,5,6,7,8,9,0 };

    vector<int> answer;
    
    

    for (int i = 0; i < numbers.size(); i++)
    {

    }
    
>>>>>>> Stashed changes
}

#pragma endregion
