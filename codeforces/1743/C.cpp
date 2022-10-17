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
		cin >> n >> s;
		int res = 0;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
		{
			int min = -1;
			if (s[i] == '0')
			{
				for (int j = i + 1; j < n; j++)
				{
					if (s[j] == '0')
						break;
					if (min == -1 || arr[min] > arr[j])
						min = j;
				}
				if (min != -1 && arr[i] > arr[min] && s[min] == '1')
				{
					s[min] = '0';
					s[i] = '1';
				}
			}
			if (s[i] == '1')
				res += arr[i];
		}
		cout << res << endl;
	}
}