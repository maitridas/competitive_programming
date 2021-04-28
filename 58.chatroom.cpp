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
    
     
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    if(s.length()<5){
        cout<<"NO";
        return 0;
    }

    FOR(i,s.length()){
        if(s[i]=='h'){
            for(int j=i+1;j<s.length();++j){
                if(s[j]=='e'){
                    for(int k=j+1; k<s.length(); ++k){
                        if(s[k]=='l'){
                            for(int l=k+1; l<s.length(); ++l){
                                if(s[l]=='l'){
                                    for(int m=l+1; m<s.length(); ++m){
                                        if(s[m]=='o'){
                                            cout<<"YES";
                                            return 0;
                                        }
                                    }
                                    cout<<"NO";
                                    return 0;  
                                }
                            }
                            cout<<"NO";
                            return 0; 
                        } 
                    }
                    cout<<"NO";
                    return 0; 
                }
            }
            cout<<"NO";
            return 0; 
        }
    }
}