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
		int size; cin >> size;
		VI vec(size);
		FOR(i, 0, size, 1)
			cin >> vec[i];
		FOR(i, 0, size, 1)
		{
			int ans = 0;
			FOR(j, 0, size, 1)
			{
				if (j == 0 && i != j)
					ans = vec[j];
				else if (i != j)
					ans ^= vec[j];
			}
			if (ans == vec[i])
			{
				cout << ans << endl;
				break;
			}

		}
	}
}
