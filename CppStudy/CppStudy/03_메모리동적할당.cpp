/*
C에서 MALLOC()이란 함수는 메모리를 동적할당하는 함수 였으나,
이는 성공/실패를 반환하므로 이후에 new라는 연산자로 바뀌게 된다.

1. 메모리 동적할당
2. class의 생성자(함수)를 호출
*/ 


#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int 메모리동적할당()
{
    //C
    int* pnData = (int*)malloc(sizeof(int) * 5);
    free(pnData);

    //C++
    int* pnNewData = new int[5];
    delete [] pnNewData; //배열일 경우 반드시 배열로 메모리를 해제 해야 한다.


//-------------------------------------

    //객체를 배열형태로 동적 생성한다.
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) 
        arr[i] = (i + 1) * 10;

    for (int i = 0; i < 5; ++i)
        cout << arr[i] << endl;

    // 배열형태로 생성한 대상은 반드시 배열 형태를 통해 삭제한다.
    delete[] arr;

    return 0;
}