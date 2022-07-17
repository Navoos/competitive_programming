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



long long bin_expo(int base, int exp, int mod)
{
	long long res = 1;
	base = base % mod;
	while (exp)
	{
		if (exp & 1)
			res = res * base % mod;
		base = base * base % mod;
		exp >>= 1;
	}
	return res;
}

int main()
{
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
	int b, p, m;
	while (cin >> b >> p >> m)
		cout << bin_expo(b, p);
}
