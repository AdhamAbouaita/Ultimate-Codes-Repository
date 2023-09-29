#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;

void search() {
    // When you iterate up to 1 shifted left n times, you go through all the permutations of 1s and 0s.
    // If we pretend that bits equal to 1 correspond to indices in the vector v, we can select every possible permutation/subset of the vector v.
    for (int b = 0; b < (1<<n); b++) { 
        vector<int> subset; // this is where the current subset found is stored

        for (int i = 0; i < n; i++) { // Checks each bit in b, to see which ones are highlighted as one.

            if (b&(1<<i)) subset.push_back(v[i]); // checks if that bit is 1. If it is, add the corresponding indice in "v" to the temp subset vector. 
        }
        // print the subset vector:
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
