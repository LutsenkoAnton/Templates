/* Generated by powerful Codeforces Tool
 * Template written by Anton_lutsenko
 * Solution written by $%U%$
 **/

// Settings
// #define UNORDERED
// #define FILE
// #define MANYTIMES
// #define int long long
// #define UPPER
// #define LOWER
// #define PRAGMA

const int MAXN = 1e5 + 10;
__attribute__((unused)) const int MOD = 1e9 + 7;
char filein[7] = "in.txt";
char fileout[8] = "out.txt";

#ifdef PRAGMA
    #pragma GCC optimize("Ofast")
    #pragma GCC target("avx2,avx,bmi,bmi2,popcnt,lzcnt,abm")
    #pragma GCC optimize("unroll-loops")
#endif

#ifdef int
    #undef int
    #include <bits/stdc++.h>
    #define int long long
#else
    #include <bits/stdc++.h>
#endif

#ifndef int
__attribute__((unused)) const int INF = 1e9 + 10;
#else
__attribute__((unused)) const int INF = 1e18 + 10;
#endif

#ifdef UNORDERED
    #define set unordered_set
    #define map unordered_map
#endif

#define ft first
#define sd second
#define all(s) s.begin(), s.end()
#define all2(s, n) s.begin(), s.begin() + n
#define pb push_back
#define eb emplace_back
#define Pb pop_back
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#define ins insert

#define REP(i) for (int i = 0; i < n; ++i)
#define REP1(i, e) for (int i = 0; i < e; ++i)
#define REP2(i, b, e) for (int i = b; i < e; ++i)
#define REP3(e, s) for (auto e : s)

using namespace std;

typedef pair<int, int> pint;
typedef vector<int> vint;
typedef array<int, MAXN> aint;
typedef vector<pint> vpint;
typedef array<pint, MAXN> apint;
typedef array<double, MAXN> adouble;
typedef map<int, int> mint;
typedef set<int> sint;
typedef array<vint, MAXN> gr;
typedef array<vpint, MAXN> wgr;

template <typename T>
ostream &operator<<(ostream &out, vector<T> &v) {
    for (auto elem : v) {
        out << elem << ' ';
    }
    return out;
}

template <typename T>
istream &operator>>(istream &in, vector<T> &v) {
    for (int i = 0; i < v.size(); ++i) {
        in >> v[i];
    }
    return in;
}

template <typename P, typename T>
ostream &operator<<(ostream &out, pair<T, P> &v) {
    out << v.ft << ' ' << v.sd;
    return out;
}

template <typename P, typename T>
istream &operator>>(istream &in, pair<T, P> &v) {
    in >> v.ft >> v.sd;
    return in;
}

vector<string> vec_splitter(string s) {
    s += ',';
    vector<string> res;
    res.pb("");
    bool start = true;
    int cnt_par = 0;
    for (auto c : s) {
        if (c == ',' && cnt_par == 0) {
            res.pb("");
            start = true;
            continue;
        }
        if (c == ' ' && start)
            continue;
        if (c == '(' || c == '{' || c == '[') cnt_par++;
        if (c == ')' || c == '}' || c == ']') cnt_par--;
        res.back().pb(c);
        start = false;
    }
    res.Pb();
    return res;
}

void debug_out(
    __attribute__((unused)) vector<string> args,
    __attribute__((unused)) int idx,
    __attribute__((unused)) int LINE_NUM) {
    cerr << endl;
}

template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
    if (idx > 0)
        cerr << ", ";
    else
        cerr << "Line(" << LINE_NUM << ") ";
    stringstream ss;
    ss << H;
    cerr << args[idx] << " = " << ss.str();
    debug_out(args, idx + 1, LINE_NUM, T...);
}

#ifndef ONLINE_JUDGE
    #define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
    #define debug(...)
#endif

void yes(int ret = 0) {
#ifdef UPPER
    cout << "YES" << endl;
#else
    #ifdef LOWER
    cout << "yes" << endl;
    #else
    cout << "Yes" << endl;
    #endif
#endif
    if (ret) {
        exit(0);
    }
}

void no(int ret = 0) {
#ifdef UPPER
    cout << "NO" << endl;
#else
    #ifdef LOWER
    cout << "no" << endl;
    #else
    cout << "No" << endl;
    #endif
#endif
    if (ret) {
        exit(0);
    }
}

#define by(x) [](const auto &a, const auto &b) { \
    return a.x < b.x;                            \
}

#define byfn(x) [](const auto &a, const auto &b) { \
    return x(a) < x(b);                            \
}

#define byar(x) [](const auto &a, const auto &b) { \
    return x[a] < x[b];                            \
}

#ifdef int
    #undef int
    #define mem
#endif
mt19937 gn(chrono::steady_clock::now().time_since_epoch().count());

int rnd(int a, int b) {
    uniform_int_distribution<int> distr(a, b);
    return distr(gn);
}

mt19937_64 gnl(chrono::steady_clock::now().time_since_epoch().count());

long long rnd(long long a, long long b) {
    uniform_int_distribution<long long> distr(a, b);
    return distr(gnl);
}
#ifdef mem
    #undef mem
    #define int long long
#endif

signed solve() {
    return 0;
}

signed main() {
#ifdef FILE
    freopen(filein, "r", stdin);
    freopen(fileout, "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k = 1;
#ifdef MANYTIMES
    cin >> k;
#endif
    while (k--) {
        solve();
    }
    return 0;
}
