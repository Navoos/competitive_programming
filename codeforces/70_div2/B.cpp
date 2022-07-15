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
	int n;cin >> n;
	string str = "ROYGBIV";
	int last[28], first[28];
	FOR(i, 0, 7, 1)
	{
		first[str[i] - 'A'] = i, last[str[i] - 'A'] = i;
	}
	FOR(i, 7, n, 1)
	{
		FOR(j, 0, 7, 1)
		{
			int p1 = last[str[j] - 'A'], p2 = first[str[j] - 'A'] ;
			bool found = 0;
			if (i - p1 + 1 <= 4)
				found = 1;
			if ((n - i) + (1 + p2) <= 4)
				found = 1;
			if (!found)
			{
				str.push_back(str[j]);
				last[str[j] - 'A'] = i;
				break;
			}
		}
	}
	cout << str << endl;
}
