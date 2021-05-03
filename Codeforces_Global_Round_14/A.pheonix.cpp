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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t,n,x,val[1001],sum=0,ans[1001],flag=1,ind=-1,term=1;
    cin>>t;
    FOR(i,t){
        cin>>n>>x;
        sum=0;
        flag =-1;
        ind = -1;
        term =1;
        FOR(j,n){
            cin>>val[j];            
        }
        FOR(j,n){
            sum += val[j]; 
            if(sum==x && x!=0){
                ind = j;
                break;
            }            
        }
        if(ind==(n-1)){
            cout<<"NO"<<endl;
        }
        else{
            FOR(j,n){
                if(j!=ind){
                    if(j!=flag)
                    ans[j] = val[j];
                }
                else{
                    FORE(k,j+1,n-1){
                        if(val[j]!=val[k]){
                            flag =k;
                            break;
                        }
                    }
                    if(flag == -1){
                        cout<<"NO"<<endl;
                        term =0;
                        break;
                    }
                    else{
                        ans[j] = val[flag];
                        ans[flag] = val[j];
                    }
                }
            }
            if(term){
                cout<<"YES"<<endl;
                FOR(j,n){
                    if(j!=(n-1)){
                        cout<<ans[j]<<" ";
                    }
                    else{
                        cout<<ans[j];
                    }
                }
            }
        }
        cout<<endl;
    }
}