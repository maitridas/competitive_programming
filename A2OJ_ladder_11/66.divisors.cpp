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

/*
Notes-
n divisible by 3
an >=0
an<=7
only three cases
1) 1, 2, 4

2) 1, 2, 6

3) 1, 3, 6 
*/

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
    int n,val;
    int count1=0,count2=0,count3=0,count4=0,count6=0;
    cin>>n;
    FOR(i,n){
        cin>>val;
        if(val==1){
            count1++;
        }
        else if(val==2){
            count2++;
        }
        else if(val==3){
            count3++;
        }
        else if(val==4){
            count4++;
        }
        else if(val==6){
            count6++;
        }
        else{
            cout<<-1;
            return 0;
        }
    }
    if((count1 != (count2 + count3)) || (count1 != (count4 + count6)) || (count2<count4 && count4 != 0) || (count3>count6 && count3!=0)){
        cout<<-1;
        return 0;
    }

    
    FOR(j,count4){
        cout<<1<<" "<<2<<" "<<4<<endl;
    }
    FOR(j,count6 - count3){
        cout<<1<<" "<<2<<" "<<6<<endl;
    }
    FOR(i,count3){
        cout<<1<<" "<<3<<" "<<6<<endl;
    }
}