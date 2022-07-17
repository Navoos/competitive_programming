#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;
#define FOR(i, begin, end, in) for (int i=begin ; i<end ; i+=in)
#define RFOR(i, begin, end, in) for (int i=begin ; i>=end ; i-=in)
#define ll long long
typedef vector<ll> VI;

int main()
{
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
	int	t;cin >> t;
	while (t--)
	{
		int size;cin >> size;
		VI vec(size);
		FOR(i, 0, size, 1)
			cin >> vec[i];
		bool ans = true;
		int count = 0;
		for (int i = size - 1;i > 1;i -= 1)
		{
			if (vec[i] - vec[i -1] == 0)
				count += 1;
			if (vec[i] - vec[i - 1] < 0)
			{
				ans = false;
				break;
			}

		}
		if (ans || count >= size - 1) cout << "YES";
		else cout << "NO";
		cout << endl;

	}
}
