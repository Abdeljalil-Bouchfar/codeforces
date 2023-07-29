#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    //ABAB
    bool ab = false, ba = false;
	for (int i = 1; i < s.size(); i++)
    {
        if (!ab && s[i - 1] == 'A' && s[i] == 'B')
            ab = true, i++;
        else if (!ba && s[i - 1] == 'B' && s[i] == 'A')
            ba = true, i++;
    }
    if (!ab || !ba)
    {
        ab = false, ba = false;
        for (int i = s.size() - 1; i > 1; i--)
        {
            if (!ab && s[i - 1] == 'A' && s[i] == 'B')
                ab = true, i--;
            else if (!ba && s[i - 1] == 'B' && s[i] == 'A')
                ba = true, i--;
        }
    }
    cout << (ab && ba ? "YES\n" : "NO\n");
    return 0;
}