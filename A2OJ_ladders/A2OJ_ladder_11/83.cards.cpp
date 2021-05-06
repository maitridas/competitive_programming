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
#define pii pair<int,int>
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    int val;
    vv<pii> v;
    cin>>n;
    FOR(i,2*n){
        cin>>val;
        v.pb({val,i+1});
    }
    sort(v.begin(),v.end());
    int count =0,flag=1;
    int comp = imn;
    for(auto const &x:v){
        if(x.first != comp){
            comp = x.first;
            if(count%2!=0){
                flag=0;
                break;
            }
            count =1;
        }
        else{
            count++;
        }
    }
    if(flag==0){
        cout<<-1;
    }
    else{
        for(int i=0; i<v.size(); i+=2){
            cout<<v[i].second<<" "<<v[i+1].second<<endl;
        }
    }
}