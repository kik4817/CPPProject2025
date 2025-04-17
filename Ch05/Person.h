#pragma once

#include "Common.h"

// �̸��� Person ����ü, ����, �̸�

/*
* c�� cpp�� ������, �޸� ���� �Ҵ�.
* 
* c =
* malloc(memory allocate) : malloc(ũ�� sizeof(char) * 10);
* free(���� �̸�);
* 
* cpp = 
* new    : cpp �����Ҵ� �ϴ� Ű����
* delete : �޸� �����ϴ� Ű����
*/

/*
* ������ : ��ä�� �����͸� ������ �� �� �ʱ�ȭ ���ִ� ���
* �Ҹ��� : ��ü�� �Ҹ��� �� �������� ȣ��Ǵ� ���
*/

/*
* age, nmae; age = 20; name = "���谡"
* age = �ܺο��� ������ ���� �־��; age(age), name(name)
* �ּ� = �ּ�; ���� �� �ִ� ������ ������ ������?
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
	char* name; // ���̸� �˼� ����, �޸𸮰� ������ �Ǿ� ���� �ʴ�.
	string sName;
	GENDER type;

	// ����Ʈ ������
	Person() {}

	// ���� ������ ���ڿ� �ʱ�ȭ ���
	Person(int age, const string& name) : age(age), sName(name) {}

	// ������ ��ǻ�Ͱ� �дµ� ����, �Ʒ����� ��ǻ�Ͱ� �дµ� ����
	
	/*Person(int age)
	{
		this->age = age;
	}*/ 

	// ������ �����ε�
	Person(int age, const char* str) : age(age), type(type)
	{
		// �޸� ������ ���� ��������� �Ѵ�. �տ� this
		// name = malloc(sizeof(char) * (strlen(str) + 1));
		name = new char[strlen(str) + 1];
		// ���� ������ ������ �ܺο� �ִ� �����͸� �����ؼ� �Űܿ;� �Ѵ�.
		strcpy(name, str); // strcpy_s
	}
	
	// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��ȴ�.
	~Person()
	{
		cout << "Person�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const; // ��ü ���� �����͸� ������� ����ϰڴ�. ����ڿ��� �˷��ش�.
};