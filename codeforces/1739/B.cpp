#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
  
int main()
{
	int i;
	int c;
	cin >> i;
	c = i;

	vector<vector<int> > in;
	vector<vector<int> > out;
	while (i)
	{
		int j;
		cin >> j;
		vector<int> arr;
		while (j)
		{
			int in;
			cin >> in;
			arr.push_back(in);
			j--;
		}
		in.push_back(arr);
		i--;
	}
	i = 0;
	int f[c];
	while (i < c)
	{
		int pre = in[i][0];
		f[i] = 0;
		for (int k = 1; k < in[i].size(); k++)
		{
			int ai = abs((-1 * pre) - in[i][k]);
			int ai1 = pre;
			int di = in[i][k];
			if (di + ai1 != ai1 - di && di + ai1 >= 0 && ai1 - di >= 0)
			{
				f[i] = 1;
				break;
			}
			pre = abs((-1 * pre) - in[i][k]);
		}
		i++;
	}

	i = 0;
	while (i < c)
	{
		int pre = in[i][0];
		if (f[i])
			cout << "-1";
		for (int k = 0; !f[i] && k < in[i].size(); k++)
		{
			if (k == 0)
				cout << in[i][k];
			else
			{
				cout << ' ' << abs((-1 * pre) - in[i][k]);
				pre = abs((-1 * pre) - in[i][k]);
			}
		}
		cout << endl;
		i++;
	}
}
// ai = di + prv | ai = - di + prv
// di = |ai - ai-1|
// ai = |-ai-1 - di|