#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int nums[1005];

void solution(int n) {
    memset(nums, 0, sizeof(nums));
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    n = unique(nums, nums + n) - nums;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << endl;
    }
}

int main() {
    int n;
    while (cin >> n) {
        solution(n);
    }
    return 0;
}
