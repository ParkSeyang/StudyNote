#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region MyRegion
/*
* absolutes의 길이는 1 이상 1,000 이하입니다.
* absolutes의 모든 수는 각각 1 이상 1,000 이하입니다.
* signs의 길이는 absolutes의 길이와 같습니다.
* signs[i] 가 참이면 absolutes[i] 의 실제 정수가 양수임을, 그렇지 않으면 음수임을 의미합니다.
* for (int n : nums) 
* {
*   isNegative.push_back(n < 0);  // 음수면 true, 아니면 false
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
//        std::cout << "정답 : " << solution(data,set) << std::endl;
//    }
//    
//}
#pragma endregion

#pragma region 두 정수 사이의 합
/* 문제 설명 
* 두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 리턴하는 함수, solution을 완성하세요.
* 예를 들어 a = 3, b = 5인 경우, 3 + 4 + 5 = 12이므로 12를 리턴합니다.
*
* 제한 조건
* a와 b가 같은 경우는 둘 중 아무 수나 리턴하세요.
* a와 b는 -10,000,000 이상 10,000,000 이하인 정수입니다.
* a와 b의 대소관계는 정해져있지 않습니다.
*/

/*
* long long n = (b - a) - 1;   // 두정수 사이의 개수 (a와 b를 포함하지않은)
* long long t = (b - a) + 1;   // 두 정수 사이의 개수 (a와 b를 포함한)
* // (1) × (3 + 5) / 2 = 4
* // (개수) × ((a + 1) + (b - 1)) / 2
* long long sideset = ((b - a) - 1) * ((a + 1) + (b - 1)) / 2;   // 두정수 사이의 수 (4)
* // 합 = (개수)×(a + b) / 2
* long long sum =  t * (a + b) / 2;
* 
* 
*/


// 두정수 사이의 공식을 사용한다.
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

#pragma region 짝수와 홀수

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
// else if (num % 2 == 1) 를 못하는 이유 
// 결과 값이 음수(-1) 이 출력 될수도 있기때문입니다.
#pragma endregion

#pragma region 나머지가 (1)이 되는 수 찾기

/* 문제 설명
* 자연수 n이 매개변수로 주어집니다. n을 x로 나눈 나머지가 1이 되도록 하는 가장 작은 자연수 x를 return 하도록 solution 함수를 완성해주세요. 
* 답이 항상 존재함은 증명될 수 있습니다.
* 
* 제한사항
* 3 ≤ n ≤ 1,000,000
* 
* 입출력 예 설명
* 입출력 예 #1
* 10을 3으로 나눈 나머지가 1이고, 3보다 작은 자연수 중에서 문제의 조건을 만족하는 수가 없으므로, 3을 return 해야 합니다.
* 입출력 예 #2
* 12를 11로 나눈 나머지가 1이고, 11보다 작은 자연수 중에서 문제의 조건을 만족하는 수가 없으므로, 11을 return 해야 합니다.
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

#pragma region 기사단원의 무기 (정답률 67%)
/*문제 설명
* 숫자나라 기사단의 각 기사에게는 1번부터 number까지 번호가 지정되어 있습니다. 
* 기사들은 무기점에서 무기를 구매하려고 합니다.
* 각 기사는 자신의 기사 번호의 약수 개수에 해당하는 공격력을 가진 무기를 구매하려 합니다. 
* 단, 이웃나라와의 협약에 의해 공격력의 제한수치를 정하고, 제한수치보다 큰 공격력을 가진 무기를 구매해야 하는 기사는 
* 협약기관에서 정한 공격력을 가지는 무기를 구매해야 합니다.
* 예를 들어, 15번으로 지정된 기사단원은 15의 약수가 1, 3, 5, 15로 4개 이므로, 공격력이 4인 무기를 구매합니다. 
* 만약, 이웃나라와의 협약으로 정해진 공격력의 제한수치가 3이고 제한수치를 초과한 기사가 사용할 무기의 공격력이 2라면, 
* 15번으로 지정된 기사단원은 무기점에서 공격력이 2인 무기를 구매합니다. 무기를 만들 때, 무기의 공격력 1당 1kg의 철이 필요합니다. 
* 그래서 무기점에서 무기를 모두 만들기 위해 필요한 철의 무게를 미리 계산하려 합니다.
* 기사단원의 수를 나타내는 정수 number와 이웃나라와 협약으로 정해진 공격력의 제한수치를 나타내는 정수 limit와 
* 제한수치를 초과한 기사가 사용할 무기의 공격력을 나타내는 정수 power가 주어졌을 때, 
* 무기점의 주인이 무기를 모두 만들기 위해 필요한 철의 무게를 return 하는 solution 함수를 완성하시오.
* 
* 제한사항
* 1 ≤ number ≤ 100,000
* 2 ≤ limit ≤ 100
* 1 ≤ power ≤ limit
*
* 입출력 예
* number	limit	power	result
*   5         3       2	      10
*   10	      3	      2	      21
* 
* 입출력 예 설명
* 
* 입출력 예 #1
* 1부터 5까지의 약수의 개수는 순서대로 [1, 2, 2, 3, 2]개입니다. 
* 모두 공격력 제한 수치인 3을 넘지 않기 때문에 필요한 철의 무게는 해당 수들의 합인 10이 됩니다. 
* 따라서 10을 return 합니다.
*
* 입출력 예 #2
* 1부터 10까지의 약수의 개수는 순서대로 [1, 2, 2, 3, 2, 4, 2, 4, 3, 4]개입니다. 
* 공격력의 제한수치가 3이기 때문에, 6, 8, 10번 기사는 공격력이 2인 무기를 구매합니다. 
* 따라서 해당 수들의 합인 21을 return 합니다.
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

