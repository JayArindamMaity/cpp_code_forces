#include <iostream>

using namespace std;

int iter_count(int r);

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(NULL);

    int mat[5][5];
    int tem{0},row{0},col{0},ans{0};

    for (int i{0} ; i<5 ; i++) {
        for (int j{0} ; j<5 ; j++) {
            cin >> tem;
            mat[i][j] = tem;
            if (tem == 1) {
                row = i;
                col = j;
            }
        }
    }
    ans = iter_count(row) + iter_count(col);
    cout << ans << endl;
    return 0;
}

int iter_count (int r) {
    int count{0};
    if (r>2){
        while (r>2) {
            r--;
            count++;
        }
        return count;
    }
    if (r<2) {
        while (r<2) {
            r++;
            count++;
        }
        return count;
    }
    return 0;
}