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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int x, y, z;
		vector<int> v1, v2, v3;
		for (int i = a; i < b; i++)
		{
			v1.push_back(i);
		}
		for (int i = b; i < c; i++)
		{
			v2.push_back(i);
		}
		for (int i = c; i < d; i++)
		{
			v3.push_back(i);
		}

		for (auto i : v1)
		{
			for (auto j : v2)
			{
				for (auto k : v3)
				{
					if (v1[i] + v2[j] > v3[k]) {
						x = v1[i];
						y = v2[j];
						z = v3[k];
						break;
					}
				}
			}
		}
		cout << x << " " << y << " " << z;
	}
	return 0;
}
