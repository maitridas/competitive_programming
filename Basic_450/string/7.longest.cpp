#include <iostream>
#include <string>

using namespace std;

string longestPalin(string S)
{
    // code here
    int maxlength = 1;
    int start = 0;
    int len = S.length();
    int low, high;

    for (int i = 0; i < len; i++)
    {
        //for even
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && S[low] == S[high])
        {
            --low;
            ++high;
        }

        ++low;
        --high;
        if (high - low + 1 > maxlength)
        {
            start = low;
            maxlength = high - low + 1;
        }

        // for odd
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && S[low] == S[high])
        {
            --low;
            ++high;
        }
        ++low;
        --high;
        if (high - low + 1 > maxlength)
        {
            start = low;
            maxlength = high - low + 1;
        }
    }
    string retstr;
    for (int i = start; i < start + maxlength; i++)
    {
        retstr += S[i];
    }

    return retstr;
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
    string s;
    s = longestPalin(n);
    cout << s;
}