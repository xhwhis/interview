#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int main () {
    string s;
    cin >> s;
    int cnt_a = 0, cnt_A = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cnt_a++;
        } else {
            cnt_A++;
        }
    }
    printf ("%d\n", abs(cnt_a - cnt_A) >> 1);
    return 0;
}
