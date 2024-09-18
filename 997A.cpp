#include <iostream> 

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    while (b--) {
        if (a%10 == 0) {
            a = a/10;
        }
        else {
            a--;
        }
    }
    cout << a;
    return 0;
}