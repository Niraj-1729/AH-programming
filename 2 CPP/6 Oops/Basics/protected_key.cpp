#include <iostream>
using namespace std;

class base
{
protected:
	int a, b;

public:
	void show()
	{
		a = 10;
		b = 20;
		cout << a << " " << b << endl;
	}
};

class Derive : public base
{
public:
	void disp()
	{
		a = 30;
		b = 40;
		cout<<a<<" "<<b<<endl;
	}
};

int main () {
	//  always make object of derived class 
	Derive obj;
	obj.disp();
	obj.show();
}