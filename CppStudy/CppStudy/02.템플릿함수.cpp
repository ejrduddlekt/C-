#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/*
템플릿 함수

실제로 템플릿 함수를 실행하면 다음(주석) 함수들이 만들어져 호출한다.
함수를 만들면서 name mangling이 일어나는데, 내부적으로 함수의 이름은 같지만 네임 맹글링을 통해 다른 이름으로 생성하게 된다.
*/

//int Add(int  a, int b) {
//	return a + b;
//}
//
//int Add(double a, double b) {
//	return a + b;
//}

template <typename T>
T Add(T a, T b) {
	return a + b;
}


//Caller
int TTmain()
{
	cout << Add(3, 4) << endl;
	cout << Add(3.4, 4.4) << endl;
	return 0;
}