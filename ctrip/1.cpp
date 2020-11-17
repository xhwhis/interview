#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int ans = -1;

void backtrack(string code, int depth, string val) {
    if (depth >= code.size()) {
        cout << val << endl;
        ans++;
    }
    for (int i = depth; i < code.size(); i++) {
        string tmp = code.substr(depth, i - depth + 1);
        if (tmp[0] == '0' && tmp.size() > 1) continue;
        if (stoi(tmp) > 25) continue;
        backtrack(code, i + 1, val + " "+ tmp);
    }
}

int main() {
    string str, code = "", val = "";
    cin >> str;
    for (char c : str) {
        code += to_string(c - 'A');
    }
    backtrack(code, 0, val);
    printf ("%d\n", ans);
    return 0;
}
