#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		//cout << '1' << endl;
		if (abs(a - 1) < abs(b - c) + abs(c - 1))
			cout << '1' << endl;
		else if (abs(a - 1) > abs(b - c) + abs(c - 1))
			cout << '2' << endl;
		else
			cout << '3' << endl;
	}
}