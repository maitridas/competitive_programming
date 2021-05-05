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

/*vi divisors;
void count_divisor(int n){
    int count =0;
    if(n==1){
        divisors.pb(1);
        return;
    }
    FORE(i,1,sqrt(n)){
        if(n%i ==0){
            if(n/i == i){
                count++;
            }
            else{
                count +=2;
            }
        }
    }
    divisors.pb(count);
}*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a,b,c,mod = 1073741824,divisors[1000001] = {0};
    cin>>a>>b>>c;
    FORE(i,1,a*b*c){
        for(int j=i;j<=a*b*c; j+=i){
            divisors[j]++;
        }
    }
    int sum =0;
    FORE(i,1,a){
        FORE(j,1,b){
            FORE(k,1,c){
                sum += (divisors[i*j*k])%mod;
            }
        }
    }
    cout<<sum;
}