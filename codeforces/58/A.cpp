#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	string s, t = "hello";
    ll n;
	cin >> s;
	int i, j;
	for(i = 0, j = 0; i < s.length() && j < t.length(); i++)
	{
		if(t[j] == tolower(s[i]))
			j++;
	}
	cout << ((j == t.length()) ? "YES\n" : "NO\n");
    return 0;
}