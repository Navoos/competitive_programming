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
	int n;int q;cin >> n >> q;
	int rot = 0;
	string str;
	cin >> str;
	while (q--)
	{
		int a, b;
		cin >> a >> b;
		if (a == 1)
		{
			rot += b;
		}
		else if (a == 2)
		{
			// if ((b + rot) % str.length() == 0)
			//   cout << str[((b + rot) % str.length())] << endl;
			cout << str[((b + rot) % str.length())] << endl;
		}
	}
}
