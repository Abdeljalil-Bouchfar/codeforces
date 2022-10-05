#include <iostream>

using namespace std;

int main()
{
	int n, h, w = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		int g;
		cin >> g;
		w++;
		if (g > h)
			w++;
	}
	cout << w << endl;
}