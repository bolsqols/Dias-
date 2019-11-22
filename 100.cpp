#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 1000; i < a; i++) {
        if (i % 10 == 5 || i % 10 == 6) {
            continue;
        }
        else {
            cout << i<< " ";
        }
    }
    cout << endl;
    return 0;
}
