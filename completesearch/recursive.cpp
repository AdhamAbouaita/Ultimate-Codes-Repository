#include <iostream>
#include <vector>
using namespace std;

/* 
This algorithm uses a pick or leave backtracking
approach.
Given a set, it generates all subsets for it.
*/
int n;

vector<int> subset;
vector<int> arr;

void search(int k) {
    if (k == n) {
        // Subset has been created, and is inside the subset vector.
        // Do whatever you want with the subset.
        // E.g: print it:
        for (auto it: subset) {
            cout << it << ' ';
        }
        cout << endl;
    } else {
        search(k+1); // leaves K and just recurses
        subset.push_back(arr[k]); // Takes K
        search(k+1); // then recurses
        subset.pop_back(); // backtracks
        // Note: The popback only gets called after
        // a subset has been found,since we recursively call
        // the search() again above.
    } 
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        arr.push_back(in);
    }

    search(0);
    return 0;
}
