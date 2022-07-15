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
	string str;cin >> str;
	vector<char> left;
	vector<char> right;
	FOR(i, 0, size, 1)
	{
		if (i % 2 == 0)
			left.insert(left.begin(),str[i]);
		else
			right.insert(right.begin(), str[i]);
	}
	FOR(i, 0, right.size(), 1)
		cout << right[i];
	FOR(i, 0, left.size(), 1)
		cout << left[i];
	cout << endl;
}
