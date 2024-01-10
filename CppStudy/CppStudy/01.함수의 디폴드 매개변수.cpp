#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/* Tip1
C++������ �Լ��� ���Ǹ��� �� ����Ʈ �Ķ���͸� ������ �� �ִ�.
����Ʈ �Ķ���ʹ� ���Ǻο����� ������ �����ϰ�
�����ʿ����� �Ұ��� �ϴ�.

�׷��Ƿ� ���� �� ���Ǹ� ���ִ� ���� C#�� �ٸ���.

���Ǻο����� ������ ������ �����ϴ�.
*/

/* Tip2
https://github.com/google/styleguide
���� ��Ÿ�� ���̵� 

���⿡�� ����Ʈ �Ķ���͸� ��������� �ǰ��ϰ��ִ�.
ȣ���ϴ� �κп����� ������ �������� �� �� ���� �����̴�. (��ȣ���� �߻�)
c++������ ��ȣ���� ������ ū ������ �Ǳ⿡ �����ϴ� ���� �߿��ϴ�.
*/

/*
C++�� Ư¡���δ� �������� �����ϴ� ���̴�.
�������� ��ȣ���� ���� ������ ����.

void TestFunC();
void TestFunC(*char)
2���� ������ �����ϴ�. �� �����ε�(��������) ����� �����Ѵ�.

�������� �ڵ��� �������� �þ��.
*/

//�������̵��� �������̴�.

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
