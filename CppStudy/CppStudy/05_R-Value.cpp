#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/*
R - value참조란 대입 연산자의 두 피연산자 중 오른쪽에 위치한 연산자를 말하는 것으로,
일반적인 변수와 상수 모두 해당될 수 있습니다.

문법은 일반 참조자와비슷하지만 다음 코드처럼 &가 두 번 연속 (&&)해서 등장한다는 점이 다릅니다.
이름 없는 임시값을 참조할 때 유용합니다.
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

    //산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
    int&& rData = nInput * 5;
    cout << rData << endl;

    //함수 반환으로 만들어진 임시 객체에 대한 r-value 참조
    int&& result = TestFunc(10);

    //값을 변경할 수 있다. 
    result += 10;
    cout << result << endl;

    return 0;
}