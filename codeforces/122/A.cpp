#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	std::regex pattern("[47]*");
    ll n;
	cin >> n;
	if (regex_match(to_string(n), pattern))
	{
		cout << "YES\n";
    	return 0;
	}
	for(ll i = 4; i <= n; i++)
	{
		if (regex_match(to_string(i), pattern) && n % i == 0)
		{
			cout << "YES\n";
    		return 0;
		}
	}
	cout <<  "NO\n";
}