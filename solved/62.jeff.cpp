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
    int n, a[100001],max=INT_MIN,index[100001],diff[100001] = {0};
    cin>>n;
    FOR(i,n){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    int temp;
    fill_n(index, max+1, -1);
    FOR(i,n){
        if(index[a[i]]==-1){
            index[a[i]] = i+1;
        }
        else{
            if(diff[a[i]]==0){
                diff[a[i]] = (i+1) - index[a[i]];
                index[a[i]] = i+1;
            }
            else{
                temp = (i+1) - index[a[i]];
                if(diff[a[i]]!=temp){
                    diff[a[i]]=-1;
                }
                else{
                    index[a[i]] = i+1;
                }
            }
        }
    }
    int count =0;
    FOR(i,max+1){
        if(index[i]!=-1 && diff[i]!=-1){
            count++;
        }
    }
    cout<<count<<endl;
    if(count==0){
        return 0;
    }
    FOR(i,max+1){
        if(index[i]!=-1 && diff[i]!=-1){
            cout<<i<<" "<<diff[i]<<endl;
        }
    }
}
// almost same as the fastest but some things are not needed 