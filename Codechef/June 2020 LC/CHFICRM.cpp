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

	w(t){

		ll n;
		cin>>n;
		vector<ll> v(n);
		ll size = v.size();
		for(ll i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		ll sum = 0;
		ll cnt = 0;
		for(ll i = 0; i < n; i++)
		{
			if(v[i] == 5)
			{
				sum = sum + v[i];
				cnt++;
			}

			if(v[i] == 10)
			{
				sum = sum - 5;
				if(sum < 0 && i != size - 1)
				{
					cnt--;
				}
				if((sum >= 0) && i != size - 1)
				{
					cnt++;
				}
				if(((sum > 0) || (sum == 0)) && (i == size - 1))
				{
					cnt++;
				}
			}

			if(v[i] == 15)
			{
				sum = sum - 10;
				if(sum < 0 && i != size - 1)
				{
					cnt--;
				}
				if((sum >= 0) && i != size - 1)
				{
					cnt++;
				}
				if(((sum > 0) || (sum == 0)) && (i == size - 1))
				{
					cnt++;
				}
			}
		}

		if(cnt == size)	cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}

	return 0; 
}
