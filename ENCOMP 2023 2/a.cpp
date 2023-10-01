#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

#define all(x) x.begin(), x.end()
#define sz(x) (ll) x.size()
#define MOD 1000000007ll
#define endl '\n'
#define mdc(a, b) (__gcd((a), (b)))
#define mmc(a, b) (((a)/__gcd((a), (b))) * (b))
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[30m" << endl;
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(ll i = (a); i < ll(b); ++i)

struct pt{
    double x, y;
    ll id;
};

bool comparate (pt a, pt b){
    return a.id < b.id;
}

int orientation(pt a, pt b, pt c){
    double v = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
    if (v < 0) return -1;
    if (v > 0) return 1;
    return 0;
}

bool cw(pt a, pt b, pt c, bool include_collinear){
    int o = orientation(a, b, c);
    return o < 0 || (include_collinear && o == 0);
}
bool collinear(pt a, pt b, pt c){
    return orientation(a, b, c) == 0;
}

void convex_hull(vector<pt> &a, bool include_collinear = false){
    pt p0 = *min_element(a.begin(), a.end(), [](pt a, pt b){
        return make_pair(a.y, a.x) < make_pair(b.y, b.x);
    });

    sort(a.begin(), a.end(), [&p0](const pt& a, const pt& b){
        int o = orientation(p0, a, b);
        if (o == 0){
            return (p0.x - a.x) * (p0.x - a.x) + (p0.y - a.y) * (p0.y - a.y) < (p0.x - b.x) * (p0.x - b.x) + (p0.y - b.y) * (p0.y - b.y);
        }
        return o < 0;
    });

    if (include_collinear){
        int i = (int) a.size()-1;
        while(i >= 0 && collinear(p0, a[i], a.back())) i--;
        reverse(a.begin() + i + 1, a.end());
    }

    vector<pt> st;

    for (int i = 0; i < (int) a.size(); i++){
        while(st.size() > 1 && !cw(st[st.size() - 2], st.back(), a[i], include_collinear)){
            st.pop_back();
        }
        st.push_back(a[i]);
    }

    a = st;

    sort(a.begin(), a.end(), comparate);

    FOR(i, 0, a.size()){
        cout << a[i].id << " ";
    }
    cout << endl;

}

int main(){
    ll n, a, b;
    pt point;
    vector<pt> points;
    cin >> n;

    FOR(i, 0, n){
        cin >> a >> b;
        point.x = a;
        point.y = b;
        point.id = i + 1;
        points.push_back(point);
    }

    convex_hull(points, true);

    return 0;
}