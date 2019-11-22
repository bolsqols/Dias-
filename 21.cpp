#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x , y;
	cin >> x >> y;
	int c = sqrt(x*x + y*y);
	cout << (x * y)/2 << " " << x + y + c << " " << c;
}
