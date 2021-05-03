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
    string s;
    cin>>s;
    for(int i=0; i<s.length();++i){
        if(s[i]=='+'){
            s.erase(i,1);
        }
    }
    sort(s.begin(),s.end());
    cout<<s[0];
    for(int i=1; i<s.length();++i){
        cout<<"+"<<s[i];
    }
}

/*
A better approach

To solve this problem we can count the number of digits 1, 2 and 3 in the input.
 If there are c1 digits 1, c2 digits 2 and c3 digits 3. 
 Then we must print the sequence of c1 digits 1, c2 digits 2 and c3 digits 3. 
 Digits must be separated by + sign.
*/