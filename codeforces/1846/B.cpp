#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
void solve()
{
    string b[3];
    
    cin >> b[0] >> b[1] >> b[2];
    string ans = "DRAW";
    for (int i = 0; i < 3; i++)
    {
        if (b[i][0] != '.' && b[i][0] == b[i][1] && b[i][1] == b[i][2])
                ans = b[i][0];
        else if (b[0][i] != '.' && b[0][i] == b[1][i] && b[1][i] == b[2][i])
                ans = b[0][i];
    }
    if ((b[0][0] != '.' && b[0][0] == b[1][1] && b[1][1] == b[2][2]))
        ans = b[0][0];
    if ((b[0][2] != '.' && b[0][2] == b[1][1] && b[1][1] == b[2][0]))
        ans = b[0][2];
    cout << ans << endl;
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