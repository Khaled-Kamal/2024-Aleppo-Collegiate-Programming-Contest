#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {

       int q ; cin >> q ;
       while(q--)
       {
           int sum = 0 ;
           vector<int> a(8);
           for (int i = 0; i < 8  ; ++i) {
             cin >> a[i];
             sum+=a[i];
           }
           cout << sum << '\n';
       }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1; cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
      // if (i < tc) cout << '\n';
    }
    return 0;
}