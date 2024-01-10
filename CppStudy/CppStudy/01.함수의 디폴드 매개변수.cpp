#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/* Tip1
C++에서는 함수를 정의를할 때 디폴트 파라미터를 설정할 수 있다.
디폴트 파라미터는 정의부에서만 설정이 가능하고
구현쪽에서는 불가능 하다.

그러므로 구현 후 정의를 해주는 것이 C#과 다르다.

정의부에서는 변수명 생략이 가능하다.
*/

/* Tip2
https://github.com/google/styleguide
구글 스타일 가이드 

여기에선 디폴트 파라미터를 쓰지마라고 권고하고있다.
호출하는 부분에서는 원형을 짐작으로 알 수 없기 때문이다. (모호성이 발생)
c++에서는 모호성이 문제가 큰 문제가 되기에 제거하는 것이 중요하다.
*/

/*
C++의 특징으로는 다형성을 지원하는 것이다.
다형성은 모호성을 같이 가지고 간다.

void TestFunC();
void TestFunC(*char)
2개가 공존이 가능하다. 즉 오버로딩(다중정의) 기능을 제공한다.

장점으론 코드의 유연성이 늘어난다.
*/

//오버라이딩은 재정의이다.

//Callee
void TestFunc_1(int, int = 5);
void TestFunc_2(int a, int b = 5)
{
	printf("a: %d, b: %d\n", a, b);
}



//Caller
int Tmain()
{
	TestFunc_1(3);
	return 0;
}
 

void TestFunc_1(int a, int b)
{
	printf("a: %d, b: %d\n", a, b);
}
