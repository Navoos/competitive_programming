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
	int n;
	cin >> n;
	while (n--)
	{
		long long size, z;
		cin >> size >> z;
		long long  tmp, ma;
		cin >> ma;
		ma = std::max<long long>(0, ma | z);
		FOR(i, 1, size, 1)
		{
			cin >> tmp;
			ma = std::max<long long>(tmp | z, ma);
		}
		cout << ma << endl;
	}
}
