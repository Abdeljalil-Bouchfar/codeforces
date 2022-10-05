#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int t = 0;
		for (int j = 0; j < 3; j++)
		{
			int k;
			cin >> k;
			t += k;
		}
		if (t > 1)
			res++;
	}
	cout << res << endl;
}