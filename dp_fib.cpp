#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int>& a, int n) {
    if (n == 1 || n == 2) return 1;
    if (a[n]) return a[n];
    a[n] = helper(a, n - 1) + helper(a, n - 2);
    return a[n];
}

int fib(int n) {
    if (n < 1) return 0;
    vector<int> a(n + 1, 0);
    return helper(a, n);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
