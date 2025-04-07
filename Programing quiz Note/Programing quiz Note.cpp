#include <iostream>
#define LEN_INPUT 1000001
using namespace std;

#pragma region MyRegion



int main(void) 
{
    char s1[LEN_INPUT];
    scanf_s("%s", s1);

    cout << s1 << endl;

    return 0;
}
#pragma endregion

#pragma region 각도 합치기
//int main()
//{
//    int angle1;
//    int angle2;
//    cin >> angle1 >> angle2;
//    int sum_angle = (angle1 + angle2)%360;
//    
//    cout << sum_angle/* % 360*/ << endl;
//    return 0;
//}
#pragma endregion 

#pragma region 수 나누기
// int main(void) 
// {
//     int number;
//     cin >> number;
// 
//     int answer = 0;
// 
//     for (int i = 0; i < 20; i++) 
//     {
//         answer += number % 100;
//         number /= 100;
//     }
//     cout << answer << endl;
//     return 0;
// }
#pragma endregion


