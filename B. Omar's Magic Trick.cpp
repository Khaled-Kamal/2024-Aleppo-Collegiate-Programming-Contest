#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
void solve() {
    int n, m; cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        int x; cin >> x;
        sum += x;
    }
    cout << 9 - sum%9 ;
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