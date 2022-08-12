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