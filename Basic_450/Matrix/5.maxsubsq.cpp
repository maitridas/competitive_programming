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
#define FORN(i,a,b) for(int i=a;i>=b;i--)
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
    vv<vi> matrix,submatrix(row, vi(col));
    matrix = mat_inp(row,col);
    FOR(i,col){
        submatrix[0][i]=matrix[0][i];
    }
    FOR(i,row){
        submatrix[i][0]= matrix[i][0];
    }
    FORE(i,1,row-1){
        FORE(j,1,col-1){
            if(matrix[i][j]==1){
                submatrix[i][j] = min( submatrix[i-1][j], min(submatrix[i][j-1], submatrix[i-1][j-1]) ) + 1;
            }
            else{
                submatrix[i][j]=0;
            }
        }
    }
    int max_of_s=submatrix[0][0],max_j=0,max_i=0;
    FOR(i,row){
        FOR(j,col){
            if(max_of_s<submatrix[i][j]){
                max_of_s = submatrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    cout<<max_of_s;
    FORN(i,max_i,max_i-max_of_s+1){
        FORN(j,max_j,max_j-max_of_s+1){
            cout<<submatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}