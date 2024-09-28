#include <bits/stdc++.h>
using namespace std;

const long long MAX = 1e5 + 5;
long long par[MAX], sz[MAX];

void init(long long n) {
    for (long long i = 1; i <= n; i++) {
        par[i] = -1;
        sz[i] = 1;
    }
}

long long find(long long u) {
    if (par[u] == -1)
        return u;
    return par[u] = find(par[u]);
}

void unite(long long u, long long v) {
    long long rootU = find(u), rootV = find(v);
    if (sz[rootU] > sz[rootV]) {
        par[rootV] = rootU;
        sz[rootU] += sz[rootV];
    } else {
        par[rootU] = rootV;
        sz[rootV] += sz[rootU];
    }
}

class Road {
public:
    long long u, v, w;
    Road(long long u, long long v, long long w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Road a, Road b) {
    return a.w < b.w;
}

int main() {
    long long n, e;
    cin >> n >> e;
    init(n);
    
    vector<Road> roads;
    
    for (long long i = 0; i < e; i++) {
        long long u, v, w;
        cin >> u >> v >> w;
        roads.push_back(Road(u, v, w));
    }
    
    sort(roads.begin(), roads.end(), cmp);
    
    long long cost = 0;
    
    for (Road r : roads) {
        if (find(r.u) != find(r.v)) {
            unite(r.u, r.v);
            cost += r.w;
        }
    }
    
    long long leader = find(roads[0].u);
    bool notConnected = false;
    
    for (long long i = 1; i <= n; i++) {
        if (find(i) != leader) {
            notConnected = true;
            break;
        }
    }

    if (notConnected)
        cout << "Not Possible" << endl;
    else
        cout << e - (n - 1) << " " << cost << endl;

    return 0;
}
