/********   All Required Header Files ********/
#include <iostream>
#include <string>

using namespace std;

string countAndSay(int n) {
    if(n==1){
        return "1";
    }
    string str1;
    str1 = countAndSay(n-1);
        
    if(str1.length()==1){
        return "11";
    }
        
    string retstr="",temp;
    int count=1;
    for(int i=0;i<=str1.length()-2;i++){
        if(str1[i]==str1[i+1]){
            count++;
        }
        else{
            retstr += to_string(count) + str1[i];
            count = 1;
        }
    }
    retstr += to_string(count) + str1[str1.length()-1];
    return retstr;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    string s;
    s= countAndSay(n);
    cout<<s;
}