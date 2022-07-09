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
		vector<vector<int> > v(2, vector<int> (2));
		int ans = 0;
		for (int i = 0;i < 2;i += 1)
		{
			for (int j = 0;j < 2;j += 1)
			{
				cin >> v[i][j];
				if (v[i][j] == 1)
					ans += 1;
			}
		}
		if (ans == 4)
			cout << 2;
		else if (ans < 4 && ans > 0)
			cout << 1;
		else
			cout << 0;
		cout << endl;
	}
}
