#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    return answer;
}


int main()
{
    vector<vector<int>> array1;
    vector<vector<int>> array2;





}

