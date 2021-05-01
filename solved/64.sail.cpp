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

struct sail{
    ll x,y;
}s,e,v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t>>s.x>>s.y>>e.x>>e.y;
    int diff = abs(e.y - s.y) + abs(e.x - s.x);
    int temp;
    char ch;
    v.x = s.x;
    v.y = s.y;
    FOR(i,t){
        cin>>ch;
        switch(ch){
            case 'E': v.x++;break;
            case 'S': v.y--;break;
            case 'W': v.x--;break;
            case 'N': v.y++;break;
        }
        temp = abs(e.y - v.y) + abs(e.x - v.x);
        if(temp<diff){
            diff = temp;
            s.x = v.x;
            s.y = v.y;
            if(temp==0){
                cout<<i+1;
                return 0;
            }
        }
        else{
            v.x = s.x;
            v.y = s.y;
        }
    }
    cout<<-1;
}