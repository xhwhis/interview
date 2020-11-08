#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> flags = {"", "十", "百", "千", "万", "十", "百", "千", "亿", "十", "百", "千", "兆", "十", "百", "千"};
vector<string> han = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};

string to_han(string num) {
    string ans;
    for (int i = num.size() - 1, j = 0; i >= 0; i--, j++) {
        if (num[i] == '0') {
            if (j == 4 || j == 8 || j == 12) ans = flags[j] + ans;
            else ans = han[0] + ans;
            while (i > 1 && num[i] == '0') i--, j++;
        } else {
            if (num[i] == '1' && flags[j] == "十") ans = "十" + ans;
            else ans = han[num[i] - '0'] + flags[j] + ans;
        }
    }
    return ans;
}

int main() {
    string num;
    cin >> num;
    cout << to_han(num) << endl;
    return 0;
}
