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
    int num;
	int count0=0;
	int count5=0;
	cin>>num;
	FOR(i,num)
	{
		int val;
		cin>>val;
		if(val==0) count0++;
		else count5++;
	}
	if(count0==0)
	{
		cout<<"-1";
		return 0;
	}
	int count9=9;
	while(count9<=count5)
	{
		count9+=9;
	}
    count9 = count9 - 9;
	if(count9==0)
	{
		cout<<"0";
	} 
	else
	{
	    FOR(i,count9) cout<<"5";
	
	    FOR(i,count0) cout<<"0";
	}
	return 0;
}