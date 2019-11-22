#include <iostream>
using namespace std;
int main()
{
    double x,y;
    double z;
    cin >> x >> y;
    z=y/100;
    for (int i = 0; i<5; i++){
        x*=(1+z);
    }
    cout <<x;
}

//int main()
//{
//    double a,b,d;
//    double c;
//    cin >> a >> b;
//    c=b/100;
//    d=a*c;
//    for(int i = 0; i<5 ; i++){
//        a+=d;
//    }
//    cout <<a;
//}
