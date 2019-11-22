#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x;
	cin >> x;
	double y = (abs(x - 5) - sin(x))/3;
	double z = sqrt(pow(x , 2) + 2014)*cos(2*x -3);
	cout << y + z;
	return 0;
}
