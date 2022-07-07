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
	int t;
	cin >> t;
	while (t--)
	{
		int rows, cols; cin >> rows >> cols;
		long long ans1, ans2;
		ans1 = ans2 = 0;
		for (int i = 1;i <= cols;i += 1)
		{
			ans1 += i;
		}
		for (int i = 2; i <= rows;i += 1)
		{
			ans2 += (cols * i);
		}
		cout << ans1 + ans2 << endl;
	}
}
