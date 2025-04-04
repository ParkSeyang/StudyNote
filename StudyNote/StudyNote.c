#include <stdio.h>


#pragma region 배열
// int main(void)
// {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//  int arr[] = { 1,2,3,4 };
//  int arr2[] = { 1,2,3,4,5,6 };
// 
// printf("array의 11번째 배열 : %d \n", arr[2]);
// 
// return 0;
// }
#pragma endregion

#pragma region 배열 가지고놀기

// int main(void)
// {
// 	int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
// 	int i;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
// 	}
// 	return 0;
// }

#pragma endregion

#pragma region 배열로 평균구하기(scanf_s로 사용할것.)

// int main()
// {
// 	int arr[5];
// 	int i, ave = 0;
// 
// 	for(i = 0; i < 5; i++)
// 	{
// 		printf("%d 번째 학생의 성적은? ", i + 1);
// 		scanf_s("%d", &arr[i]);
// 	}
// 	for (i = 0;i < 5; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 
// 	printf("전체 학생의 평균은 : %d \n", ave / 5);
// 	return 0;
// }

#pragma endregion

#pragma region 배열로 반평균을 구한후 합격자와 불합격자 분리

// int main(void)
// {
// 	int arr[10];
// 	int i, ave = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d 번째 학생의 성적은? ", i + 1);
// 		scanf_s("%d", &arr[i]);
// 	}
// 	for (i = 0; i < 10; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 	ave = ave / 10;
// 	printf("전체 학생의 평균은 : %d \n", ave);
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("학생 %d : ", i + 1);
// 		if (arr[i] >= ave)
// 			printf("합격 \n");
// 		else
// 			printf("불합격 \n");
// 	}
// 
// 	return 0;
// }


#pragma endregion


#pragma region 소수를 구하는 프로그램만들기

// int main(void)
// {
// 	int guess = 5;
// 
// 	int prime[1000];
// 
// 	int index = 1;
// 
// 	int i;
// 	int ok;
// 
// 	prime[0] = 2;
// 	prime[1] = 3;
// 
// 	for (;;)
// 	{
// 		ok = 0;
// 		for (i = 0; i <= index; i++)
// 		{
// 			if (guess % prime[i] != 0)
// 			{
// 				ok++;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 
// 		}
// 		if (ok == (index + 1))
// 		{
// 			index++;
// 			prime[index] = guess;
// 			printf("소수 : %d \n", prime[index]);
// 			if (index == 999) 
// 				break;
// 		}
// 		guess += 2;
// 	}
// 	return 0;
// }



#pragma endregion


#pragma region  배열의 개념이해 문제(오류가 나는이유)

// 1번째 이유
// 왜냐하면 변수는 무조건 최상단에 선언되야 되기 때문입니다! 위와 같이 배열 arr 과 변수 i, ave 가 변수 선언문이 아닌 
// 다른 문장 다음에 나타났으므로 C 컴파일러는 무조건 오류로 처리하게 됩니다. (물론 C++ 에서는 가능합니다)
//애초에 사람이 입력하는 대로 배열의 크기를 임의로 정할 수 는 없는 것이였군요.
// 그렇다면, 그냥 변수 크기 지정시 특정한 값이 들어있는 변수가 가능한지 살펴 봅시다.
// 
// int main(void)
// {
// 	int total;
// 	printf("전체 학생수 : ");
// 	scanf_s("%d", &total);
// 	int arr[total];
// 	int i, ave = 0;
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("%d 번째 학생의 성적은?", i + 1);
// 		scanf_s("%d",&arr[i]);
// 	}
// 	for (i = 0; i < total; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 
// 	ave = ave / total;
// 
// 	printf("전체 학생의 평균은 : %d \n", ave);
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("학생 %d : ", i + 1);
// 		if (arr[i] >= ave)
// 		{
// 			printf("합격 \n");
// 		}
// 		else
// 		{
// 			printf("불합격 \n");
// 		}
// 	}
// 	return 0;
// }

// 2 번째 이유
//C 언어에 처음에 배열의 크기를 변수를 통해 정의할 수 없게 규정하고 있기 때문입니다. 
// (사실, '동적 할당' 이라는 방법으로 억지로 해서 정의할 수 있으나 이 부분에 대한 이야기는 나중에 다루도록 합시다.) 
// 왜냐하면 처음에 컴파일러가 배열을 처리할 대 메모리 상에 공간을 잡아야 하는데 이 때, 잡아야 되는 공간의 크기가 반드시 상수로 주어져야 하기 때문입니다. 
// 지금 수준에서 깊게 설명하는 것은 너무 무리인 것 같으니 그냥 '배열의 크기는 변수로 지정할 수 없다' 정도로 넘어가도록 합시다.

// int main(void)
// {
//    int total = 3;
// 	int arr[total];
// 	int i, ave = 0;
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("%d 번째 학생의 성적은?", i + 1);
// 		scanf_s("%d",&arr[i]);
// 	}
// 	for (i = 0; i < total; i++)
// 	{
// 		ave = ave + arr[i];
// 	}
// 
// 	ave = ave / total;
// 
// 	printf("전체 학생의 평균은 : %d \n", ave);
// 
// 	for (i = 0; i < total; i++)
// 	{
// 		printf("학생 %d : ", i + 1);
// 		if (arr[i] >= ave)
// 		{
// 			printf("합격 \n");
// 		}
// 		else
// 		{
// 			printf("불합격 \n");
// 		}
// 	}
// 	return 0;
// }
#pragma endregion


#pragma region 상수

//int main(void)
//{
//	const int a = 3;
//
//	printf("%d",a);
//	return 0;
//}

// 안되는 예시 1번
// 처음 상수를 정의시 값을 정의해 주지 않는다면
// 컴파일 에러 가 발생합니다.
// int main() 
// {
// 	const int a;
// 
// 	printf("%d", a);
// 	return 0;
// }

// 안되는 예시 2번
// 상수는 또한 그 특성 답게 그 값 자체를 바꿀 수 없습니다.
// 아래와 같이 코드를 작동한다면 1번과 같은 에러가 발생합니다.
// int main() {
// 	const int a = 2;
// 
// 	a = a + 3;
// 	printf("%d", a);
// 	return 0;
// }
#pragma endregion

#pragma region 초기화 되지않는 값

// 이 코드가 작동을 안하는이유
// 운영체제는 초기화 되지 않은 변수에 대한 접근 자체를 불허하고 있습니다.
// 이 때문에 우리는 이 변수에 들어있는 값을영영 보지 못하게 됩니다.
// int main(void)
// {
// 	int arr;
// 
// 	printf("초기화되지않는 값 : %d", arr);
// 
// 	return 0;
// }

// 이코드의 값이 이상한이유
// arr[1]에는 이전에 메모리에서 사용했던 쓰레기값이 
// 들어있기때문에 그대로출력된모습이다.
// int main(void)
// {
// 	int arr[3];
// 	arr[0] = 1;
// 	printf("arr[1] 의 값은? : %d", arr[1]);
// 
// 	return 0;
// }

// 정상적으로 출력되는 코드 의 이유
// 그 이유는
//int arr[3] = { 1 }; 와 같이 정의한다면 컴파일러가 내부적으로 아래와 같이 생각하기 때문입니다.
//int arr[3] = { 1, 0, 0 };
//따라서, 자동적으로 우리가 특별히 초기화 하지 않은 원소들에는 0 이 들어가게 됩니다.
// 
// int main(void)
// {
// 	int arr[3] = { 1 };
// 	printf("arr[1] 의 값 은? : %d",arr[1]);
// 
// 	return 0;
// }

#pragma endregion


#pragma region 생각해볼문제!(배열)

// 문제 (1)
// 위에 입력 받은 학생들의 성적 을 높은 순으로 정렬하는 프로그램을 만들어 보세요.

//문제 (2)
//입력 받은 학생들의 성적을 막대 그래프로 나타내는 프로그램을 만들어 보세요.
#pragma endregion


#pragma region 고차원 배열
// 2차원 배열 예제
// int main(void)
// {
// 	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
// 
// 	printf("arr 배열의 2행 3열의 수를 출력 : %d \n", arr[1][2]);
// 	printf("arr 배열의 1행 2열의 수를 출력 : %d \n", arr[0][1]);
// 	return 0;
// }

// 학생 점 수 입력받기 
// int main(void)
// {
// 	int score[3][2];
// 	int i, j;
// 
// 	for (i = 0; i < 3; i++)
// 	{
// 		for (j = 0; j < 2; j++)
// 		{
// 			if (j == 0)
// 			{
// 				printf("%d 번째 학생의 국어 점수 : ", i + 1);
// 				scanf_s("%d", &score[i][j]);
// 			}
// 			else if (j == 1)
// 			{
// 				printf("%d 번째 학생의 수학 점수 : ", i + 1);
// 				scanf_s("%d",&score[i][j]);
// 			}
// 
// 		}
// 	}
// 
// 
// 	for (i = 0; i < 3; i++)
// 	{
// 		printf("%d 번째 학생의 국어 점수 : %d, 수학점수 : %d \n", i + 1, score[i][0], score[i][1]);
// 	}
// 
// 	return 0;
// }

#pragma endregion


#pragma region 포인터 (1)
/* & 연산자 */
// int main(void)
// {
// 	int a;
// 	a = 2;
// 
// 	printf("%p \n", &a);
// 	return 0;
// }
// 
// 주소연산자를 활용하여 변수의 메모리주소 확인하기.
// int main()
// {
//     int a;
//     double b;
//     char c;
// 
//     printf("int 형 변수의 주소 : %p\n", &a);
//     printf("double 형 변수의 주소 : %p\n", &b);
//     printf("char 형 변수의 주소 : %p\n", &c);
// 
//     return 0;
// }

// 포인터의 선언과 사용
// int main()
// {
//     int a;
//     int* pa;
// 
//     pa = &a;
//     *pa = 10;
// 
//     printf("포인터로 a값 출력 : %d \n",*pa);
//     printf("변수명으로 a값 출력 : %d\n", a);
// 
//     return 0;
// }

// 포인터의 시작
// int main(void)
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 
// 	printf("포인터 p에 들어 있는 값 : %p \n", p);
// 	printf("int 변수 a가 저장된 주소 : %p \n", &a);
// 
// 	return 0;
// }

// * 연산자의 이용
// int main(void)
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 	a = 2;
// 
// 	printf("a 의 값 : %d \n",a);
// 	printf("*p 의 값 : %d \n",*p);
// 
// 	return 0;
// }


// * 연산자의 이용 2
// int main()
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 	*p = 3;
// 
// 	printf("a 의 값 : %d \n", a);
// 	printf("*p 의 값 : %d \n",*p);
// 
// 	return 0;
// }

// 포인터도 변수이다.
// int main(void)
// {
// 	int a;
// 	int b;
// 	int* p;
// 
// 	p = &a;
// 	*p = 2;
// 
// 	p = &b;
// 	*p = 4;
// 
// 	printf("a : %d \n",a);
// 	printf("b : %d \n",b);
// 	
// 	return 0;
// 	
// }
 
// 포인터를 사용한 두정수의 합과 평균 계산
// int main()
// {
//     int a = 10, b = 15, total; // 변수의 선언과 초기화
//     double avg;                // 평균을 저장할 변수
//     int* pa, * pb;             // 포인터 동시 선언
//     int* pt = &total;          // 포인터 선언과 초기화
//     double* pg = &avg;         // double형 포인터 선언과 초기화
// 
//     pa = &a;                  // 포인터 pa 에 변수 a 의 주소 대입
//     pb = &b;                  // 포인터 pb 에 변수 b 의 주소 대입
// 
//     *pt = *pa + *pb;          // a값과 b값을 더해 total에 저장
//     *pg = *pt / 2.0;          // total 값을 2로 나눈 값을 avg에 저장
// 
//     printf("두 정수의 값 : %d, %d\n",*pa,*pb); // a 값과 b 값 출력
//     // 결과 = 두 정수의 값 : 10, 15
//     printf("두 정수의 합 : %d\n", *pt); // total 값 출력
//     // 결과 = 두 정수의 합 : 25
//     printf("두 정수의 평균 : %.1lf\n",*pg);    // avg 값 출력
//     // 결과 = 두 정수의 평균 : 12.5
//     return 0;
// }
#pragma endregion


#pragma region 포인터 (2)
/* 상수 포인터? */
// int main()
// 
// 	int a;
// 	int b;
// 
// 	const int* pa = &a;
// 
// 	*pa = 3; // 올바르지 않은 문장
// 	pa = &b; // 올바른 문장
// 
// 	return 0;
// 
/* 상수 포인터?2 */
// int main()
// {
//     int a;
//     int b;
//     int* const pa = &a;
// 
//     *pa = 3; // 올바른 문장
//     *pa = &b; // 올바르지 않은 문장
//     
//     return 0;
// 
// }
// 
// 포인터에 const 사용하는법
// int main()
// {
//     int a = 10, b = 20;
//     const int* pa = &a; // 포인터 pa 는 변수 a를 가리킨다.
// 
//     printf("변수 a 값 : %d\n", *pa); // 포인터를 간접 참조해 a출력
//     pa = &b;                        // 포인터가 변수 b를 다시 가리키게 한다.
//     결과 : "변수 a 값 : 10"
//     printf("변수 b 값 : %d\n", *pa); // 포인터가 간접 참조 해 b 값 출력
//     결과 : "변수 b 값 : 20" 
//     pa = &a;                        // 포인터가 다시 변수 a를 가리킨다.
//     a = 20;                         // a를 직접 참조해 값을 바꾼다.
// 
//     printf("변수 a 값 : %d\n", *pa); // 포인터로 간접 참조해 바뀐 값 출력.
//     결과 : "변수 a 값 : 20"
//     return 0;
// 
// }
    
// 주소와 포인터의 크기
// int main()
// {
//     char ch;
//     int in;
//     double db;
// 
//     char* pc = &ch;
//     int* pi = &in;
//     double* pd = &db;
// 
//     printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//     결과 : 8
//     printf(" int형 변수의 주소 크기 : %d\n", sizeof(&in));
//     결과 : 8
//     printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//     결과 : 8
// 
//     printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//     결과 : 8
//     printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//     결과 : 8
//     printf("double * 포인터의 크기 : %d\n", sizeof(pd));
//     결과 : 8
// 
//     printf("char * 포인터의 크기 : %d\n", sizeof(*pc));
//     결과 : 1
//     printf("int * 포인터의 크기 : %d\n", sizeof(*pi));
//     결과 : 4
//     printf("double * 포인터의 크기 : %d\n", sizeof(*pd));
//     결과 : 8
// 
//     return 0;
// }
// 부가설명
// 13~15행이 각변수의 주소를 구해 크기를 출력하는 문장입니다. ch,in,db는 각각변수 자체의 크기는
// 다르지만, 그 시작 주소 값의 크기는 모두 같습니다. 따라서 17~19행의 포인터도 가리키는 자료형과
// 상관없이 모두 크기가 같습니다. 물론 21~23행과 같이 포인터에 간접 참조 연산자를 사용해 가리키는
// 변수의 크기를 모두 출력한다면 각각 다른 결과가 나옵니다.

/* 포인터의 대입규칙 1 */
// 허용되지 않는 포인터의 대입
// int main()
// {
//     int a = 10;    // 변수 선언 과 초기화
//     int* p = &a;   // 포인트 선언과 동시에 a를 가리키도록 초기화
//     double* pd;    // double형 변수를 가리키는 포인터
// 
//     pd = p;        // 포인터 p값을 포인터 pd에 대입;
//     printf("%lf\n", *pd);   // pd가 가리키는 변수의 값 출력
//     결과 : -92559592117432107884277659021957555520241347761778250032873472.000000
//     return 0;
// }
// 포인터의 대입 규칙 1
// 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
// 부가설명
// 컴파일러는 p에 저장된 값을 int형 변수의 주소로 생각하고, pd에 저장된값을 double형 변수의 주소로
// 생각합니다. 따라서 pd에 p를 대입한 후에 간접 참조 연산을 수행하면 변수a에 할당된 영역이후의 
// 할당되지 않은 영역까지 사용하게 됩니다.

// 포인터의 대입 규칙 2
// 형변환을 사용한 포인터의 대입은 언제나 가능합니다.
// 포인터가 가리키는 자료형이 다른경우 형 변환 연산자를 사용하면
// 경고 메세지 없이 대입할 수 있습니다. 물론 대입한 후에 포인터를
// 통한 사용에 문제가 없어야 합니다. 

// 예시) 포인터에 형변환을 사용하여 대입할때
// double a = 3.4;  <- double 형 변수 선언
// double *pd = &a; <- pd가 double형 변수 a를 가리키도록 초기화
// int *pi;         <- int형 변수를 가리키는 포인터
// pi = (int *)pd;  <- pd 값을 형 변환해 pi에 대입
 
// 부가설명
// 여기서 pi가 간접 참조 연산을 수행하면 변수 a에 일부를 int형 변수처럼 사용할수 있습니다.
// 이런사용 방법은 포인터로 메모리를 직접 쪼개 쓰는 것이므로 데이터가 메모리에 저장되는 방식을
// 충분히 이해하고 있어야 합니다. 만약 *pi = 10; 과 같이 a의 일부분에 정수를 저장하면 정수와실수의
// 데이터 크기와 저장 방식이 다르므로 a에 저장한 실수 값은 사용할 수 없습니다.

/* 포인터의 덧셈 */
// int main()
// {
// 	int a;
// 	int* pa;
// 	pa = &a;
// 
// 	printf("pa 의 값: %p \n",pa);
// 	printf("(pa + 1) 의 값 : %p \n", pa + 1);
// 	return 0;
// }

/* 포인터의 덧셈2 */
// int main()
// {
// 	int a;
// 	char b;
// 	double c;
// 	int* pa = &a;
// 	char* pb = &b;
// 	double* pc = &c;
// 
 	// int 형은 기본 4byte 메모리를 
 	// 할당함으로 4byte 만큼 주소값이 더해진다.
// 	printf("pa 의 값 : %p \n", pa);
// 	printf("(pa + 1) 의 값 : %p \n", pa + 1);
// 
 	// char 형 은 기본 1byte 메모리를 
 	// 할당함으로 1byte 만큼 주소값이 더해진다.
// 	printf("pb 의 값 : %p \n", pb);
// 	printf("(pb + 1) 의 값 : %p \n", pb + 1);
// 
 	// double 형은 기본 8byte의 메모리를
	// 할당함으로 8byte 만큼 주소값이 더해진다.
// 	printf("pc 의 값 : %p \n", pc);
// 	printf("(pc + 1) 의 값 : %p \n", pc + 1);
// 
// }

/* 포인터 뺄셈 */
// int main()
// {
//     int a;
//     int* pa = &a;
// 
    // int 형은 기본 4byte 메모리를 
    // 할당함으로 4byte 만큼 주소값이 뺄셈이 된다.
//     printf("pa 의 값 : %p \n",pa);
//     printf("(pa - 1) 의 값 : %p \n",pa - 1);
// }

/* 포인터끼리의 덧셈 */

// int main()
// {
//     int a;
//     int* pa = &a;
//     int b;
//     int* pb = &b;
//     int* pc = pa + pb;
// 
// 포인터 끼리의 덧셈은 아무런 의미가 없기 때문에 
// C 언어에선 수행할 수 없습니다.
// 
//     return 0;
// }

// 포인터를 사용한 두 변수의 값 교환
// void swap(int* pa, int* pb); // 두 변수의 값을 바꾸는 함수 의 선언
// 
// int main()
// {
//     int a = 10, b = 20; // 변수의 선언과 초기화
// 
//     swap(&a, &b);       // a, b의 주소를 인수로 주고 함수 호출
//     printf("a:%d b:%d\n", a, b);  // 변수 a,b 출력
// 
//     return 0;
// }
// void swap(int* pa, int* pb)  // 매개변수로 포인터 선언
// {
//     int temp;                // 교환을 위한 임시변수 선언
// 
//     temp = *pa;              // 임시변수(temp)에 pa가 가리키는 변수의 값 저장
//     *pa = *pb;               // pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
//     *pb = temp;              // pb가 가리키는 변수에 temp 값 저장
// }
// 결과  a : 20 b : 10

// 포인터 없이 두변수의 값을 바꾸는 함수는 불가능한가?
// 다른 함수의 변수 사용하기 (잘못된 예시)
// void swap(void);
// int main()
// {
//     int a = 10, b = 20;
// 
//     swap();
//     printf("a:%d b:%d\n", a, b);
// 
//     return 0;
// }
// void swap(void)
// {
//     int temp;
// 
//     temp = a;
//     a = b;
//     b = temp;
// }
// 결과 'a' : 선언되지않은 식별자 입니다.
//      'b' : 선언되지않은 식별자 입니다.
// 에러가 나는이유 : 함수안에 선언된 변수명은 사용범위가 함수내부로 제한되므로 main 함수에
// 있는 변수 a, b는 다른 함수인 swap함수 에서 그이름을 사용할 수 없습니다. 좀더 정확히 설명
// 하자면 변수가 선언된 시점부터 선언된 블록 끝까지로 제한됩니다. 결국 이방법은 컴파일 단계
//에서 문제가 발생합니다.

// 변수의 값을 인수로 주는 경우
// void swap(int x, int y);
// 
// int main()
// {
//     int a = 10, b = 20;
// 
//     swap(a, b);
//     printf("a:%d b:%d\n", a, b);
// 
//     return 0;
// }
// void swap(int x, int y)
// {
//     int temp;
// 
//     temp = x;
//     x = y;
//     y = temp;
// }
// 결과 a : 10 b : 20
// 값이 안바뀌는이유
// 함수를 호출 할때 main 함수의 변수 a, b의 값이 복사되어 15행의 매개변수 x,y에 저장됩니다.
// 결국 swap 함수 안에서는 a,b의 복사본을 바꾸므로 main함수의 두변수 a,b의 값은 변함이 없게됩니다.
// swap 함수에서 매개 변수의 이름을 a,b로 사용해도 결과는 같습니다. 이름이 같아도 함수가 다르면
// 메모리에 별도의 저장공간을 확보하므로 전혀 다른 변수로 사용됩니다.
// 마지막으로 swap 함수에서 바꾼값을 main 함수로 반환하는 방법을 생각할수있는데, 함수는 오직 하나의값만을
// 반환 할수 있으므로 한번의 함수 호출을 통해 두변수의 값을 바꾸는것은 불가능합니다.
#pragma endregion
