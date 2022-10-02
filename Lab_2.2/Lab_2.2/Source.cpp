#include<iostream>
#include<Math.h>
using namespace std;
	int main() 
	{
        int x, y;
        a: cout << "enter x,y: ";
        cin >> x >> y;
        if (x >= 0 && y >= 0) {
            if (pow(x, 2) + pow(y, 2) <= pow(x, (1 / 2)))cout << "Yes!";
            else cout << "No"<<endl;
        }
        else if (x <= 0 && y <= 0) {
            if (pow(x, 2) + pow(y, 2) < 1) cout << " Yes";
            else cout << "No";
        }
        goto a;
        return 0;

}