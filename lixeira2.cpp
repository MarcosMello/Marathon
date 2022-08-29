#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string string1, string2;
    char _;

    cin >> string1 >> string2;

    cout << size(string1) << " " << size(string2) << "\n";

    for (ll i = 0; i < size(string1); i++){
        if (string1[i] == string2[i]){
            cout << string1[i];
        }
        else{
            cout << "\n" << string1[i] << " " << string2[i] << "\n";
        }
    }

    return 0;
}