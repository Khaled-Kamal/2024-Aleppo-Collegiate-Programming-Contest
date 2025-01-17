#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {

    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int ans{};
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
        ans = (ans + a[i]) % 9;
    }
    int res= 1;
    for (int i = 0; i < n; ++i) {
        res = (res * 3) % 9;
    }
    int mod = (ans * res) % 9;
    int sum{};
    for (int i = 0; i < m; ++i) {
       sum = (sum + a[i]) % 9;
    }
    int hide = (mod- sum + 9) % 9;
    if (hide == 0) {
        hide = 9; // range [1, 9]
    }
    cout << hide ;
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