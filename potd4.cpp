#include<bits/stdc++.h>
using namespace std;
string solve (int N) {
    int c=0;
    for(int i=2;i<=sqrt(N);i++)
    {
        if(N%i==0)
        {
            c++;
            break;
        }
       
    }
    if(c==0)
    return "No";
    else if(c==1)
    return "Yes";
 
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
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