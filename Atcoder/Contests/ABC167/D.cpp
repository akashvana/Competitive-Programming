/******* all required header files *******/
#include<iostream>
#include<algorithm>
#include<cmath>
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

/*****All definitions*******/
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
#define ll long long int
/***************************/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, k;
	cin >> n >> k;
	vector<int> v(n);
	int index;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] == 1)
			index = i;
	}
	vector<int> u;
	auto itr = v.begin() + index;
	int a;
	if (itr == v.end())
		itr = v.begin();
	while (k--)
	{
		auto i = itr;
		a = *i;
		if (i == v.end())
			i = v.begin();
		u.push_back(a);
		i++;
	}
	cout << u[k];
	return 0;
}
