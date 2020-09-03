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
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(3);

	for(int i = 0; i < 3; i++){
		cin>>v[i];
	}	

	ll cnt = 0;
	while(true){

		sort(v.begin(), v.end());
		if(v[0] == v[1] && v[1] == v[2]){
			cout<<cnt;
			return 0;
		}

		else if(v[0] < v[2] && v[1] < v[2]){
				v[0] = v[0] + 1;
				v[1] = v[1] + 1;
		}
		else if(v[0] < v[1] && v[1] == v[2]){
				v[0] = v[0] + 2;
		}
		
		++cnt;

	}

	return 0;
}
