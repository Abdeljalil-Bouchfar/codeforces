#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>


using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		string s;
		unordered_map <int, char> m;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (m.count(arr[i]))
			{
				if (m[arr[i]] != s[i])
				{
					cout << "NO" << endl;
					break;
				}
			}
			else
				m[arr[i]] = s[i];
			if (i + 1 == n)
				cout << "YES" << endl;
		}
	}
}