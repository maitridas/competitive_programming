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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t,n;
    string s;
    cin>>t;
    FOR(i,t){
        int arr[26] = {0};
        int flag = 1,counter=0;
        cin>>n;
        cin>>s;
        FOR(j,n){
            if(arr[s[j]-'A']==0){
                arr[s[j] - 'A'] =1;
                FORE(k,j+1,n-1){
                    if(s[k]!=s[j]){
                        j = k-1;
                        break;
                    }
                    else if(k==(n-1)){
                        j = k;
                        break;
                    }
                }
            }
            else if(arr[s[j]-'A']==1){
                flag = 0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}