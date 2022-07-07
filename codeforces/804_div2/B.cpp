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
typedef vector<vector<int> > VII;



VII	check_ans(VII v1, VII v2)
{
	for (int i = 0;i < v1.size() ;i += 2)
	{
		for (int j = 0; j < v1[0].size();j += 2)
		{
			if (i == 0 && j == 0)
			{
				if (v1[i][j + 1] == v1[i][j] || v1[i+1][j] == v1[i][j])
					return (v2);
			}
			else if (i == 0 && j == 1)
			{
				if (v1[i][j] == v1[i][j-1] || v1[i][j] == v1[i + 1][j])
					return (v2);
			}
			else if (i == 1 && j == 0)
			{
				if (v1[i][j] == v1[i - 1][j] || v1[i][j] == v1[i][j + 1])
					return (v2);
			}
			else if (i == 1 && j == 1)
			{
				if (v1[i][j] == v1[i - 1][j] || v1[i][j] == v1[i][j-1])
					return (v2);
			}
		}
	}
	return (v1);
}

void print_arr(VII vec)
{
	for (int i = 0;i < vec.size();i += 1)
	{
		for (int j = 0; j < vec[0].size();j += 1)
		{
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
	int n;cin >> n;
	while (n--)
	{
		int rows, cols; cin >> rows >> cols;
		VII ans1(rows, VI(cols, 0));
		VII ans2(rows, VI(cols, 0));
		ans1[0][0] = 1;
		ans1[1][1] = 1;
		ans2[0][1] = 1;
		ans2[1][0] = 1;
		for (int i = 0;i < ans1.size();i += 2)
		{
			int flip = 0;
			for (int j = 2;j < ans1.size();j += 2)
			{
			}
		}
		print_arr(check_ans(ans1, ans2));
	}
}
