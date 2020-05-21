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
	ll n, m;
	cin >> n >> m;
	vector<ll> v(m);
	for (int i = 0; i < m; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll total = *v.end();
	for (int i = 0; i < m - n + 1; i++)
	{
		total = min(total, v[i + n - 1] - v[i]);
	}
	cout << total;
	return 0;
}
