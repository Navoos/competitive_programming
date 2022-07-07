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
#define RFOR(i, begin, end, in) for (int i=j ; i>=k ; i-=in)
typedef vector<int> VI;


int main()
{
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;cin >> a >> b;
		VI vec(a);
		FOR(i, 0, a, 1)
			cin >> vec[i];
		int ans = 0;
		if (b == 1)
			ans = (a - 1) / 2;
		else
		{
			FOR(i, 1, a - 1, 1)
			{
				if (vec[i - 1] + vec[i + 1] < vec[i])
					ans += 1;
			}
		}
		cout << ans << endl;
	}
}
