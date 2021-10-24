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
#include <unordered_map>

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

void output(int max, int elem, bool temp=false){
    if(elem==max && temp==false){
        cout<<0<<" ";
    }
    else if(elem==max && temp==true){
        cout<<1<<" ";
    }
    else{
        cout<<(max-elem)+1<<" ";
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    vi candi;
    cin>>t;
    for(int i=0; i<t; i++){
        candi = vec_inp(3);
        auto max_n = max_element(candi.begin(), candi.end());
        int count = 0;
        FOR(j,3){
            if(candi[j]==*max_n){
                count++;
            }
        }
        FOR(j,3){
            if(count==1){
                output(*max_n, candi[j], false);
            }
            else{
                if(*max_n==candi[j]){
                    output(*max_n, candi[j], true);
                }
                else{
                    output(*max_n, candi[j], false);
                }
            }
        }
        cout<<endl;
    }
}