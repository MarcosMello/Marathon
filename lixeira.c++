#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct checkpoint {
    ll x, y;
    bool p;
    ll pos;
};

int main(){
    vector<checkpoint> priority;

    priority.push_back({1, 2, true, 1});
    priority.push_back({1, 3, false, 2});

    struct checkpoint poi;
    poi.x = 9;
    poi.y = 2;
    poi.p = true;
    poi.pos = 1;

    cout << priority[0].pos << size(priority) << endl;

    priority.erase(find_if(priority.begin(), priority.end(), [&pos = poi.pos] (const checkpoint& cp) -> bool{
        return cp.pos == pos;
    }));

    cout << priority[0].pos << size(priority) << endl;
}

/*

                posPos = find_if(priority.begin(), priority.end(), [&posX = poi.x, &posY = poi.y] (const checkpoint& cp) -> bool{
                    return (cp.x == posX) && (cp.y == posY);
                });

 */

/* if (a.x == b.x){
    if (a.y == b.y){
        return !(a.fim);
    }
    return a.y > b.y;
}
return a.x < b.x; */

/* sort(predios.begin(), predios.end(), [](checkpoint a, checkpoint b){ //para fim == 0 y maior; para fim == 1 y menor
    if (a.x == b.x){
        if (a.y == b.y){
            return !(a.fim);
        }
        return a.y > b.y;
    }
    return a.x < b.x;
}); */


    /* ll x = horC[1].horas - horC[0].horas, y = horC[3].horas - horC[2].horas;
    if (x > 0 || y > 0){
        ll z = abs(x - y)/2;
        ll a = x > y ? x - z : y - z;
        ll c = (x < 0 || y < 0) ? (z * -1) : z;

        cout << x << "\n" << y << "\n";
        cout << (a * 60) << " " << c << "\n";
    }
    else{
        cout << x << "\n" << y << "\n" << x - y << "\n" << y-x << "\n";
    } */

    /* l1 = p/(comb/pow(k, 1));
    l2 = p/(comb/pow(k, 2));

    if (l2 >= k){
        qnt = l2/k;
        l2 -= k * qnt;
    }

    l3 = p/(comb/pow(k, 3));

    if (l3 >= k){
        qnt = l3/k;
        l3 -= k * qnt;
    }

    cout << l1 << " " << l2 << " " << l3 << "\n"; */