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
    string s= "hello";
    int j = 0, flag = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == s[j]) {
            j++;
            flag++;
            
            if (flag == 5) {
                break;
            }
        }
    }
    if (flag == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

