/*
* �ۼ��� : 2025-04-16
* �ۼ��� : ���α�
* �� �� : ������ ����
*/

/*
* ���� ����
* person.h
* ����
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
	// ������ �����ϴ� ������ Ÿ��(int) ������ 2�� ����
	int numA = 10;

	// numB, numA�� ����Ǿ� �ִ� ���� B�� �ű�� �ʹ�.
	// numA�� ���� numB�� �����ϰ� �ʹ�.
	int numB = numA;

	// ������ �ּҸ� �����ϴ� ������ 2�� ����
	int* numAPtr = &numA;
	int* numBPtr = numAPtr;

	// numBPtr�� �ּҿ� numAPtr�� �ּ�, numA�� �ּ� ��� �����ϱ�?

	cout << "numA�� �ּ�" << &numA << endl;
	cout << "numAPtr�� �ּ�" << &numAPtr << endl;
	cout << "numBPtr�� �ּ�" << &numBPtr << endl;

	// �������� ���Կ����� ����� ���
	// numAm numB ���� �ٸ� ������ �����Ѵ�.
	// �ּҳ��� ���Կ����� ����� ���
	// �ּҰ� ����Ű�� ���� ����.

	// numA, numAPtr, numBPtr �ּ��� ���� ��� �����Ѵ�.
	// �ش� �ּҸ� �ϳ��� �������� �����ϸ� �ٸ� �������� ������ �� �� ���Եȴ�.
}

int main()
{
	cout << "CH05 : ������ ����" << endl;;
	//Example();
	
	//Person human1 = { 20 }; // human1�̶�� ������ �����͸� �����ؼ� �־�����Ѵ�.
	Person human1(20, "���谡"); // const char
	Person human1Clone;
	Person human2(30, "�뺴");
	human1Clone.Clone(human1);
	human1.Show();
	human1Clone.Show();
	human2.Show();
}
