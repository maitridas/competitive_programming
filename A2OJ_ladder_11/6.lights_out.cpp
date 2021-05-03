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
    int val;
    int output_array[3][3];
    //initializong all values to 1
    
    for(int i=0; i<3; ++i){
        for(int j=0; j<3 ; ++j){
            output_array[i][j]=1;
        }
    }
    for(int i=0; i<3; ++i){
        for(int j=0; j<3 ; ++j){
            cin>>val;
            output_array[i][j] += val;
            if((i-1)>=0) output_array[i-1][j] +=val;
            if((i+1)<=2) output_array[i+1][j] +=val;
            if((j-1)>=0) output_array[i][j-1] +=val;
            if((j+1)<=2) output_array[i][j+1] +=val;
        }
    }
    for(int i=0; i<3; ++i){
        for(int j=0; j<3 ; ++j){
            output_array[i][j] = output_array[i][j]%2;
            cout<<output_array[i][j];
        }
        cout<<endl;
    }
}