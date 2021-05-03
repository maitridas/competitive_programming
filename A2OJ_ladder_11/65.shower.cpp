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
    int a[5][5];
    FOR(i,5){
        FOR(j,5){
            cin>>a[i][j];
        }
    }
    int ans=0;
    int permu[] = {0,1,2,3,4};
    do{
        int temp=0;
        temp += a[permu[0]][permu[1]];
        temp += a[permu[1]][permu[0]];
        temp += a[permu[2]][permu[3]];
        temp += a[permu[3]][permu[2]];

        temp += a[permu[1]][permu[2]];
        temp += a[permu[2]][permu[1]];
        temp += a[permu[3]][permu[4]];
        temp += a[permu[4]][permu[3]];

        temp += a[permu[2]][permu[3]];
        temp += a[permu[3]][permu[2]];

        temp += a[permu[3]][permu[4]];
        temp += a[permu[4]][permu[3]];

        ans = max(ans, temp);
    }while(next_permutation(permu, permu+5));

    cout<<ans;
}