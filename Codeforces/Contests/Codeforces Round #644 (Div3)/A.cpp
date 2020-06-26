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

		ll a, b, c, d;
		cin>>a>>b;
		if(a > b){
			 c = b * 2;
			 if(c <= a)
			 	cout<<a*a<<"\n";
			 else cout<<c*c<<"\n";
		}
		if(a == b)
			cout<<(a*2) * (a*2)<<"\n";
		if(a < b){
			d = a * 2;
			if(d <= b)
				cout<<b*b<<"\n";
			else cout<<d*d<<"\n";
		}
	}

	return 0;
}
