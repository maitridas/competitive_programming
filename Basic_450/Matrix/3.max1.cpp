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
#include <unordered_map>

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
#define imx INT_MAX
#define imn INT_MIN
#define lmx LLONG_MAX
#define lmn LLONG_MIN

vi vec_inp(int n){
    int val;
    vi arr;
    FOR(i,n){
        cin>>val;
        arr.pb(val);
    }
    return arr;
}

void print_vec(vi arr, int n){
    FOR(i,n){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vv<vi> mat_inp(int row,int col){
    int val;
    vv<vi> mat;
    vi matrow;
    FOR(i,row){
        matrow.clear();
        FOR(j,col){
            cin>>val;
            matrow.pb(val);
        }
        mat.pb(matrow);
    }
    return mat;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int row,col;
    cin>>row>>col;
    vv<vi> matrix;
    matrix = mat_inp(row,col);
    int left_most_1=col;
    int max_row=-1;
    FOR(i,col){
        if(matrix[0][i]==1){
            left_most_1 = i;
            max_row=0;
            break;
        }
    }
    FORE(i,1,row-1){
        while(matrix[i][left_most_1-1] && left_most_1>=0){
            left_most_1=left_most_1-1;
            max_row = i;
        }
    }
    cout<<max_row;
}