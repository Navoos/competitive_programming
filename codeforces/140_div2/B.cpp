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
	int size;cin >> size;
	VI vec(size);
	map<int, int> a1;
	map<int, int> a2;
	FOR(i, 0, size, 1)
	{
		cin >> vec[i];
		a1[vec[i]] = i + 1;
		a2[vec[i]] = size - i;
	}
	int m;cin >> m;
	long long a, b;
	a = b = 0;
	for (int i =0;i < m;i += 1)
	{
		int q;cin >> q;
		a += a1[q];
		b += a2[q];
	}
	cout << a << " " << b << endl;
}
