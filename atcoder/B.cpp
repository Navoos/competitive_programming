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
	vector<string>str(n);
	vector<string> anss;
	int  i = 0;
	while (i < n)
		cin >> str[i++];
	int m = 0;
	string ans = "";
	int sx = -1;
	int sy = -1;
	for (int i = 0;i < n;i += 1)
	{
		for (int j = 0;j < str[i].length();j += 1)
		{
			m = max(str[i][j] - 48, m);
			sx = j;
			sy = i;
		}
	}
	ans += m + 48;n--;
	int hop = -1;
	while (n--)
	{
		int tmpx = sx;
		int tmpy = sy;
		if (sx > 0 && str[sy][sx-1] - 48 > hop)
		{
			hop = str[sy][sx-1] - 48;

			tmpx = sx - 1;
		}
		else if (str[sy][n - 1] - 48 > hop)
		{
			hop = str[sy][n - 1] - 48;
			tmpx = n - 1;
		}
		if (sx < n - 1 && str[sy][sx + 1] -48 > hop)
		{
			hop = str[sy][sx + 1] - 48;
			tmpx = sx + 1;
		}
		else if ( str[sy][0] - 48 > hop) 
		{
			hop = str[sy][0] - 48;
			tmpx = 0;
		}
		if (sy > 0 && str[sy - 1][sx] - 48 > hop)
		{
			hop = str[sy - 1][sx] - 48;
			tmpy -= 1;
		}
		else if (str[n - 1][sx] - 48 > hop)
		{
			hop = str[n - 1][sx] - 48;
			tmpy = n - 1;
		}
		if (sy < n - 1 && str[sy + 1][sx] - 48 > hop)
		{
			hop = str[sy + 1][sx] - 48;
			tmpy += 1;
		}
		else if (str[0][sx] - 48 > hop)
		{
			hop = str[0][sx] - 48;
			tmpy = 0;
		}
		if (hop != -1)
		{
			sx = tmpx;
			sy = tmpy;
			ans += hop + 48;
		}
	}
	cout << ans;
}
