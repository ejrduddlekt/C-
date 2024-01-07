#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;


int 참조자형식예시()
{
    int nData(10);
    cout << nData << endl;

    //참조자는 '별명'이다.
    int& rData(nData);

    rData = 5; //원본값이 변경된다.
    cout << nData << endl;

    cout << &nData << endl; 
    cout << &rData << endl; //같은 주소가 출력된다.

    return 0;
}

/*
참조자(&)를 사용하는 이유?
포인터의 문제점은 변절이다.
참조자는 포인터 자체임은 변하지 않는다.
*/
//보충이 필요함

int 포인터의문제점() 
{
    int a = 1;
    int& pnData = a; //a의 주소값이 들어간다.
    int *pointData = &a;


    pnData = 5; //주소값은 변함이 없고 a의 값만 변경된다.
    *pointData = 5;
    return 0;
}