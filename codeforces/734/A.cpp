#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n, cin.ignore();
	getline(cin, s);
	int a = 0, d = 0;
	while (n--)
		s[n] == 'A' ? a++ : d++;
	cout << (a == d ? "Friendship" : (a > d ? "Anton" : "Danik")) << endl;
}