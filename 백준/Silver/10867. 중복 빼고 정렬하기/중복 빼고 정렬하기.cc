#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t; 
        s.insert(t);
    }
    for (int num : s) {
        cout << num<<" ";
    }
    return 0;
}