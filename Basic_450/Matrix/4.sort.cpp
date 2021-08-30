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
void print_mat(vv<vi> arr, int row,int col){
    FOR(i,row){
        FOR(j,col){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
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
    vi arr;
    FOR(i,row){
        FOR(j,col){
            arr.pb(matrix[i][j]);
        }
    }
    sort(arr.begin(),arr.end());
    int index =0;
    FOR(i,row){
        FOR(j,col){
            matrix[i][j]=arr[index];
            index++;
        }
    }
    print_mat(matrix,row,col);
}