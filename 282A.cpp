#include <iostream>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,ans{0};
    string s;
    cin >> T;
    while (T--) {
      cin >> s;
      if (s[1] == '+') {
        ans++;
      }
      else {
        ans--;
      }
    }
    cout << ans;
    return 0;
}
