#include <iostream>
using namespace std;
int main ()
{
    int n; cin >> n;
    long long res = 0;
    for (int i = 1; i <= n; ++ i) {
        long long now = 1;
        for (int j = i; j <= 2*i; ++ j)
            now *= j;
        res += now;
    }
    
    cout << res;
    return 0;
}
