#include <iostream>

using namespace std;

int main () {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    cout << (a*b)/2 << endl;
    return 0;
}