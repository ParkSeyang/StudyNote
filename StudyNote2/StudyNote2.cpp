#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 행렬의 덧셈
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1.size(); j++)
        {
            answer[j][i] = arr1[j][j + 1] + arr2[j][j + 1];
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> array1(3,vector<int>(3));

    vector<vector<int>> array2(3);

    vector<int> test1(5, 5);


    cout << test1[0][1] << endl;

   // cout << solution(array1, array2) << endl;

}
