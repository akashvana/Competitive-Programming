/******* all required header files *******/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
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
#define vc vector<char>
#define mp make_pair
#define ll long long int
#define pb push_back
#define F first
#define S second
/***************************/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin>>n;
	vector<ll> v(n);
	for(ll i = 0; i < n; i++)
	{
		cin>>v[i];
	}


	ll ser = 0;
	ll dim = 0;
	auto it1 = v.begin();
	auto it2 = v.end() - 1;
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0)
		{
			if(*it1 > *it2)
			{
				ser = ser + *it1;
				it1++;
			}
			else
			{
				ser = ser + *it2;
				it2--;
			}
		}
		if(i % 2 != 0)
		{
			if(*it1 > *it2)
			{
				dim = dim + *it1;
				it1++;
			}
			else 
			{
				dim = dim + *it2;
				it2--;
			}
		}
	}
	cout<<ser<<" "<<dim;
	return 0;
}
