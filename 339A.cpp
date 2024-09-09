#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <char> nums;
    string r;
    cin >> r;
    for (int i{0} ; i<r.size() ; i+=2) {
        nums.push_back(r[i]);
    }
    sort(nums.begin() , nums.end());
    for (int i{0} ; i<nums.size()-1 ; i++) {
        cout << nums[i] << "+";
    }
    cout << nums[nums.size()-1];
    return 0;
}