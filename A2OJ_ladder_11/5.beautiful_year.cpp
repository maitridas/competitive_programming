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
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int year,d0,d1,d2,d3,out,x;
    cin>>year;
    x = year+1;
    while(1){
        out = x;
        d0 = out%10;
        out = out/10;
        d1 = out%10;
        out = out/10;
        d2 = out%10;
        out = out/10;
        d3 = out%10;
        if((d0!=d1) && (d0!=d2) && (d0!=d3) && (d1!=d2) && (d1!=d3) && (d2!=d3)){
            break;
        }
        else{
            x = x +1;
        }
    }
    cout<<x;
}