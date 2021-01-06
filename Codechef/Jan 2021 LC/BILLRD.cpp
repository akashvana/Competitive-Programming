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

		int n, k, x, y;
		cin>> n >> k >> x >> y;
		
		vector<pair<int, int >> v;

		if(x == y){
			cout<<n<< " "<<n<<endl;
		}
		else{
			
			if(x < y){
				v.pb(mp(x + n - y, n));
				v.pb(mp(n, n - y + x));
				v.pb(mp(y-x, 0));
				v.pb(mp(0, y-x));
			}

			else{
				v.pb(mp(n, y + n - x));
				v.pb(mp(y + n - x, n));
				v.pb(mp(0, x-y));
				v.pb(mp(x-y, 0));
			}

			cout<<v[(k-1) % 4].first<<" "<<v[(k-1) % 4].second<<endl;
			
		}
	}


	return 0;
}
