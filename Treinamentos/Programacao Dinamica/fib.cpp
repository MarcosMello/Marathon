#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAX 1000

ll memo[MAX];

ll fib (ll n){ //código O(ouro^n)
    if (n <= 1) return (1);
    else return (fib(n - 1) + fib(n - 2));
}

ll dynamicFib(ll n){
    if (memo[n] == -1) memo[n] = dynamicFib(n-1) + dynamicFib(n-2);
    return memo[n];
}

int main(){

    fill_n(memo, MAX, -1);

    memo[0] = 0;
    memo[1] = 1;

    // cout << fib(45) << endl;
    cout << dynamicFib(5) << endl;

    return 0;
}