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
#define imin INT_MIN
#define imax INT_MAX
#define llmin LLONG_MIN
#define llmax LLONG_MAX

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    pll p2(LLONG_MAX,LLONG_MIN);
    vv<pll> p1;
    int c=-1;
    int n;
    cin>>n;
    ll l,r;
    FOR(i,n){
        cin>>l>>r;
        p1.pb({l,r});
        if(p1[i].first<=p2.first && p2.second<=p1[i].second){
            p2.ff = p1[i].ff;
            p2.ss = p1[i].ss;
            c= i+1;
        }
    }
    FOR(i,n){
        if(p2.first>p1[i].first || p1[i].second>p2.second){
            cout<<-1;
            return 0;
        }
    }
    cout<<c;
}
/*
A Better solution
long a[100005],b[100005],n,maxx,maxy,pos,x,y,i;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld %ld",&a[i],&b[i]);
 
	maxx=a[0];
	maxy=b[0];
	pos=1;
	x=a[0];
	y=b[0];
 
	for(i=1;i<n;i++)
	{
		if(a[i]<maxx)
			maxx=a[i];
		if(b[i]>maxy)
			maxy=b[i];
 
		if(a[i]<=x&&b[i]>=y)
		{
			x=a[i];
			y=b[i];
			pos=i+1;
		}
	}
 
 
	if(x<=maxx&&y>=maxy)
		printf("%ld\n",pos);
	else
		printf("-1\n");
 
	return 0;
*/