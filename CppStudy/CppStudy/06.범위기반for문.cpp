#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

/*
범위기반 for문

for문은 일반적으로 '횟수'를 중심으로 반복합니다. (while은 조건 중심으로 반복)
따라서 보통 배열 자료구조에 접근할 때 for문을 자주 사용하는데 이는 배열의 요소가 선언할 때 확정되기 때문입니다.

여기서 문제는 만일 배열 요소의 개수를 변경하면 for문도 수정해야 하지만
범위 기반 for문을 사용하면 그럴 필요가 없습니다.
*/

int 범위기반for문()
{
	int aList[] = { 40, 30, 10, 20, 50 };

	//일반적인 for문
	for (int i = 0; i < 5; i++)
		cout << aList[i] << endl;

	cout << endl;
	//범위기반 for문 (c#의 foreach)
	for (auto& n : aList) //auto는 c#의 var와 동일하다.
		cout << n + 1 << endl;

	cout << endl;
	//체크해야 할 것은 참조자가 없으면 지역변수로의 역할로 끝나며 값의 변화를 줄 수 없다.
	for (auto n : aList) //auto는 c#의 var와 동일하다.
		cout << n + 1 << endl;

	return 0;
}