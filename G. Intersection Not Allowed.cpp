#include <bits/stdc++.h>
using namespace std;
#define int long long

bool f(int n, int q, vector<tuple<int, int, int>> &a) {
    map<int, vector<pair<int, int>>> b;

    for (auto &[x, l, r] : a) {
        b[x].emplace_back(l, r);
    }
    vector<pair<int, int>> c;
    for (auto &[d, e] : b) {
        sort(e.begin(), e.end());
        for (int i = 1; i < e.size(); ++i) {
            if (e[i].first <= e[i - 1].second) {
                c.push_back(e[i]);
                c.push_back(e[i - 1]);
            }
        }
    }
    if (c.empty()) {
        return true;
    }
    for (auto &[x, l, r] : a) {
        map<int, vector<pair<int, int>>> g = b;
        g[x].erase(
                remove(g[x].begin(), g[x].end(), make_pair(l, r)),
                g[x].end()
        );

        bool h = true;
        for (auto &[d, e] : g) {
            sort(e.begin(), e.end());
            for (int i = 1; i < e.size(); ++i) {
                if (e[i].first <= e[i - 1].second) {
                    h = false;
                    break;
                }
            }
            if (!h) break;
        }
        if (h) return true;
    }

    return false;
}

void solve() {

    int n, q;
    cin >> n >> q;

    vector<tuple<int, int, int>> a(q);
    for (int i = 0; i < q; ++i) {
        int x, l, r;
        cin >> x >> l >> r;
        a[i] = {x, l, r};
    }
    cout << (f(n, q, a) ? "YES" : "NO");
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
       if (i < tc) cout << '\n';
    }
    return 0;
}