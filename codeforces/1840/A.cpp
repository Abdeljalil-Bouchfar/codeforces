#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    string s, a;
    cin >> s;
    
    char pre = '-';
    for (char &c : s)
    {
        if (c == pre)
        {
            cout << c;
            pre = '-';
        }
        else if (pre == '-')
            pre = c;
    }

    cout  << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}