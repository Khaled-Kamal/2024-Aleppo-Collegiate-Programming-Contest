#include <bits/stdc++.h>
#define Kareem              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define int long long
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
signed main()
{
    Kareem;
    file();
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        if(n%2==0)
        cout<<0<<'\n';
        else
        cout<<(n/2)+1<<'\n';
        
    }
    
    return 0;
}