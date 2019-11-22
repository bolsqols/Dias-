#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    for(double i = 1; i <= n; i++){
        double a = 1 / i;
        cout << a << '+';
        sum += a;
    }
    cout << '=' << sum << ' ';
    return 0;
}
