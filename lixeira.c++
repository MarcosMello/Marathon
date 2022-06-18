#include <bits/stdc++.h>

using namespace std;

vector<long long> divisores(long long n) {
    vector<long long> ans;
    for(long long a = 1; a*a <= n; a++) {
        if(n % a == 0) {
            long long b = n / a;
            ans.push_back(a);
            if(a != b) ans.push_back(b);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

vector<long long> factor(long long n) {
    vector<long long> ans;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n > 1) ans.push_back(n);
    return ans;
}


vector<bool> crivo(long long n) {
    vector<bool> primo(n+1, true);

    primo[0] = primo[1] = false;
    for (long long i = 2; i <= n; i++) {
        if (primo[i] && i * i <= n) {
            for (long long j = i * i; j <= n; j += i)
                primo[j] = false;
        }
    }
    return primo;
}

int main(){

    long long n = 50;
    vector<long long> divisores_n = divisores(n);
    vector<long long> factor_n = factor(n);

    for(long long i = 0; i < divisores_n.size(); i++) {
        cout << divisores_n[i] << " ";
    }

    cout << "\n";

    for(long long i = 0; i < factor_n.size(); i++) {
        cout << factor_n[i] << " ";
    }

    cout << "\n";

    cout << __gcd(2, 6) << "\n"; // MDC
    cout << (2*6)/__gcd(2, 6) << "\n"; // MMC

    cout << 73 % 13 << "\n";
    cout << 56/2 << "\n"; //Daqui para baixo estava testando n >>= 1; Isso é = /2;
    cout << 28/2 << "\n";
    cout << 14/2 << "\n";
    cout << 7/2 << "\n";

    return 0;
}