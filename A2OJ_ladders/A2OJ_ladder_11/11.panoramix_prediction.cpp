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

bool is_prime(int x){
    for(int i=2; i<x; ++i)
    {
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int next_prime(int x) {
    int i =x+1;
    while(1){
        if(is_prime(i)){
            return i;
        }
        i++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    if(!is_prime(m)){
        cout<<"NO";
        return 0;
    }
    int next_prime_n;
    next_prime_n = next_prime(n);
    if(next_prime_n == m){
        cout<<"YES";
    } 
    else{
        cout<<"NO";
    }
    return 0;
}