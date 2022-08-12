#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct checkpoint{
    ll x, y;
    bool fim;
    ll aux;
};

struct point{
    ll x, y;
};

int main(){
    vector<struct checkpoint> predios;
    vector<struct point> points, fila;

    ll x, y, d, tam = 0;
    ll h, nh;

    while (cin >> x >> y >> d){
        predios.push_back({x, y, false, d});
        predios.push_back({d, y, true, x});
    }

    sort(predios.begin(), predios.end(), [](checkpoint a, checkpoint b){ //para fim == 0 y maior; para fim == 1 y menor
        if (a.x == b.x){
            if (!a.fim){
                if (a.y == b.y){
                    return !a.fim;
                }
                return a.y > b.y;
            }
            else{
                if (a.y == b.y){
                    return !a.fim;
                }
                return a.y < b.y;
            }
        }
        return a.x < b.x;
    });

    for (auto p: predios){
        if (!p.fim){
            fila.push_back({p.aux, p.y});
            tam++;

            if (tam == 1){
                h = p.y;

                points.push_back({p.x, p.y});
            }
            else{
                if (p.y > h){
                    h = p.y;

                    points.push_back({p.x, p.y});
                }
            }
        }
        else{
            fila.erase(find_if(fila.begin(), fila.end(), [&d = p.x, &y = p.y](const struct point& ponto){
                return (ponto.x == d) && (ponto.y == y);
            }));

            tam--;

            if (!tam){
                points.push_back({p.x, 0});
            }
            else{
                if (p.y == h){
                    sort(fila.begin(), fila.end(), [](struct point a, struct point b){
                        if (a.y == b.y){
                            return a.x > b.x;
                        }
                        return a.y > b.y;
                    });

                    nh = (*(fila.begin())).y;

                    if (nh != h){
                        h = nh;

                        points.push_back({p.x, h});
                    }
                }
            }
        }
    }

    tam = size(points);

    for (ll i = 0; i < tam; i++){
        cout << points[i].x << " " << points[i].y;

        if (i != (tam - 1)){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }

    return 0;
}