#pragma once

#include "Common.h"

// 이름이 Person 구조체, 나이, 이름

/*
* c와 cpp의 차이점, 메모리 동적 할당.
* 
* c =
* malloc(memory allocate) : malloc(크기 sizeof(char) * 10);
* free(변수 이름);
* 
* cpp = 
* new    : cpp 동적할당 하는 키워드
* delete : 메모리 해제하는 키워드
*/

/*
* 생성자 : 객채가 데이터를 생성을 할 때 초기화 해주는 기능
* 소멸자 : 객체가 소멸할 때 자종으로 호출되는 기능
*/

/*
* age, nmae; age = 20; name = "모험가"
* age = 외부에서 가져온 숫자 넣어라; age(age), name(name)
* 주소 = 주소; 생길 수 있는 문제점 무엇이 있을까?
*/

enum GENDER
{
	BOY,
	GIRL,
	MAN,
	WOMAN
};

struct Person
{
	int age;
	char* name; // 길이를 알수 없다, 메모리가 배정이 되어 있지 않다.
	string sName;
	GENDER type;

	// 디폴트 생성자
	Person() {}

	// 가장 간단한 문자열 초기화 방식
	Person(int age, const string& name) : age(age), sName(name) {}

	// 위에는 컴퓨터가 읽는데 빠름, 아래쪽은 컴퓨터가 읽는데 느림
	
	/*Person(int age)
	{
		this->age = age;
	}*/ 

	// 생성자 오버로딩
	Person(int age, const char* str) : age(age), type(type)
	{
		// 메모리 공간을 직접 생성해줘야 한다. 앞에 this
		// name = malloc(sizeof(char) * (strlen(str) + 1));
		name = new char[strlen(str) + 1];
		// 새로 생성한 공간에 외부에 있는 데이터를 복사해서 옮겨와야 한다.
		strcpy(name, str); // strcpy_s
	}
	
	// 소멸자 : 객체가 소멸될 때 자동으로 호출된다.
	~Person()
	{
		cout << "Person의 소멸자가 호출되었습니다." << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const; // 객체 안의 데이터를 변경없이 사용하겠다. 사용자에게 알려준다.
};