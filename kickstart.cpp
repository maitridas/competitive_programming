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

bool checkwhole(double n)
{
     
    // If ceil and floor are equal
    // the number is a perfect
    // square
    if (ceil(n) == floor(n)) {
        return true;
    }
    else {
        return false;
    }

}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    long long int g,c;
    double d,x;
    cin>>t;
    FOR(s,t){
        cin>>g;
        c =1;
        FORE(i,1,g-1){
            d = sqrt( pow((2*i - 1),2) + 8*g );
            if(checkwhole(d)){
                x = ( -1*(2*i - 1) + d )/2;
                if(checkwhole(x)){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}