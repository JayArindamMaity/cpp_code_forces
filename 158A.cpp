#include <iostream>
#include <vector>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector <int> arr;
  int siz,tar,tem{0},ans{0};
  cin >> siz >> tar;

  while (siz--) {
    cin >> tem;
    arr.push_back(tem);
  }
  
  for (int i{0} ; i<arr.size() ; i++) {
    if (arr[i] >= arr[tar-1] && arr[i] > 0) {
      ans++;
    }
  }

  cout << ans << "\n";
  return 0;
}
