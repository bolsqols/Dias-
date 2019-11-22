#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const double e = 2.71;
	double x ; cin >> x;
	double y = pow ( e , (x - 2)) + abs(sin(x)) - pow(x , 4)*cos( 1/x);
	cout << y;
	return 0;
}
