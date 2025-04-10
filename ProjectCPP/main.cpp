/*
* 작성일 : 2025-04-10
* 작성자 : 김인국
* 주 제 : C언어와 C++언어의 공통점과 차이점
*/

// ## 공통점
// 1. 기본적인 문법은 일치하다.
// 2. 변수, 반복문(for, while), 제어문(if, switch)
// 3. 배열, 함수
// 4. 포인터, 구조체, 파일 입출력

// ## 차이점
// 1. 입출력 사용하는 함수 변경 (참조자)
// 2. 구조체 선언 이름으로만 선언을 해도된다.
// 3. 함수 기능 추가 (오버로딩, 디폴트 연산자)
// 4. 개체 (클래스) 지향 프로그램밍

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // C형태의 입력 출력 방식을 구현해볼 것
#include <iostream> // cpp 형태의 입출력 라이브러리

int main()
{
	// 출력 함수 선언 캐릭터 이름 입력, 출력 코드를 C언어로 구현해보ㅔㅅ요.

	// C언어 입출력 style
	char name[20]; // 공통으로 사용하는 변수

	printf("C 입출력 코드\n");
	printf("이름을 입력해주세요.\n");
	scanf("%s", name);
	printf("캐릭터의 이름 : %s\n\n", name);

	// cpp 입출력 style
	std::cout << "CPP 입출력 코드" << std::endl;
	std::cout << "이름을 입력해주세요." << std::endl;
	std::cin >> name;
	std::cout << "캐릭터의 이름 :" << name << std::endl;

	// 처음 보는 문법
	// 1. 이름:: -namespace
	// 2. printf("%s", name); == cout << name 연산자 오버로딩
	// 3. 같은 기능을 수행한다. std::endl == \n
}