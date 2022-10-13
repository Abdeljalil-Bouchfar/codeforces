#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, f = 0;
		cin >> i;
		vector<int> arr;
		for (int j = 0; j < i; j++)
		{
			int n;
			cin >> n;
			if (f == 0)
			{
				if (!arr.empty() && find(arr.begin(), arr.end(), n) != arr.end())
				{
					f = 1;
				}
				else
					arr.push_back(n);
			}
		}
		cout << (f == 1 ? "NO" : "YES") << endl;
	}
}

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