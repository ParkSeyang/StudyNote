#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#pragma region 나머지 구하기 (정답률91%)
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

#pragma region n의 배수 (정답률 90%)
/* 문제 설명
* 정수 num과 n이 매개 변수로 주어질 때, num이 n의 배수이면 1을 return n의 배수가 아니라면 0을 return하도록 solution 함수를 완성해주세요.
*
* 제한사항
* 2 ≤ num ≤ 100
* 2 ≤ n ≤ 9
* 
* 입출력 예
* num	n	result
* 98	2	1
* 34	3	0
* 
* 입출력 예 설명
* 입출력 예 #1
* 98은 2의 배수이므로 1을 return합니다.
* 입출력 예 #2
* 32는 3의 배수가 아니므로 0을 return합니다.
* 
* 
*/
// int solution(int num, int n)  // 내가 쓴 풀이
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
//int solution(int num, int n) // 다른사람이푼 풀이 위의 내가작성한 코드와 같은 코드이다. 좀더 간결하게 작성되어있다.
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

#pragma region 주사위 게임 2 (정답률 89%)
/* 문제 설명
* 1부터 6까지 숫자가 적힌 주사위가 세 개 있습니다. 세 주사위를 굴렸을 때 나온 숫자를 각각 a, b, c라고 했을 때 얻는 점수는 다음과 같습니다.
* 
* 세 숫자가 모두 다르다면 a + b + c 점을 얻습니다.
* 세 숫자 중 어느 두 숫자는 같고 나머지 다른 숫자는 다르다면 (a + b + c) × (a2 + b2 + c2 )점을 얻습니다.
* 세 숫자가 모두 같다면 (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )점을 얻습니다.
* 세 정수 a, b, c가 매개변수로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.
* 
* 제한사항
* a, b, c는 1이상 6이하의 정수입니다.
* 입출력 예
* a	b	c	result
* 2	6	1	9
* 5	3	3	473
* 4	4	4	110592
* 입출력 예 설명
* 입출력 예 #1
* 
* 예제 1번에서 세 주사위 숫자가 모두 다르므로 2 + 6 + 1 = 9점을 얻습니다. 따라서 9를 return 합니다.
* 입출력 예 #2
* 
* 예제 2번에서 두 주사위 숫자만 같으므로 (5 + 3 + 3) × (52 + 32 + 32 ) = 11 × 43 = 473점을 얻습니다. 따라서 473을 return 합니다.
* 입출력 예 #3
* 
* 예제 3번에서 세 주사위 숫자가 모두 같으므로 (4 + 4 + 4) × (42 + 42 + 42 ) × (43 + 43 + 43 ) = 12 × 48 × 192 = 110,592점을 얻습니다. 따라서 110592를 return 합니다.
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

#pragma region 음양 더하기 (정답률 87%)

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

// int solution(int number, int limit, int power) 
// {
//     int answer = 0;
//     int count = 0;
//     
//    vector<int> numberCount;
//     for (int n = 1; n <= number; n++)   // n은 1부터 number까지 반복하며 각 기사의 번호를 나타냄
//     {
//         count = 0;           // vector에 넣을 각수의 약수 갯수 를 반복할때 값이 누적되지않도록 초기화
// 
//         for (int i = 1; i * i <= n; i++)     // 각수 n의 약수 개수를 구하는 반복문
//         {
//             if (n % i == 0)     // n(각수의 번호) %  i(약수) 가 0일때  
//             {
//                 if (i == n / i)  // i == n / i일 경우는 n이 i*i인 제곱수이므로, 약수를 1개만 추가
//                 {
//                     count += 1;  
//                 }
//                 else // 제곱수가 아닌 경우, i와 n/i는 서로 다른 두 약수이므로 둘 다 포함
//                 {
//                     count += 2;  
//                 }
//             }
//         }
//         numberCount.push_back(count);
// 
//         cout << "리미트 조건을 바꾸기전 값 : " << numberCount[n - 1] << endl;
// 
//         if (numberCount[n - 1] > limit)   // 약수 개수가 limit보다 크면 power로 대체
//         {
//             numberCount[n - 1] = power;  
//         }
//     }
//     cout << "리미트에 제한을 건후 의 값 : " << endl;
//     for (int i = 0; i < numberCount.size(); i++)
//     {
//         cout << numberCount[i] << " ";
//     }
// 
//     for (int i = 0; i < numberCount.size(); i++)    // 수정된 약수 개수들을 모두 더해 최종 공격력 계산
//     {
//         answer += numberCount[i];  // 모든 약수의 개수를 answer 변수에 합해서 대입한다.
//     }
//     return answer;  // 그 값을 리턴시킨다.
// }
// 
// int main()
// {
//     int answer = solution(10, 3, 2);
// 
//     cout << answer << endl;
// }

#pragma endregion

#pragma region 명예의 전당(1) (정답률 72%)
/* 문제 설명
* "명예의 전당"이라는 TV 프로그램에서는 매일 1명의 가수가 노래를 부르고, 시청자들의 문자 투표수로 가수에게 점수를 부여합니다. 
* 매일 출연한 가수의 점수가 지금까지 출연 가수들의 점수 중 상위 k번째 이내이면 해당 가수의 점수를 명예의 전당이라는 목록에 올려 기념합니다. 
* 즉 프로그램 시작 이후 초기에 k일까지는 모든 출연 가수의 점수가 명예의 전당에 오르게 됩니다. 
* k일 다음부터는 출연 가수의 점수가 기존의 명예의 전당 목록의 k번째 순위의 가수 점수보다 더 높으면, 
* 출연 가수의 점수가 명예의 전당에 오르게 되고 기존의 k번째 순위의 점수는 명예의 전당에서 내려오게 됩니다.
* 
* 이 프로그램에서는 매일 "명예의 전당"의 최하위 점수를 발표합니다. 예를 들어, k = 3이고, 7일 동안 진행된 가수의 점수가 [10, 100, 20, 150, 1, 100, 200]이라면, 
* 명예의 전당에서 발표된 점수는 아래의 그림과 같이 [10, 10, 10, 20, 20, 100, 100]입니다.
* 
* 그림1.png
* 
* 명예의 전당 목록의 점수의 개수 k, 1일부터 마지막 날까지 출연한 가수들의 점수인 score가 주어졌을 때, 매일 발표된 명예의 전당의 최하위 점수를 return하는 solution 함수를 완성해주세요.
* 
* 제한사항
* 3 ≤ k ≤ 100
* 7 ≤ score의 길이 ≤ 1,000
* 0 ≤ score[i] ≤ 2,000
* 
* 입출력 예
* k	             score	                                        result
* 3	[10, 100, 20, 150, 1, 100, 200]               	[10, 10, 10, 20, 20, 100, 100]
* 4	[0, 300, 40, 300, 20, 70, 150, 50, 500, 1000]	[0, 0, 0, 0, 20, 40, 70, 70, 150, 300]
* 입출력 예 설명
* 입출력 예 #1
* 
* 문제의 예시와 같습니다.
* 입출력 예 #2
* 
* 아래와 같이, [0, 0, 0, 0, 20, 40, 70, 70, 150, 300]을 return합니다. 
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

// 정답
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
//     cout << "정답테스트 : " << endl;
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     
//    
// }


#pragma endregion

#pragma region k번째 수 (Lv1 정답률 72%)(정렬)
/* 문제 설명
* 배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.
* 
* 예를 들어 array가 [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3이라면
* 
* array의 2번째부터 5번째까지 자르면 [5, 2, 6, 3]입니다.
* 1에서 나온 배열을 정렬하면 [2, 3, 5, 6]입니다.
* 2에서 나온 배열의 3번째 숫자는 5입니다.
* 배열 array, [i, j, k]를 원소로 가진 2차원 배열 commands가 매개변수로 주어질 때, commands의 모든 원소에 대해 앞서 설명한 연산을 적용했을 때 
* 나온 결과를 배열에 담아 return 하도록 solution 함수를 작성해주세요.
* 
* 제한사항
* array의 길이는 1 이상 100 이하입니다.
* array의 각 원소는 1 이상 100 이하입니다.
* commands의 길이는 1 이상 50 이하입니다.
* commands의 각 원소는 길이가 3입니다.
* 
* 입출력 예
* array	                            commands	             return
* [1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]
* 
* 입출력 예 설명
* [1, 5, 2, 6, 3, 7, 4]를 2번째부터 5번째까지 자른 후 정렬합니다. [2, 3, 5, 6]의 세 번째 숫자는 5입니다.
* [1, 5, 2, 6, 3, 7, 4]를 4번째부터 4번째까지 자른 후 정렬합니다. [6]의 첫 번째 숫자는 6입니다.
* [1, 5, 2, 6, 3, 7, 4]를 1번째부터 7번째까지 자릅니다. [1, 2, 3, 4, 5, 6, 7]의 세 번째 숫자는 3입니다.
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
// 	// 방법 2 
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
// 	cout << "정답 테스트 : ";
// 	for (int val : result)
// 	{
// 		cout << val << endl;
// 	}
// 
// }


#pragma endregion

#pragma region 최솟값 만들기(Lv2 정답률 79%)(연습문제)
/* 문제 설명
* 길이가 같은 배열 A, B 두개가 있습니다. 각 배열은 자연수로 이루어져 있습니다.
* 배열 A, B에서 각각 한 개의 숫자를 뽑아 두 수를 곱합니다. 이러한 과정을 배열의 길이만큼 반복하며, 두 수를 곱한 값을 누적하여 더합니다. 이때 최종적으로 누적된 값이 최소가 되도록 만드는 것이 목표입니다. (단, 각 배열에서 k번째 숫자를 뽑았다면 다음에 k번째 숫자는 다시 뽑을 수 없습니다.)
* 
* 예를 들어 A = [1, 4, 2] , B = [5, 4, 4] 라면
* 
* A에서 첫번째 숫자인 1, B에서 첫번째 숫자인 5를 뽑아 곱하여 더합니다. (누적된 값 : 0 + 5(1x5) = 5)
* A에서 두번째 숫자인 4, B에서 세번째 숫자인 4를 뽑아 곱하여 더합니다. (누적된 값 : 5 + 16(4x4) = 21)
* A에서 세번째 숫자인 2, B에서 두번째 숫자인 4를 뽑아 곱하여 더합니다. (누적된 값 : 21 + 8(2x4) = 29)
* 즉, 이 경우가 최소가 되므로 29를 return 합니다.
* 
* 배열 A, B가 주어질 때 최종적으로 누적된 최솟값을 return 하는 solution 함수를 완성해 주세요.
* 
* 제한사항
* 배열 A, B의 크기 : 1,000 이하의 자연수
* 배열 A, B의 원소의 크기 : 1,000 이하의 자연수
* 입출력 예
* A	B	answer
* [1, 4, 2]	[5, 4, 4]	29
* [1,2]	[3,4]	10
* 입출력 예 설명
* 입출력 예 #1
* 문제의 예시와 같습니다.
* 
* 입출력 예 #2
* A에서 첫번째 숫자인 1, B에서 두번째 숫자인 4를 뽑아 곱하여 더합니다. (누적된 값 : 4) 다음, A에서 두번째 숫자인 2, B에서 첫번째 숫자인 3을 뽑아 곱하여 더합니다. (누적된 값 : 4 + 6 = 10)
* 이 경우가 최소이므로 10을 return 합니다.
*/


// priority_queue를 이용한 최솟값과 최댓값을 이용해서 풀은 문제풀이
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

// vector와 정렬을 이용한 문제풀이
// int solution(vector<int>A, vector<int> B)
// {
// 	int answer = 0;
// 	sort(A.begin(), A.end());
// 	sort(B.rbegin(), B.rend());
//    // reverse(B.begin(), B.end());
//    // 리버스함수를 사용할려면 알고리즘 헤더와 rbegin으로 해놓은것을 begin으로 바꿔줘야합니다.
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
#pragma region 별찍기
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

#pragma region 없는 숫자 더하기(Lv1 정답률 87%)

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
