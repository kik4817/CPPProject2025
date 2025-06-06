#pragma once

// 객체지향프로그래밍 OOP(Object Oriented Programming)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 예제1. 좌표를 표현하는 구조체 Pos, 정보 은닉
// 목표 : 콘솔 화면 창에 사각형을 그리는 객체를 만들어보세요.

// 목표 : 사각형, 점, 콘솔
// 키워드 : 접근 제어 지시자

// struct, 기본 설계가 public되어 있고 class private 되어 있다.

class Point
{
private:
	int x;
	int y;
public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}
};

// 접근 제어 지시자
// private, public,protected

// private : 객체 내부에서만 허용되는 접근 방식
// public  : 객체 외부에서도 허용되는 접근 방식

// class 키워드 기본적으로 private 구현된다.

// 정보 은닉 : 외부에서 사용하지 못하게 막는 것
// 왜 외부에서 사용하면 안되는지?
// 안전하게 구현된 코드에서만 외부로 노출되도록 만든다.

#include <stdexcept>

class cPoint
{
private:
	int x;
	int y;
public:
	// 생성자 자동으로 만들어주는 기능.
	// 직접 생성자를 선언하면 디폴트 생성자가 자동으로 만들어지지 않는다.

	cPoint() {}

	cPoint(int outX, int outY)
	{
		if (outX < 0 || outY < 0)
		{
			cout << "유효하지 않은 범위가 지정되었습니다." << endl;
			// 예외 처리
			// 실행이 되면 코드가 멈추고 다음 내용을 출력한다.
			//throw std::invalid_argument("유효하지 않은 범위가 지정되었습니다.");
		}

		//this->x
		x = outX;
		y = outY;
	}

	int GetX() const;
	int GetY() const;

	void SetX(int amount);
	void SetY(int amount);
};

class Rectangle
{
private:
	cPoint leftUpPoint;    // x작고 y큼
	cPoint rightDownPoint; // x크고 y작음
public:

	Rectangle() {}

	// p1, p2 좌표가 lu, rd 형식이 아닌 경우에는 문제가 생길 수 있다.
	Rectangle(cPoint p1, cPoint p2) 
	{
		// p1 x좌표 p2 x좌표 비교
		// p1 y좌표 p2 y좌표 비교
		// p1, p2
		if (p1.GetX() < p2.GetX() && p1.GetY() > p2.GetY())
		{
			leftUpPoint = p1;
			rightDownPoint = p2;
		}
		else
		{
			leftUpPoint = p2;
			rightDownPoint = p1;
		}

	}

	Rectangle(int x1, int x2, int y1, int y2)
	{
		cPoint newLeftUp;
		cPoint newRightDown;

		if (x1 < x2)
		{
			newLeftUp.SetX(x1);
			newRightDown.SetX(x2);
		}
		else if (x1 > x2)
		{
			newLeftUp.SetX(x2);
			newRightDown.SetX(x1);
		}
		else
		{
			cout << "x,y의 좌표가 같을 수 없습니다." << endl;
		}

		if (y1 < y2)
		{
			newLeftUp.SetX(y2);
			newRightDown.SetX(y1);
		}
		else if (y1 > y2)
		{
			newLeftUp.SetX(y1);
			newRightDown.SetX(y2);
		}
		else
		{
			cout << "x,y의 좌표가 같을 수 없습니다." << endl;
		}

		leftUpPoint = newLeftUp;
		rightDownPoint = newRightDown;
	}

	void Draw();
};

void Example1();
void Example2();
void Example3();