#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct checkpoint{
    ll x, y;
    bool ini;
    ll pos;
};

struct point{
    ll x, y;
};

int main(){
    vector<struct checkpoint> predios;
    vector<struct checkpoint> queue;
    vector<struct point> points;

    struct checkpoint last;

    ll x, y, d;
    ll tam, i = 0;

    vector<struct checkpoint>::iterator rem;

    while (cin >> x >> y >> d){
        predios.push_back({x, y, false, 0});
        predios.push_back({d, y, true, i});
        i += 2;
    }

    sort(predios.begin(), predios.end(), [](checkpoint a, checkpoint b){
        if (a.x == b.x){
            if (a.y == b.y){
                return !(a.ini);
            }
            return a.y > b.y;
        }
        return a.x < b.x;
    });

    for (auto p: predios){
        if (!p.ini){
            queue.push_back(p);
            tam = size(queue);

            if (tam != 1){
                if (last.y < p.y){
                    last = p;

                    points.push_back({p.x, p.y});
                }
            }
            else{
                last = p;

                points.push_back({p.x, p.y});
            }
        }
        else{
            rem = find_if(queue.begin(), queue.end(), [&sC = predios[p.pos]] (const struct checkpoint& s) -> bool{
                return (s.x == sC.x) && (s.y == sC.y) && (s.ini == sC.ini);
            });
            queue.erase(rem);

            tam = size(queue);

            if (!tam){
                points.push_back({p.x, 0});
            }
            else{
                last = queue[tam - 1];

                points.push_back({p.x, last.y});
            }
        }
    }

    tam = size(points);

    for (ll i = 0; i < tam; i++){
        cout << points[i].x << " " << points[i].y;
        if (i != (tam - 1)){
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}