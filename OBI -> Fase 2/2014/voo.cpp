#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string hor[4];
    char tmp[2];

    ll min[4];

    cin >> hor[0] >> hor[1] >> hor[2] >> hor[3];

    for (ll i = 0; i < 4; i++){
        tmp[0] = hor[i][0];
        tmp[1] = hor[i][1];
        min[i] = atoi(tmp) * 60;

        tmp[0] = hor[i][3];
        tmp[1] = hor[i][4];
        min[i] += atoi(tmp);
    }

    ll t1, t2, dif, dur;

    t1 = min[1] - min[0];
    t2 = min[3] - min[2];

    dif = (t1 - t2)/2;

    if (dif/60 > 12){
        dif = dif - (12*60) + -(12*60);
    }
    else if (dif/60 < -12){
        dif = (dif * -1) - (12*60) + - 12;
    }

    if (t1 < 0 && t2 < 0){
        dif += (12*60);
    }

    dur = (min[0] + dif);
    dur = (dur > (24 * 60)) ? dur - (24 * 60) : (dur < (24 * 60 * -1)) ? dur + (24 * 60) : dur;
    dur = min[1] - dur;

    cout << dur << " " << (dif/60) << "\n";

    return 0;
}