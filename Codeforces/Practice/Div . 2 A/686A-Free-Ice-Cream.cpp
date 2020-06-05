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

	ll n, d;
	cin>>n>>d;
	ll cnt = 0;
	ll sum = d;
	vector<ll> v(n);
	vector<char> u(n);
	ll j = 0;
	for(ll i = 0; i < n; i++)
	{
		cin>>u[i]>>v[i];
	}

	for(ll i = 0; i < n; i++)
	{
		if(u[i] == '+')
		{
			sum = sum + v[i];
		}
		if(u[i] == '-')
		{
			if(sum >= 	v[i])
			{
				sum -= v[i];
			}
			else 
			{
				cnt++;
			}
		}
	}
	cout<<sum<<" "<<cnt;
	return 0;	

}
