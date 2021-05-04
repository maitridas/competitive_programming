/********   All Required Header Files ********/
#include <iostream>
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
#include <cstdlib>

using namespace std;

#define FOR(i,n) for(int i=0;i<n;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define ll long long int
#define vi vector<int>
#define ii pair<int,int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pll pair<ll,ll>
#define cd complex<double> 
#define vv vector
#define imx INT_MAX
#define imn INT_MIN
#define lmx LLONG_MAX
#define lmn LLONG_MIN

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end()-n);
    sort(s.begin()+n,s.end());
    int flag=-1;
    if(s[0]>s[n]){
        flag=0;
    }
    else if(s[0]<s[n]){
        flag=1;
    }
    else{
        cout<<"NO";
        return 0;
    }
    FORE(i,1,n-1){
        if(flag==1){
            if(s[i]>=s[i+n]){
                cout<<"NO";
                return 0;
            }
        }
        else if(flag==0){
            if(s[i]<=s[i+n]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}