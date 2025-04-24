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
// int main(void) {
//     int a;
//     int b;
//     cin >> a >> b;
//     cout << a + b << endl;
//     return 0;
// }
#pragma endregion

#pragma region 주사위 게임 2
/*
* 문제 설명
* 1부터 6까지 숫자가 적힌 주사위가 세 개 있습니다. 세 주사위를 굴렸을 때 나온 숫자를 각각 a, b, c라고 했을 때 얻는 점수는 다음과 같습니다.
*
* 세 숫자가 모두 다르다면 a + b + c 점을 얻습니다.
* 세 숫자 중 어느 두 숫자는 같고 나머지 다른 숫자는 다르다면 (a + b + c) × (a2 + b2 + c2 )점을 얻습니다.
* 세 숫자가 모두 같다면 (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )점을 얻습니다.
* 세 정수 a, b, c가 매개변수로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.
*
* 제한사항
* a, b, c는 1이상 6이하의 정수입니다.
*/
#include <vector>

using namespace std;

int solution(int a, int b, int c) 
{

    int answer = 0;

	if (a != b != c)
	{
		answer = a + b + c;
	
	}
	if (a != b == c || a == b != c)
	{
		answer = (a + b + c) * ((a*a) + (b*b) + (c*c));
		
	}
	if (a == b == c)
	{
		answer = (a + b + c) * ((a * a) + (b * b) + (c * c)) *((a*a*a)+(b*b*b)+(c*c*c));
		
	}
		return answer;
}
int main()
{
	int result = 0;

	result = solution(5, 4, 1);

	std::cout << "주사위 값 : " << result <<std::endl;
}
#pragma endregion
