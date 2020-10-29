#include <cstdio>
#include <unordered_map>
using namespace std;

long long m;
char num[20];
int flag[20];
int digit = 0, ans = 0;
unordered_map<long long, int> res;

void trackback(int depth, long long per_num) {
    if (depth >= digit) {
        res[per_num]++;
        if (res[per_num] > 1) return ;
        //printf ("%lld\n", per_num);
        if (per_num % m == 0) ans++;
        return ;
    }
    for (int i = 0; i < digit; i++) {
        if (flag[i]) continue;
        per_num = per_num * 10 + (num[i] - '0');
        flag[i] = 1;
        trackback(depth + 1, per_num);
        per_num = (per_num - (num[i] - '0')) / 10;
        flag[i] = 0;
    }
}

int main() {
    long long n;
    scanf ("%lld%lld", &n, &m);
    long long tmp = n;
    while (tmp) {
        num[digit++] = tmp % 10 + '0';
        tmp /= 10;
    }
    trackback(0, 0);
    printf ("%d\n", ans);
    return 0;
}
