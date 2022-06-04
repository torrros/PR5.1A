//////////////////////Source.cpp
#include < iostream>
#include "Number.h"

using namespace std;

int main()
{
	
	Number n;
	try {
		cin >> n;
		cout << n << endl;
	}
	catch (Exception e)
	{
		cout << e.what() << endl;
	}
	
	cout << "Multiply - " << n.multiply();
	
	cout << endl;
	Number a(4);
	cout<<"a - " << a << endl;
	cout << "a++ - " << a++ << endl;
	cout << "++a - " << ++a << endl;
	cout << "a-- - " << a-- << endl;
	cout << "--a - " << --a << endl;
	

	return 0;
}
