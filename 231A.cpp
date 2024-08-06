#include <iostream>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T,ans{0};
  cin >> T;

  while (T--) {
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b+c >= 2) {
      ans++;
    }
  }
    
  cout << ans;
  return 0;
}
