#include<bits/stdc++.h>
using namespace std;

/*Loop*/
//#define loop(i,N)        dloop(i, 0, N)
//#define dloop(i,a,b)     barbe(i, a, b, 1)
//#define barbe(i,a,b,c)   for(int i=(a);i<(b);i+=(c))

#define For(i,N)        Forr(i, 0, N)
#define Forr(i,a,b)     Fotr(i, a, b, 1)
#define Fotr(i,a,b,c)   for(int (i)=(a);(i)<(b);(i)+=(c))
#define FOR(n)          for(int i=0; i<(int)(n); ++i)
#define FORI(i, s, n)   for(int i=(int)(s); i<(int)(n); ++i)
#define RFORI(i, s, n)  for(int i=(int)(s); i>=(int)(n); --i)
#define F0RIJ(i, a)     for(int i=0; i<(int)(a); i++)
#define FORP(x)         for(__typeof__((x).begin()) it=(x).begin(); it!=(x).end(); ++it)



/*Data structure*/
#define all(V)          V.begin(),V.end()
#define FF              first
#define SS              second
#define pb              push_back
#define pii             pair<int, int>
#define ll              long long
#define sz              size()
#define memclr(A)       memset(A, 0, sizeof(A))
#define memset(A)       memset(A, 1, sizeof(A))
#define lg              length()
#define All(V,n)          V,V+n
#define clr(A,B)        memset(A,B,sizeof A)

/*Data Types*/
#define ull             unsigned long long
#define ui              unsigned int

//Needy
#define gcd(n,m)        __gcd(n,m)
#define input           freopen("input.txt", "r", stdin);
#define output          freopen("output.txt", "w", stdout);
#define sync            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(args...)    {string sss(#args);sss+=',';cout<<"-->";debugger::call(all(sss), args);cout<<"\n";}
#define dbgA(A, n)      {cout<<"-->"<<#A<<"=(";FOR(n)cout<<A[i]<<" ";cout<<")\n";}
#define dbgA2(A, n, m)  {cout<<"-->"<<#A<<"=\n";FOR(n){FORI(j, 0, m){cout<<A[i][j]<<" ";}cout<<"\n";}cout<<"\n";}

//Input
#define si(a)           scanf("%d",&a)
#define sf(a)           scanf("%f",&a)
#define si2(a,b)        scanf("%d %d",&a,&b)

//Output
#define case(i,n)       cout<<"Case "<<i<<": "<<n<<endl;
#define print(n)        cout<<n<<endl
#define yes             cout<<"Yes"<<endl;
#define no              cout<<"No"<<endl;
#define YES             cout<<"YES"<<endl;
#define NO              cout<<"NO"<<endl;

//needy 2
#define MAX             10
#define inf             (1ll<<60)
#define infi            (1<<30)
#define eps             1e-9
//#define home

template<typename T>
T sqr(T a)
{
    return a*a;
}
struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
        string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cout << b << "=" << a << " ";
        call(++it, ed, rest...);
    }
};
#ifdef home
    bool prime[MAX] = {false};
    void seive(){
        for(int i=2;i<sqrt(MAX);i++){
            if(!prime[i]){
                for(int j=i*i;j<MAX;j+=i){
                    prime[j] = true;
                }
            }
        }
    }
#endif // prime

int main()
{
    #ifdef home
        //input
        //output
        seive();
    #endif
    return 0;
}

