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

vi vec_inp(int n){
    int val;
    vi arr;
    FOR(i,n){
        cin>>val;
        arr.pb(val);
    }
    return arr;
}

void print_vec(vi arr, int n){
    FOR(i,n){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vi::iterator ip;
    vi a;
    int n;
    cin>>n;
    a = vec_inp(n);
    int first=-1;
    ip = a.end()-1;
    for(int i=n-1;i>=1;--i){
        ip--;
        if(a[i]>a[i-1]){
            first =i-1;
            break;
        }
    }
    if(first>=0){
        for(int i=n-1;i>first;--i){
            if(a[first]<a[i]){
                int temp = a[first];
                a[first] = a[i];
                a[i] = temp;
                break;
            }
        }
        sort(ip+1,a.end());
    }
    else{
        sort(a.begin(),a.end());
    }
    print_vec(a,n);
}