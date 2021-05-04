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
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"NO";
        return 0;
    }
    int a[3],c=0;
    FOR(i,s1.length()){
        if(s1[i]!=s2[i]){
            a[c] = i;
            c++;
        }
        if(c==3){
           cout<<"NO";
            return 0; 
        }
    }
    if(c==1){
        cout<<"NO";
        return 0;
    }
    char temp;
    temp = s1[a[0]];
    s1[a[0]] = s1[a[1]];
    s1[a[1]] = temp;
    if(s1.compare(s2)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}