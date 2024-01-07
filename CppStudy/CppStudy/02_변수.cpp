#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>

int 변수()
{
    //선언 및 정의
    int a = 10; // C언어 스타일
    int b(10);  // C++ 스타일


    int c(10);
    auto d(c); //c#의 var와 비슷하며, 원본의 선언을 따라간다.
    int(10); //이름이 없는 인스턴스 선언이다.

    std::cout << int(10) << std::endl;
    return 0;
}