#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;


int ���������Ŀ���()
{
    int nData(10);
    cout << nData << endl;

    //�����ڴ� '����'�̴�.
    int& rData(nData);

    rData = 5; //�������� ����ȴ�.
    cout << nData << endl;

    cout << &nData << endl; 
    cout << &rData << endl; //���� �ּҰ� ��µȴ�.

    return 0;
}

/*
������(&)�� ����ϴ� ����?
�������� �������� �����̴�.
�����ڴ� ������ ��ü���� ������ �ʴ´�.
*/
//������ �ʿ���

int �������ǹ�����() 
{
    int a = 1;
    int& pnData = a; //a�� �ּҰ��� ����.
    int *pointData = &a;


    pnData = 5; //�ּҰ��� ������ ���� a�� ���� ����ȴ�.
    *pointData = 5;
    return 0;
}