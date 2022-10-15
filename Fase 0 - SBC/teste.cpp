#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long r = 20;
    long long l = 10;

    long long i = l;

    string str = "";

    while (str.length() < (r-l) + 1){
        str += to_string(i);
        i++;
    }

    str = str.substr(0, (r-l) + 1);

    cout << str;

    return 0;
}