#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, ans = 0;
    cin >> n;
    unordered_map<string, int> cash;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (cash.count(s))
            cout << s << cash[s]++ << endl;
        else
        {
            cash[s] = 1;
            cout << "OK\n";
        }
    }
    return 0;
}