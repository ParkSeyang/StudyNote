#include <iostream>
#include <string>

using namespace std;

#pragma region 문자열 출력하기


// int main(void) {
//     string str;
//     cin >> str;
//     cout << str << endl;
//     return 0;
// }
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

#pragma region a와 b 출력하기

// int main(void) 
// {
//     int a;
//     int b;
//     cin >> a >> b;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     return 0;
// }

#pragma endregion

#pragma region 문자열 반복해서 출력하기

// int main(void) 
// {
//     string str;
//     int n;
//   
//     cin >> str >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << str;
//     }
//     return 0;
// }
#pragma endregion

#pragma region 대소문자 바꿔서 출력하기
// int main(void) 
// {
//     string str;
//     cin >> str;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] += 32;
//         }
//         else 
//         {
//             str[i] -= 32;
//         }
//     }
//     
//     cout << str;
//     
//     return 0;
// }

#pragma endregion

#pragma region 특수문자 출력하기
// int main(void) 
// {
//     cout << R"(!@#$%^&*(\'"<>?:;)";
//     return 0;
// }
// 방법 2
// int main() 
// {
//    cout << "!@#$%^&*(\\'\"<>?:;" << endl;
//    return 0;
//  }
#pragma endregion

#pragma region 덧셈식 출력하기
int main(void) {
    int a;
    int b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}
#pragma endregion
