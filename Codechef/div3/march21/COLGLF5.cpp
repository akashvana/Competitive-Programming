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

		ll f_events, c_events;
		cin>>f_events>>c_events;
		ll total = f_events + c_events;
		vector<ll> f(f_events);
		vector<ll> c(c_events);
		vector<pair<ll, char>  > tot(total);

		for(int i = 0; i < f.size(); i++){
			cin>>f[i];
			tot.pb(pair<ll, char>(f[i], 'f'));
		}

		for(int i = 0; i < c.size(); i++){
			cin>>c[i];
			tot.pb(pair<ll, char>(c[i], 'c'));
		}

		tot.pb(pair<ll, char>(0, 'f'));

		ll cnt = 0;

		sort(tot.begin(), tot.end());

		for(int i = 0; i < tot.size() - 1; i++){
			
			if(tot[i].second != tot[i+1].second){
				cnt++;
			}else continue;
		}

		cout<<cnt - 1<<endl;

	}
	
	
	return 0;
}
