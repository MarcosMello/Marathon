#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n;

    cin >> n;

    string m1;
    string m2;

	if (n == 0){
		m1 = "*";
        m2 = "*";
	} else if (n <= 5){
        m1 = string(n, 'I');
        m2 = "*";
    } else{
        m1 = string(5, 'I');
        m2 = string(n-5, 'I');
    }

    cout << m1 << "\n" << m2 << "\n";

    return 0;
}