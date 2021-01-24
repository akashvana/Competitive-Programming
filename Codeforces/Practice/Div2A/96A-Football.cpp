#include<bits/stdc++.h>
using namespace std;

/*****All definitions*******/
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
/***************************/

int main()

{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    int count = 1;
    int total = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else count = 1;
        total = max(total, count);
    }
    if (total >= 7 )
    {
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";

    return 0;
}
