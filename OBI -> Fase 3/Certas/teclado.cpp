#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    unordered_map<char, ll[2]> v;

    v['2'][0] = (int) 'a';
    v['2'][1] = (int) 'c';

    v['3'][0] = (int) 'd';
    v['3'][1] = (int) 'f';

    v['4'][0] = (int) 'g';
    v['4'][1] = (int) 'i';

    v['5'][0] = (int) 'j';
    v['5'][1] = (int) 'l';

    v['6'][0] = (int) 'm';
    v['6'][1] = (int) 'o';

    v['7'][0] = (int) 'p';
    v['7'][1] = (int) 's';

    v['8'][0] = (int) 't';
    v['8'][1] = (int) 'v';

    v['9'][0] = (int) 'w';
    v['9'][1] = (int) 'z';

    string n;
    ll sz, q, cnt;

    cin >> n >> q;

    cnt = q;

    sz = n.length();

    for (ll i = 0; i < q; i++){
        string at;
        cin >> at;
        if (at.length() == sz){
            for (ll c = 0; c < sz; c++){
                if(!(v[n[c]][0] <= (int) at[c] && v[n[c]][1] >= (int) at[c])){
                    cnt--;
                    break;
                }
            }
        }
        else{
            cnt--;
        }
    }

    cout << cnt;

    return 0;
}