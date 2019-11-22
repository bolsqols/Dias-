#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x , a ,b;
	cin >> x >> a >> b;
	double y = cbrt(sqrt(pow(x , 2) + b)) - ((pow(b , 2)*pow(sin(x + a) , 3))/x);
	cout << y;
	return 0;
}
