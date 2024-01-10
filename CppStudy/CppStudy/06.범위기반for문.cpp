#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/*
������� for��

for���� �Ϲ������� 'Ƚ��'�� �߽����� �ݺ��մϴ�. (while�� ���� �߽����� �ݺ�)
���� ���� �迭 �ڷᱸ���� ������ �� for���� ���� ����ϴµ� �̴� �迭�� ��Ұ� ������ �� Ȯ���Ǳ� �����Դϴ�.

���⼭ ������ ���� �迭 ����� ������ �����ϸ� for���� �����ؾ� ������
���� ��� for���� ����ϸ� �׷� �ʿ䰡 �����ϴ�.
*/

int �������for��()
{
	int aList[] = { 40, 30, 10, 20, 50 };

	//�Ϲ����� for��
	for (int i = 0; i < 5; i++)
		cout << aList[i] << endl;

	cout << endl;
	//������� for�� (c#�� foreach)
	for (auto& n : aList) //auto�� c#�� var�� �����ϴ�.
		cout << n + 1 << endl;

	cout << endl;
	//üũ�ؾ� �� ���� �����ڰ� ������ ������������ ���ҷ� ������ ���� ��ȭ�� �� �� ����.
	for (auto n : aList) //auto�� c#�� var�� �����ϴ�.
		cout << n + 1 << endl;

	return 0;
}