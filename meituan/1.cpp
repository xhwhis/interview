#include <cstdio>
#include <unordered_map>
using namespace std;

int main () {
    int n, p, q, a, cnt = 0;
    scanf ("%d%d%d", &n, &p, &q);
    unordered_map<int, int> flag;
    for (int i = 0; i < p; i++) {
        scanf ("%d", &a);
        flag[a]++;
    }
    for (int i = 0; i < q; i++) {
        scanf ("%d", &a);
        if (flag[a]) cnt++;
    }
    printf ("%d %d %d\n", p - cnt, q - cnt, cnt);
    return 0;
}
