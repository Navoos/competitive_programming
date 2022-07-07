#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
	int n, a;
	cin >> n >> a;
	int arr[n + 1];
	for (int i = 1;i <= n;i += 1)
	{
		cin >> arr[i];
	}
	int ans = 0;
	for (int i = 1; i <= n;i += 1)
	{
		if (arr[i] == 1)
		{
			int dis = i - a;
			int j = a - dis;
			if (j > n || j < 1 || arr[i] == arr[j])
				ans += 1;
		}
	}
	cout << ans << endl;
}
