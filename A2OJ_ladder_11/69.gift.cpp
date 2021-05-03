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
    int n,val,c100=0,c200=0;
    cin>>n;
    FOR(i,n){
        cin>>val;
        if(val==200){
            c200++;
        }
        else{
            c100++;
        }
    }
    int sum = 100*c100 + 200*c200;
    if(n==1){
        cout<<"NO";
        return 0;
    }
    if(sum%200!=0){
        cout<<"NO";
        return 0;
    }
    else{
        int half = sum/2;
        for(int i=0;i<=c200;++i){
            if(200*i<=half && (half - 200*i)<=c100*100){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
/*logic is faulty
doesn't work for
4
200 200 200 200
output - No*/

/*
works and is better
	 int n;
	 cin >> n;
	 vector < int > vec(n);
	 for( int i = 0; i < n; i++ )
	 {
		cin >> vec[i];
	 }
	 int k = 0;
	 for( int i = 0; i < n; i++ )
	 {
		if ( vec[i] == 100 )
			k++;
	 }
	 if ( k == 0 && n%2 == 1 )
		 cout << "NO";
	 else if ( k == 0 && n%2 == 0 )
		 cout << "YES";
	 else if ( k != 0 && k%2 == 1 )
		 cout << "NO";
	 else if ( k != 0 && k%2 == 0 )
		 cout << "YES";

*/