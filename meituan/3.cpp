#include <cstdio>
#include <vector>
using namespace std;

int main () {
    int n, ans;
    scanf ("%d", &n);
    vector<int> a(n + 5, 0);
    for (int i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                a[i] ^= (i % j);
            } else {
                if ((n - i) & 1) {
                    a[i] ^= i;
                } else {
                    a[i] ^= 0;
                }
                break;
            }
        }
        if (i == 1) ans = a[i];
        else ans ^= a[i];
    }
    printf ("%d\n", ans);
    return 0;
}
