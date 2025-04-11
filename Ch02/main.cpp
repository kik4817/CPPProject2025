/*
* 작성일 : 2025-04-11
* 작성자 : 김인국
* 주 제 : 참조자 
* C, CPP 차이점2 : 참조자
*/

#include <iostream>

/*
* 참조자 이해를 위한 함수 구현 Swap함수 구현하기
*/

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
} // SwapByValue main호출했을 때 num1, num2 전달한 변수가 실제로 변경이 안된다.

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
} // num1, num2 전달된 변수가 실제로 변경된다

// 함수 오버로딩, 함수의 이름이 같아도 매개 변수의 타입이 다르면 구분할 수 있다.
void SwapByRef(int& num1, int& num2) // &num1 - 변수의 주소를 반환
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// 문제1. SwapPointer함수를 만든다. 주소를 참조자로 변경하는 함수를 만든다.
// int type

// 변수만 참조자로 만들 수 있나요? 아닙니다. 주소, 배열 원소 참조자로 만들 수 있다.
// int arr[3] = {1,2,3}
// int& arrRef1 = arr[0]; // arrRef1은 arr[0]의 별명이다

// int num1 = 10;
// int* num1ptr = &num1;
// int* &num1ref = num1ptr; num1ref는 num1ptr의 별명이다.

void SwapPointer(int* &num1ptr, int* &num2ptr)
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}

int main()
{
	// namespace std로 정의되어있는 공간안에 cout 가져와서 사용
	std::cout << "2강 참조자" << std::endl;

	// 참조자 선언과 사용이 구분된다.
	// 함수도 선언과 사용이 구분된다.

	// 참조자

	int num1;
	 num1 = 1;
	// = int num1 = 1;

	 int* num1ptr = &num1; // num1ptr 포인터변수에 num1의 주소를 저장한다.
	 int& num1ref = num1; // num1변수를 참조하는 num1ref다. num1ref는 num1의 참조자다. num1 별명을 추가해준다. 별명은 num1ref다

	 //int num2 = num1; // num2의 값은 1이다.
	 //num1 = num1 + 1; // num2의 값은 2이다.

	 num1ref += 1;

	 std::cout << "num1의 값 : " << num1 << std::endl; // 변수의 출력 cpp 형식으로 작성
	 std::cout << "num1의 값 num1ref 참조자로 호출 : " << num1ref << std::endl;

	 // A, 개(A의 별명)
	 // A야 사과를 먹어
	 // 개야 사과를 먹어

	 int input = 0;
	 // scanf("%d, &input")
	 // c++ 참조자를 사용해서 함수를 사용할 때 *, & 기호를 사용하지 않고 표현할 수 있다.
	 //std::cin >> input;

	 // SwapByValue Ref에 대한 예제
	 std::cout << "\nCall By Value와 Call By Reference 예제n" << std::endl;

	 int value1 = 10, value2 = 20; // value1, value2 변경되어서 출력하게 만들기, 함수를 이용

	 std::cout << "\nCall By Value 결과" << std::endl;
	 std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	 SwapByValue(value1, value2);
	 std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	 	
	 std::cout << "\nCall By Reference 결과" << std::endl;
	 std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	 SwapByRef(&value1, &value2);
	 std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;

	 std::cout << "\nCall By Value 결과" << std::endl;
	 std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	 SwapByRef(value1, value2);
	 std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	 
	 // 문제1. SwapPointer함수를 만든다. 주소를 참조자로 변경하는 함수를 만든다.
	 
	 std::cout << "\n참조자(Reference)의 응용" << std::endl;
	 
	 int ssnum1 = 1;
	 int ssnum2 = 100;

	 int* ssnum1ptr = &ssnum1;
	 int* ssnum2ptr = &ssnum2;

	 std::cout << "ssnum1ptr로 부터 값 출력 : " << *ssnum1ptr << std::endl;
	 std::cout << "ssnum2ptr로 부터 값 출력 : " << *ssnum2ptr << std::endl;

	 SwapPointer(ssnum1ptr, ssnum2ptr); // 주소에 대한 이해가 필요

	 std::cout << "ssnum1ptr로 부터 값 출력 : " << *ssnum1ptr << std::endl;
	 std::cout << "ssnum2ptr로 부터 값 출력 : " << *ssnum2ptr << std::endl;

	 // 참조자를 사용하면 포인터에 사용된 기호를 1개 줄여서 표현할 수 있다.
	 // int, int 끼리 바꿀 때는 참조자를 사용한다.
	 // int*, int* 끼리 바꿀 때는 int*& int*&	 

	 // 참조자 사용 시 주의해야할 사항

	 // int& AAA(이름을 의미있게 해줘야함); 에러1. 참조자는 선언할 때 반드시 초기화가 피룡하다.
	 int AAA = 10;
	 int& AAAref = AAA; // 에러1의 해결 결과

	 // const 활용하여서 함수를 사용하는 사람에게 가이드를 안내해줄 것
	 // void Func(const int* num1); num1참조하는 값을 변경하지 말라
	 // void Func(const int& num1); num1참조 값을 변경하지 마랄

	 // return 타입에 참조자를 선언할 대 주의해야 한다.

	 // main함수에서의 선언     | 함수의 값 리턴(int func())    | 함수에서 참조자 리턴(int& func())
	 // int a = func();      |         a에 값이 복사됨        | a에 값이 복사됨. func안에서 지역 변수를 return하지 않아햐 함.
	 // int& a = func();     | a는 func리턴 값을 별명으로 한다. | func안에서 지역 변수를 return하지 않아햐 함.
	 //                        a별명에 10을 별명으로 한다.
	 //                        a = 9; 10을 9로 해라.
	 //                        컴파일 에러 발생
	 // const int& a = func()| a별명을 10의 별명으로 해라       | func안에서 지역 변수를 return하지 않아햐 함.
	 //                        10의 별명을 a라고 한다.
	 //                        const int& a = 10;
}