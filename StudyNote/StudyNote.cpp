#include <iostream>
#include <string>
#include <vector>

using namespace std;
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
int solution(vector<int> absolutes, vector<bool> signs) {
    
    int result = 0;
   
    for (int n : absolutes)
    {
        signs.push_back(n < 1);
    }
    for (int i = 0; i < absolutes.size(); i++)
    {
        if (signs[i] == true)
        {
            result += absolutes[i];
        }
        else
        {
            result += absolutes[i] * -1;
        }
    }
    return result;
}

int main()
{
    std::vector<int> data = { 4, 7, 12 };
    std::vector<bool> set(3,false);

    solution(data,set);
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << "정답 : " << solution(data,set) << std::endl;
    }
    
}