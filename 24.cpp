#include <iostream>
using namespace std;

int main(){
	
	int x , y , z , z1;
	
	cin >> x >> y >> z;
	
	z1 = z;
	
	y = z / 100 + 1.0;
	
	for ( int i = 0; i < x; i++){
		z = (z + 3)*y;
	}
	
	cout << z -z1; 
	
	return 0;
}
