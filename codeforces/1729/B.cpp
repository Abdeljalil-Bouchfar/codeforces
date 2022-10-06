#include <iostream>

using namespace std;

int main()
{
	int q;
	cin >> q;
	while (q--)
	{
		int n;
		string s;
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			if (i + 2 > n || s[i + 2] != '0' || (i + 3 < n && s[i + 2] == '0' && s[i + 3] == '0'))
			{
				char c = s[i] + '0';
				cout << c;
			}
			else
			{
				char c = atoi(s.substr(i, 2).c_str()) + 96;
				cout << c;
				i += 2;
			}
		}
		cout << endl;
	}
}