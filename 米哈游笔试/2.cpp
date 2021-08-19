#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

struct Game {
    int t;
    int w;
    Game(int tt, int tw) : t(tt), w(tw) {};
    bool operator<(const Game& other) const {
        // 让优先队列从小到大排序
        return w > other.w;
    }
};

bool t_cmp(const Game& g1, const Game& g2) {
    // 按ddl排序
    return g1.t < g2.t;
}

void input(int n, vector<Game>& all, vector<int>& ts, vector<int>& ws) {
    for(int j = 0; j < n; j++) {
        int t;
        cin >> t;
        ts.push_back(t);
    }
    for(int j = 0; j < n; j++) {
        int w;
        cin >> w;
        ws.push_back(w);
    }
    for(int j = 0; j < n; j++) {
        all.push_back(Game(ts[j], ws[j]));
    }
}

long long max_value_games(const vector<Game>& all) {
    long long ans = 0;
    priority_queue<Game> take;
    for(int i = 0; i < all.size(); i++) {
        if(all[i].t <= take.size()) {
            if(take.top().w < all[i].w) {
                ans = ans - take.top().w * 2 + all[i].w;
                take.pop();
                take.push(all[i]);
            }
        } else {
            ans += all[i].w;
            take.push(all[i]);
        }
    }
    return ans;
}

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int n;
        cin >> n;
        vector<Game> all;
        vector<int> ts;
        vector<int> ws;
        input(n, all, ts, ws);
        sort(all.begin(), all.end(), t_cmp);
        cout << max_value_games(all) << endl;
    }
    return 0;
}