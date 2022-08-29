#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrimeFast(long long n) {

    if (n < 5 || n % 2 == 0 || n % 3 == 0)
        return (n == 2 || n == 3);
    long long maxP = sqrt(n) + 2;
    for (long long p = 5; p < maxP; p += 6) {
        if (p < n && n % p == 0) return false;
        if (p+2 < n && n % (p+2) == 0) return false;
    }
    return true;
}

vector<long long> divisores(long long n) {
    vector<long long> ans;
    for(long long a = 1; a*a <= n; a++) {
        if(n % a == 0) {
            long long b = n / a;
            ans.push_back(a);
            if(a != b) ans.push_back(b);
        }
    }
    return ans;
}

int main(){

    cout << __gcd(6, 3) << "\n";
    cout << (6 * 3)/__gcd(6, 3) << "\n";

    return 0;
}