#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    string s;
    cin >> s;
    bool all = true;
	for (int i = 1 ; i < s.length(); i++)
        if (islower(s[i]))
        {
            all = !all;
            break;
        }
    if (all)
    {
        if (islower(s[0]))
            s[0] = toupper(s[0]);
        else
            s[0] = tolower(s[0]);
        for (int i = 1 ; i < s.length(); i++)
            s[i] = tolower(s[i]);
    }
    cout << s;
    return 0;
}