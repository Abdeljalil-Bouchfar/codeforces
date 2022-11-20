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
	cout << (s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "YES\n" : "NO\n");
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
		solve(t);
	return 0;
}