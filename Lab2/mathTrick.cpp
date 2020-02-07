#include <iostream>

using namespace std;

int main () {

	int num;
	cout << "Please enter an integer: ";
	cin >> num;
	int firstop = num%2;
	float numerator = (num*4)+6;
	float denominator = 3+firstop;
	float fraction = numerator/denominator;
	float result = fraction-num;
	cout.precision(3);	
	cout << result << endl;
	
	return 0;
}
