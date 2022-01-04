#include<bits/stdc++.h>
using namespace std;
void prime(int);
bool isprime[100001];
void prime(int n)
{
    memset(isprime,true,sizeof(isprime));
    for(int i=2;i*i<=n;i++)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    
}
string solve (int N) {
   if(N<=3)
   return "No";
   if(isprime[N])
   return "No";
   else
   return "Yes";

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    prime(100000);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}