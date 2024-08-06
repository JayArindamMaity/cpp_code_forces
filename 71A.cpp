#include <iostream>
     
using namespace std;
     
int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
     
  int a;
  cin >> a;
  while (a--) {
    string str;
    cin >> str;
    out << ((str.length() <= 10) ? str : (str[0] + to_string(str.length()-2) + str[str.length()-1])) << endl;
  }
  return 0;
}
