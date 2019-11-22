#include <iostream>
using namespace std;

int main(){
	
	double x , a;
	
	cin >> x >> a;
	
	double price = a / x ;
	double y , k ;
	
	cin >> y >> k; 
	cout << y * price << " " << k / price;
	return 0;
}
