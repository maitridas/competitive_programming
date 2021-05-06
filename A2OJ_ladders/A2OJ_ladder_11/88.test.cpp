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
#define cdd complex<double> 
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
    string s[4];
    FOR(i,4){
        cin>>s[i];
    }
    int ch=0,cd=0;
    FOR(i,3){
        FOR(j,3){
            FORE(k,i,i+1){
                FORE(l,j,j+1){
                    if(s[k][l]=='#'){
                        ch++;
                    }
                    else{
                        cd++;
                    }
                }
            }
            if(ch>=3 || cd>=3){
                cout<<"YES";
                return 0;
            }
            else{
                ch=0;
                cd=0;
            }
        }
    }
    cout<<"NO";
}