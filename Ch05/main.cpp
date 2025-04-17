/*
* 작성일 : 2025-04-16
* 작성자 : 김인국
* 주 제 : 데이터 복사
*/

/*
* 예제 문제
* person.h
* 성별
* enum GENDER
* {
*	BOY,
*	GIRL
* }
*/

#include "Common.h"
#include "Person.h"

void Example()
{
	// 정수를 저장하는 데이터 타입(int) 변수를 2개 선언
	int numA = 10;

	// numB, numA에 저장되어 있는 값을 B에 옮기고 싶다.
	// numA의 값을 numB에 복사하고 싶다.
	int numB = numA;

	// 정수의 주소를 저장하는 변수를 2개 선언
	int* numAPtr = &numA;
	int* numBPtr = numAPtr;

	// numBPtr들어간 주소와 numAPtr들어간 주소, numA의 주소 모두 같습니까?

	cout << "numA의 주소" << &numA << endl;
	cout << "numAPtr의 주소" << &numAPtr << endl;
	cout << "numBPtr의 주소" << &numBPtr << endl;

	// 변수끼리 대입연산자 사용한 경우
	// numAm numB 각각 다른 공간에 존재한다.
	// 주소끼리 대입연산자 사용한 경우
	// 주소가 가리키는 값이 같다.

	// numA, numAPtr, numBPtr 주소의 값이 모두 동일한다.
	// 해당 주소를 하나의 변수에서 제거하면 다른 변수에서 접근을 할 수 없게된다.
}

int main()
{
	cout << "CH05 : 데이터 복사" << endl;;
	//Example();
	
	//Person human1 = { 20 }; // human1이라는 공간에 데이터를 복사해서 넣어줘야한다.
	Person human1(20, "모험가"); // const char
	Person human1Clone;
	Person human2(30, "용병");
	human1Clone.Clone(human1);
	human1.Show();
	human1Clone.Show();
	human2.Show();
}
