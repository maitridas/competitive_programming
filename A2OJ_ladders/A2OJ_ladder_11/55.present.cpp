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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,count=0;
    cin>>n;
    FOR(i,n+1){
        count =0;
        for(int j=n; j>=0; --j){
            if(i==0 && j<=i){
                cout<<count;
                break;
            }
            if(j<=i){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<" "<<" ";
            }
        }
        for(int j=n; j>=0; --j){
            if(j<i){
                cout<<j;
                if(j!=0){
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    FOR(i,n){
        count =0;
        cout<<" ";
        for(int j=0; j<n; ++j){
            if(j>=i){
                cout<<" "<<count;
                count++;
            }
            else{
                cout<<" "<<" ";
            }
        }
        count = n-2-i;
        for(int j=n-2; j>=0; --j){
            if(j>=i){
                cout<<" "<<count;
                count--;
            }
        }
        cout<<endl;
    }
}