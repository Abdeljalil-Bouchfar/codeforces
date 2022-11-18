#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
 
 
using namespace std;
 
void solve(long long t)
{
	string s;
	cin >> s;
	if (s == "Yess" || s == "YES" || s == "se")
	{
		cout << "NO\n";
		return ;
	}
	string sub = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
	for(int i = 0; i < sub.size(); i++)
	{
		int j = 0;
		while (j < s.size() && s[j] == sub[i + j])
			j++;
		if (j == s.size())
		{
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
		solve(t);
	return 0;
}