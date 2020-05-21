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

	ll a, b, c, k;
	cin >> a >> b >> c >> k;
	if (a >= k)
	{
		cout << a;
		return 0;
	}
	ll sum = 0;
	ll rem;
	ll rem2;
	if (a < k)
	{
		sum = sum + a;
		rem = k - a;
		if (rem <= b)
		{
			cout << sum;
			return 0;
		}
		if (rem > b)
		{
			rem2 = k - (a + b);
			cout << sum + rem2 * -1;
			return 0;
		}
	}
	return 0;
}

