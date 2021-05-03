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
using namespace std;

void solve(int x , int y) {
    int steps =0;
    steps = abs(x-2) + abs(y-2);
    cout<<steps;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc =5 , arr[5][5] , x ,y;
    // cin >> tc; Take input
    for (int i = 0; i < tc; i++) {
        // cout << "Case #" << t  << ": ";
        for(int j =0 ; j<5 ; ++j){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=i;
                y=j;
                break;
            }
        }
    }
    solve(x,y);
}

/*
Solution I liked the best

int main()
{
    int i, j, val;
    int x, y;
    for(i = 1; i <= 5; i++)
        for(j = 1; j <= 5; j++)
        {
            scanf("%d", &val);
            if(val)
                x = i, y = j;
        }
    printf("%d\n", abs(x - 3) + abs(y - 3));
}
*/