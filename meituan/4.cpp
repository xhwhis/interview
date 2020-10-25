#include <cstdio>
#include <cstring>
#include <unordered_map>
using namespace std;

int val[30];

void solutin(int n) {
    if (n <= 2) {
        printf ("NO\n");
        return ;
    }
    unordered_map<int, int> cnt;
    for (int i = 1; i < n; i++) {
        cnt[val[i]]++;
    }
    for (auto vals : cnt) {
        int count = 0;
        if (vals.first == 1) continue;
        for (int i = 1; i <= vals.first && i != 2; i++) {
            for (int j = i; j <= vals.first && j != 2; j++) {
                if (i + j + 1 == vals.first) count += (cnt[i] + cnt[j]);
            }
        }
        if (count != vals.second) {
            printf ("NO\n");
            return ;
        }
    }
    printf ("YES\n");
    return ;
}

int main() {
    int n;
    while (~scanf ("%d", &n)) {
        memset(val, 0, sizeof(val));
        for (int i = 1; i <= n; i++) {
            scanf ("%d", &val[i]);
        }
        solutin(n);
    }
    return 0;
}
