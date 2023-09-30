#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> arr;

// REMEMBER: DUE TO THE NATURE OF THE ALGORITHM, BINARY SEARCH ONLY WORKS ON SORTED ARRAYS.
int binarysearch(int x) { // x is the target element to find.
    int a = 0, b = n-1;
    while (a <= b) {

        int k = (a+b)/2; // The midpoint

        if (arr[k] == x) { // if arr[k] equals the target, we found the index we want.
            return k;
            // or i could make it just return true if found.    
        }

        if (arr[k] > x) { // it is in the lower half, so we change the bounds.
            b = k-1;
        } else a = k+1; // it is in the upper half, so we change the bounds.
    }

    return -1; // return -1;
}

int main() {
    int x;
    cin >> n >> x;
    arr.resize(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());        
    
    cout << binarysearch(x) << endl;
    return 0;
}
