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
    	int t;cin >> t;
    	while (t--)
    	{
    		int rooms;cin >>rooms;
    		VI vec(rooms);
    		FOR(i, 0, rooms, 1)
    			cin >> vec[i];
    		long long ans = 0;
    		for (int i = 0;i < rooms;i += 1)
    		{
    			if (i < rooms - 1 && vec[i + 1] == 0)
    			{
    				if (vec[i] != 0)
    				{
    					vec[i] -= 1;
    					vec[i + 1] += 1;
    					ans += 1;
    				}
    			}
    		}
    		for (int i = 0;i < rooms - 1; i += 1)
    		{
    			ans += vec[i];
    		}
    		cout << ans << endl;
    	}
    }
