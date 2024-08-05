#include <iostream>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m,a,r,l;
    cin >> n >>m >> a;
    r = n / a + (n%a == 0 ? 0 : 1);
    l = m / a + (m%a == 0 ? 0 : 1);
    cout << l * r;
    return 0;
}

