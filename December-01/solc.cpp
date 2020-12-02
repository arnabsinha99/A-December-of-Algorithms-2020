/*
  
  Author: Arnab Sinha
  
  ███████╗██╗  ██╗███████╗██████╗         ██╗      ██████╗  ██████╗██╗  ██╗███████╗██████╗  █████╗  █████╗ 
  ██╔════╝██║  ██║██╔════╝██╔══██╗        ██║     ██╔═══██╗██╔════╝██║ ██╔╝██╔════╝██╔══██╗██╔══██╗██╔══██╗
  ███████╗███████║█████╗  ██████╔╝        ██║     ██║   ██║██║     █████╔╝ █████╗  ██║  ██║╚██████║╚██████║
  ╚════ █║██╔══██║██╔══╝  ██╔══██╗        ██║     ██║   ██║██║     ██╔═██╗ ██╔══╝  ██║  ██║ ╚═══██║ ╚═══██║
  ███████║██║  ██║███████╗██║  ██║███████╗███████╗╚██████╔╝╚██████╗██║  ██╗███████╗██████╔╝ █████╔╝ █████╔╝
  ╚══════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚═════╝  ╚═════╝╚═╝  ╚═╝╚══════╝╚═════╝  ╚════╝  ╚════╝                                                                                                        
*/
 
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define li long long int
#define ld long double
#define all(v) v.begin(),v.end()
#define rev(a) reverse(all(a))
#define sort(a) sort(all(a))
#define pb push_back
#define INF 1e18+10
#define MINF -1e18-10
#define rep(i,a,b) for(li i=a;i<b;i++)
#define vli vector<li>
const li MAXN = 1e5+10;
const li mod = 998244353;
using namespace std;
 
li power(li a, li b, li mod) { a%=mod; li ret = 1; while(b){ if(b&1) ret*=a; a*=a;; if(ret>=mod) ret%=mod; if(a>=mod) a%=mod; b>>=1; } return ret; }
 
template <class T> void read(T& x){
  cin>>x;
}
 
template <class T, class... U> void read(T& x, U&... u){
  read(x);
  read(u...);
}
 
template <class A> void read(vector<A>& v){
  for(auto &it:v)
    read(it);
}
 
template <class A> void print(A x){
  cout<<x;
}
 
template <class A> void printl(A x){
  cout<<x<<endl;
}
 
template <class A> void print(vector<A>& v)
{
  for(auto &it:v){
    print(it);
    cout<<' ';
  }
  cout<<endl;
}

void solve()
{
  li n;
  cin>>n;

  li x = n*n;

  bool ok1 = (n%3==0)?true:false;

  string str = to_string(x);
  li size = str.size();
  string left = str.substr(0,size/2);
  string right = str.substr(size/2,(size/2)+1);
  
  cout<<left<<' '<<right<<endl;
  bool ok2 = false;
  if(stoll(left)+stoll(right)==n)
    ok2 = true;

  if(ok1 and ok2)
    cout<<"Safe\n";
  else
    cout<<"Not Safe\n";
} 

int main()
{
  IOS;

  solve();
  
  return 0;
}