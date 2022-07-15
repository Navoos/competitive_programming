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
#define RFOR(i, begin, end, in) for (int i=begin ; i>=end ; i-=in)
typedef vector<int> VI;

int *pre_kmp(string pattern)
{
	int size = pattern.size();
	int *pie=new int [size];
	pie[0] = 0;
	int k=0;
	for(int i=1;i<size;i++)
	{
		while(k>0 && pattern[k] != pattern[i] )
		{
			k=pie[k-1];
		}
		if( pattern[k] == pattern[i] )
		{
			k=k+1;
		}
		pie[i]=k;
	}
	
	return pie;
}

int	kmp(string text,string pattern)
{
	int* pie=pre_kmp(pattern);
	int matched_pos=0;
	for(int current=0; current< text.length(); current++)
	{
		while (matched_pos > 0 && pattern[matched_pos] != text[current] )
			matched_pos = pie[matched_pos-1];
			
		if(pattern[matched_pos] == text[current])
			matched_pos = matched_pos+1;
			
		if( matched_pos == (pattern.length()) )
		{
			return (1);
			matched_pos = pie[matched_pos-1];
		}
	}
	return (0);
}

int main()
{
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
	int n;cin >> n;
	while (n--)
	{
		int size;cin >> size;
		vector<string>vec(size);
		for(i, 0, size,1)
			cin >> vec[i];
		FOR(k, 0, size, 1)
		{
			FOR(j, 0, size , 1)
			{
				if (k != j)
				{
					
				}
			}
		}
			cout << endl;
		}
}
