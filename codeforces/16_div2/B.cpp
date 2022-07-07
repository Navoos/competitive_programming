/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhoudr <yakhoudr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:46:38 by yakhoudr          #+#    #+#             */
/*   Updated: 2022/06/21 19:46:38 by yakhoudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

bool cmp(pair<int , int>& a,
         pair<int , int>& b)
{
    return a.second < b.second;
}
  
// Function to sort the map according
// to value in a (key-value) pairs
void sort_(map<int,  int>& M)
{
  
    // Declare vector of pairs
    vector<pair<int, int>> A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
}

int main()
{
	cin.tie(0);cout.tie(0);
	int can_carry, containers;
	cin >> can_carry >> containers;
	map<int, int> m;
	for (int i = 0;i < containers;i += 1)
	{
		int a, b;
		cin >> a >> b;
		m[i] = a * b;
	}
	sort_(m);
	int ans = 0;
	auto i = m.begin();
	while (can_carry -- && ++i != m.end())
		ans += i->second;
	cout << ans << endl;
}
