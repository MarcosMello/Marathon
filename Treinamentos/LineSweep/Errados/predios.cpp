#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct checkpoint {
    ll x, y;
    bool p;
    ll pos;
    ll d;
};

struct coord{
    ll x, y;
};

int main(){
    ll x, y, d, i = 0;

    vector<checkpoint> pred;

    while (cin >> x >> y >> d) {
        pred.push_back({x, y, false, i, d});
        pred.push_back({d, y, true, i, 1});

        i++;
    }

    sort(pred.begin(), pred.end(), [](checkpoint a, checkpoint b) {
        if (a.x == b.x){
            if (a.y == b.y){
                return a.d > b.d;
            }
            return a.y > b.y;
        }
        return a.x < b.x;
    });

    vector<coord> points;
    vector<checkpoint> priority;
    ll tam;
    struct checkpoint mY, mY2;

    for (auto poi: pred){
        if (!poi.p){
            priority.push_back(poi);
            tam = size(priority);

            if (tam != 1){ //ok
                if (poi.y > mY.y){
                    mY = poi;

                    points.push_back({poi.x, poi.y});
                }
            }
            else{ //ok
                mY = poi;

                points.push_back({poi.x, poi.y});
            }
        }
        else{
            priority.erase(find_if(priority.begin(), priority.end(), [&pos = poi.pos] (const checkpoint& cp) -> bool{
                return cp.pos == pos;
            }));

            tam--;

            if (!tam){ //ok
                points.push_back({poi.x, 0});
            }
            else if (poi.y == mY.y){
                mY = priority[tam - 1];

                // points.push_back({poi.x, mY.y});
            }
        }
    }

    ll tam2 = size(points);

    for (ll i = 0; i < tam2; i++){
        cout << points[i].x << " " << points[i].y;

        if (i != (tam2 - 1)){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }

    return 0;
}