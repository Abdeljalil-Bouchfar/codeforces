#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

bool is_valid_line(vector<string> m, char h, int r, int c)
{
	if (h == 'R')
	{
		for (auto r : m[r])
		{
			if (r != h)
				return false;
		}
	}
	else
	{
		for (int i = 0; i < 8; i++)
			if (m[i][c] != h)
				return false;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		vector<string> m;
		for (int j = 0; j < 8; j++)
		{
			string t;
			cin >> t;
			m.push_back(t);
		}
		int r = 0, b = 0;
		for (int j = 0; j < 8; j++)
		{
			for (int k = 0; k < 8; k++)
			{
				if (m[j][k] == 'R' && is_valid_line(m, 'R', j, k))
					r++;
				else if (m[j][k] == 'B' && is_valid_line(m, 'B', j, k))
					b++;
			}
		}
		cout << (r > b ? 'R' : 'B') << endl;
	}
}

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int i, f = 0;
// 		cin >> i;
// 		vector<int> arr;
// 		for (int j = 0; j < i; j++)
// 		{
// 			int n;
// 			cin >> n;
// 			if (f == 0)
// 			{
// 				if (!arr.empty() && find(arr.begin(), arr.end(), n) != arr.end())
// 				{
// 					f = 1;
// 				}
// 				else
// 					arr.push_back(n);
// 			}
// 		}
// 		cout << (f == 1 ? "NO" : "YES") << endl;
// 	}
// }

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int a, b, c;
// 		cin >> a >> b >> c;
// 		if ((a == b + c) || (b == a + c) || (c == (a + b)))
// 			cout << "YES" << endl;
// 		else
// 			cout << "NO" << endl;
// 	}
// }