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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,val;
    cin>>n;
    int c25,c50,c100;
    c25 = c50 = c100 =0;
    FOR(i,n){
        cin>>val;
        if(val == 25){
            c25++;
        }
        else if(val==50){
            if(c25>=1){
                c50++;
                c25--;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        else if(val==100){
            if(c50>=1 && c25>=1){
                c50--;
                c25--;
            }
            else if(c25>=3){
                c25 -=3;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}