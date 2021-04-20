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
    int dig,num_digits=0;
    long long int num;
    cin>>num;
    while(num>0){
        dig = num%10;
        num=num/10;
        if(dig==4 || dig==7){
            num_digits++;
        }
    }
    if(num_digits==4 || num_digits==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}