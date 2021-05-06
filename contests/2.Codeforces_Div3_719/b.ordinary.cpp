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
    int t;
    string s;
    cin>>t;
    FOR(i,t){
        cin>>s;
        int n = s[0] - '0';
        int a = s.length() -1;
        int flag =1;
        FORE(j,1,s.length()-1 ){
            if(s[0]>s[j] ){
                flag = 0;
                break;
            } 
            else if(s[0]<s[j]){
                flag =1;
                break;
            }
        }

        if(flag) cout<<(9*(a) + n)<<endl;
        else cout<<(9*(a) + n-1)<<endl;
    }
}