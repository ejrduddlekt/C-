/*
C���� MALLOC()�̶� �Լ��� �޸𸮸� �����Ҵ��ϴ� �Լ� ������,
�̴� ����/���и� ��ȯ�ϹǷ� ���Ŀ� new��� �����ڷ� �ٲ�� �ȴ�.

1. �޸� �����Ҵ�
2. class�� ������(�Լ�)�� ȣ��
*/ 


#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int �޸𸮵����Ҵ�()
{
    //C
    int* pnData = (int*)malloc(sizeof(int) * 5);
    free(pnData);

    //C++
    int* pnNewData = new int[5];
    delete [] pnNewData; //�迭�� ��� �ݵ�� �迭�� �޸𸮸� ���� �ؾ� �Ѵ�.


//-------------------------------------

    //��ü�� �迭���·� ���� �����Ѵ�.
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) 
        arr[i] = (i + 1) * 10;

    for (int i = 0; i < 5; ++i)
        cout << arr[i] << endl;

    // �迭���·� ������ ����� �ݵ�� �迭 ���¸� ���� �����Ѵ�.
    delete[] arr;

    return 0;
}