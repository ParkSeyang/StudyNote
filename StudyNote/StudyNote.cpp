#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region MyRegion
/*
* absolutes의 길이는 1 이상 1,000 이하입니다.
absolutes의 모든 수는 각각 1 이상 1,000 이하입니다.
signs의 길이는 absolutes의 길이와 같습니다.
signs[i] 가 참이면 absolutes[i] 의 실제 정수가 양수임을, 그렇지 않으면 음수임을 의미합니다.
* for (int n : nums) {
    isNegative.push_back(n < 0);  // 음수면 true, 아니면 false
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
