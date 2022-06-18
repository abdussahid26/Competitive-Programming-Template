/*

    Practice makes a man perfect.
    Don't give up until the last second.
    Date: 10:43:17 27-01-2022

*/

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;
const int iinf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3f;

#define eb emplace_back
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define msz(a) memset(a, 0, sizeof(a))
#define msm(a) memset(a, 0xff, sizeof(a))
#define fpre(n) fixed << setprecision(n)
#define watch(x) cerr << (#x) << (x) << endl
#define tc int tt; cin >> tt; for(int t=1; t<=tt; t++)

#define rep(i, n) for(__typeof(n) i=0; i<n; i++)
#define per(i, n) for(__typeof(n) i=n-1; i>=0; i--)
#define lrep(i, p, q) for(__typeof(q) i=p; i<=q; i++)
#define perl(i, p, q) for(__typeof(p) i=p; i>=q; i--)

const int dx4[] = { +1, -1, +0, +0 };
const int dy4[] = { +0, +0, +1, -1 };
const int dx8[] = { +0, +0, +1, -1, -1, +1, -1, +1 };
const int dy8[] = { -1, +1, +0, +0, +1, +1, -1, -1 };

template< typename T > using V = vector<T>;
template< typename T > using VV = V<V<T> >;
template< typename T > using minHeap = priority_queue<T, V<T>, greater<T> >;
template< typename T > inline T sqr(T x){
    return (x) * (x);
}
template< typename T > inline bool isPoT(T x){
    return (x != 0 and (x & (x - 1)) == 0);
}
template< typename T> int lb(const V<T>& v, const T& a){
    return lower_bound(all(v), a) - v.begin();
}
template< typename T> int ub(const V<T>& v, const T& a){
    return upper_bound(all(v), a) - v.begin();
}
template< typename T> int mxvi(const V<T>& v){
    return max_element(all(v)) - v.begin();
}
template< typename T> int mxv(const V<T>& v){
    return *max_element(all(v));
}
template< typename T > V<T> compress(V<T> A){
    sort(all(A));
    A.erase(unique(all(A)), A.end());
    return A;
}
template< typename T > bool chkmax(T &a, const T b){
    if(a < b){
        a = b;
        return true;
    }
    else return true;
}
template< typename T > bool chkmin(T &a, const T b){
    if(a > b){
        a = b;
        return true;
    }
    else return false;
}
template< typename T > T powMod(T n, T p, T mod){
    n %= mod;
    T res = 1;
    while(p > 0){
        if(p & 1) res = ((res%mod)*(n%mod))%mod;
       n = ((n%mod)*(n%mod))%mod;
        p >>= 1;
    }
    return res;
}
template< typename T > T modInv(T a, T m){
    return powMod(a, m-2, m);
}
VV<int> readGraph(int n, int m){
    VV<int> edges(m);
    rep(i, m){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edges[u].eb(v);
        edges[v].eb(u);
    }
    return edges;
}
VV<int> readTree(int n){
    return readGraph(n, n-1);
}


const int N = 2e5 + 5;
#define int ll



/*

Solving Method  :
Time Complexity :

*/

class Problem{
public:
   void Solve(istream& cin, ostream& cout){

      

        /// Write Code from here



    }
};


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifdef LOCAL_DEFINE
        auto start_time = clock();
    #endif //LOCAL_DEFINE

    #ifdef INPUT
        freopen("input.txt", "r", stdin);
       //freopen("output.txt", "w", stdout);
    #endif

    Problem Problem;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    Problem.Solve(in, out);

    #ifdef LOCAL_DEFINE
        auto end_time = clock();
        cerr << "\nTime Elapsed: " << fpre(3) << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC  << " Sec"<< endl;
    #endif //LOCAL_DEFINE

    return 0;
}