#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;

void search() {
    for (int b = 0; b < (1<<n); b++) {
        vector<int> subset; // this is where the current subset found is stored

        for (int i = 0; i < n; i++) {

            if (b&(1<<i)) subset.push_back(v[i]); // checks if that bit is 1.   
        }
        // print the subset:
        for (auto it: subset) {
            cout << it << ' ';
        }
        cout << endl;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int in; cin >> in;
        v.push_back(in);
    }

    search();
    return 0;
}
