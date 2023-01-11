#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 3;
	int& m = a;
	m = b;

	/*int& m;*/

	int* c;
	c = &b;

	cout << m << endl;
	cout << *c << endl;
}