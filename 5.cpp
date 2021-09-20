#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	cout << a + b << endl << a - b << endl << a * b << endl << a / b;
}
