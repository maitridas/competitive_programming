#include <iostream>
#include <string>

using namespace std;

void printsubsequence(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    // first character of input included
    printsubsequence(input.substr(1),output+input[0]);
    //first character not included
    printsubsequence(input.substr(1),output);
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n;
    cin >> n;
    printsubsequence(n,"");
}