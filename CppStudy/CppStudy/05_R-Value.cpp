#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/*
R - value������ ���� �������� �� �ǿ����� �� �����ʿ� ��ġ�� �����ڸ� ���ϴ� ������,
�Ϲ����� ������ ��� ��� �ش�� �� �ֽ��ϴ�.

������ �Ϲ� �����ڿͺ�������� ���� �ڵ�ó�� &�� �� �� ���� (&&)�ؼ� �����Ѵٴ� ���� �ٸ��ϴ�.
�̸� ���� �ӽð��� ������ �� �����մϴ�.
*/

int TestFunc(int nParam)
{
    int nResult = nParam * 2;

    return nResult;
}

int _Tmain()
{
    int nInput = 0;
    cout << "Input number: ";
    cin >> nInput;

    //��� �������� ������� �ӽ� ��ü�� ���� r-value ����
    int&& rData = nInput * 5;
    cout << rData << endl;

    //�Լ� ��ȯ���� ������� �ӽ� ��ü�� ���� r-value ����
    int&& result = TestFunc(10);

    //���� ������ �� �ִ�. 
    result += 10;
    cout << result << endl;

    return 0;
}