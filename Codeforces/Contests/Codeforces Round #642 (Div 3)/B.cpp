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

	w(t) {
		ll n, k;
		cin >> n >> k;
		vector<int> v1(n);
		vector<int> v2(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v1[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> v2[i];
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end(), greater<int>());
		for (int i = 0; i < k; i++)
		{
			if (v2[i] > v1[i])
				v1[i] = v2[i];
			else continue;
		}
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum = sum + v1[i];
		}
		cout << sum << "\n";
	}
	return 0;
}
