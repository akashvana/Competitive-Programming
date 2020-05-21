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
	w(t) {
		ll n;
		cin >> n;
		vector<int> v;
		int a;
		while (true)
		{
			a = n % 10;
			v.push_back(a);
			n = n / 10;
			if (n == 0) break;
		}
		ll k = v.size();
		ll cnt = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != 0)
				cnt++;
		}
		cout << cnt << "\n";
		vector<int> u;

		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != 0)
			{
				double b = v[i] * pow(10, i);
				u.push_back(b);
			}

		}
		reverse(u.begin(), u.end());
		for (int i = 0; i < u.size(); i++)
		{
			cout << u[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
