#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/*
���ø� �Լ�

������ ���ø� �Լ��� �����ϸ� ����(�ּ�) �Լ����� ������� ȣ���Ѵ�.
�Լ��� ����鼭 name mangling�� �Ͼ�µ�, ���������� �Լ��� �̸��� ������ ���� �ͱ۸��� ���� �ٸ� �̸����� �����ϰ� �ȴ�.
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