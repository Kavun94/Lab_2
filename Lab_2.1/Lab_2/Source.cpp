#include <iostream>
#include <Math.h>
using namespace std;

int main() {
	int x; 
	r: cout << "enter x: ";
	cin >> x;
	cout << "1 example"<<endl;
	if (x <= 1)
	{
		if (x < 0) cout << (0.25 * pow(x, 4) + 2 * pow(x, 2)) << endl;
		else cout << (0.5 * cos(x) + 4 * x) << endl;
	}
	else cout << (0.9 * pow(x, 1 / 2) - 0.8 * (x) ) << endl;
	cout << "2 example"<<endl;
	if (x <= 1) cout <<  ((6 * pow(x, 2) - 5) / 3)<< endl;
	else cout << ((5 * pow(x, 2) - 4) / 12) << endl;
	goto r;
	return 0;
}
