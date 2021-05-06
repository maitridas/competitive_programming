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

int gcd(int a , int b)
{ return b==0 ? a: gcd(b,a%b); }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int limit,a,b,c=0;
    cin>>limit;
    int m=2, ans=0;
    while(c<=limit){
        
        FORE(n,1,m-1){
            if(gcd(n,m)==1){
                a = m * m - n * n;
                b = 2 * m * n;
                c = m * m + n * n;
                for(int i=2; 1; i++){
                    if(i*c<=limit){
                        ans++;
                        printf("%d %d %d\n", a*i, b*i, c*i);
                    }
                    else{
                        break;
                    }
                }
                if(c>limit) break;
                
                ans++;
                printf("%d %d %d\n", a, b, c);
            }
        }
        
        m++;
    }
    cout<<ans;
}