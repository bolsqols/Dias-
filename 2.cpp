#include <iostream>
#include <ctime>
using namespace std;

int main(){
	time_t rawtime;
 
  	time ( &rawtime );
	cout  << ctime (&rawtime) << endl << "Dias";
	return 0;
}
