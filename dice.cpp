#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

int n;
unordered_map<int, int> vals;

void func(int depth, int sum) {
    if (depth > n) {
        vals[sum]++;
        return ;
    }
    for (int i = 1; i <= 6; i++) {
        int num = (depth & 1) ? i : -i;
        sum += num;
        func(depth + 1, sum);
        sum -= num;
    }
}

int main() {
    cin >> n;
    func(1, 0);
    for (auto val : vals) {
        cout << val.first << " " << val.second << "/" << pow(6, n) << endl;
    }
    return 0;
}
