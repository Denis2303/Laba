#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	a = pow(a, 2);
	b = pow(b, 2);
	cout << a + b<<endl << a - b << endl << a * b<< endl << a / b;
}
