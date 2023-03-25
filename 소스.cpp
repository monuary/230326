#include<iostream>
using namespace std;

class First 
{
public:void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second :public First
{
public:void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third :public Second
{
public:void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main()
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = tptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();	//클래스 반환형에 맞는 함수가 호출된다.
	delete tptr;
	return 0;
}