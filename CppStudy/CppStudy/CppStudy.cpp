// CppStudy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

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

int main()
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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
