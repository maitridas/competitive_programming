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
    string s;
    cin>>s;
    int i=0;
    while(i<s.length()){
        if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
            s[i] = ' ';
            s.erase(i+1,2);
        }
        else{
            i++;
        }
    }
    while(1){
        if(s[0]==' '){
            s.erase(0,1);
        }
        else{
            break;
        }
    }
    while(1){
        if(s[s.length()-1]==' '){
            s.erase(s.length()-1,1);
        }
        else{
            break;
        }
    }
    FOR(i,s.length()){
        if(s[i]==' '&& s[i+1]==' '){
            s.erase(i,1);
            i--;
        }
    }
    cout<<s;
}