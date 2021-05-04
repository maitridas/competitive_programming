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
    string s1,s2;
    int s1u[26] = {0},s2u[26] ={0},s1l[26] ={0},s2l[26] ={0};
    getline(cin,s1);
    getline(cin,s2);
    FOR(i,s1.length()){
        if(isupper(s1[i])) s1u[s1[i]-'A']++;
        else if(islower(s1[i]))s1l[s1[i]-'a']++;
    }
    FOR(i,s2.length()){
        if(isupper(s2[i])) s2u[s2[i]-'A']++;
        else if(islower(s2[i])) s2l[s2[i]-'a']++;
    }
    FOR(i,26){
        if((s1l[i]<s2l[i]) || (s1u[i]<s2u[i])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}