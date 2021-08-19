#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
 
using namespace std;
 
string preprocess(string s) {
    string ts = "";
    string s1807 = "x1807";
    bool find_one = false;
    for(int i = 0; i < s.size(); i++) {
        if(!find_one && s[i] == '1') {
            find_one = true;
        }
        if(find_one && s1807.find(s[i]) != string::npos) {
            ts += s[i];
        }
    }
    return ts;
}
 
int main() {
    string s;
    getline(cin, s);
    string s1807 = "x1807";
    s = preprocess(s);
    vector<vector<int>> dp(s.size() + 1, vector<int>(s1807.size(), 0));
    for(int i = 0; i < s.size(); i++) {
        for(int j = 1; j < s1807.size(); j++) {
            if(s[i] == s1807[j]) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j-1]) + 1;
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }
    cout << dp[s.size()][s1807.size() - 1] << endl;
    return 0;
}
