#include <iostream>
using namespace std;

int main()
{
	// your code goes
	int t;
	cin >> t;
	while (t--)
	{
		int count = 0;
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			count += a[i];
		}
		if (count % 2 != 0)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
