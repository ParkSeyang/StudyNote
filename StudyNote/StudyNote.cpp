#include <iostream>
#include <string>
#include <vector>

using namespace std;
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
        std::cout << "���� : " << solution(data,set) << std::endl;
    }
    
}