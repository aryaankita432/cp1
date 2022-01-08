#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N;
        cin>>M;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        int MOD[N];  // array storing mod values
        for(int i=0;i<N;i++)
        {
            MOD[i]=A[i]%M;
        }
        sort(MOD ,MOD+N);
      // finding distinct and unique elements in MOD[] array
        int dis=0;
        for(int i=0;i<N;i++)
        {
            while(i<N-1 && MOD[i]==MOD[i+1])
            {
                   i++;
            }
         dis++;
        }
        
        cout<<dis<<endl;
        //finding unique elements in MOD[] array
        int uni=0;
        for(int i=0;i<N;i++)
        {
            int c=0;
            for(int j=0;j<N;j++)
            {
                if(MOD[i]==MOD[j])
                c++;
            }
            if(c==1)
                uni++;
        }
        cout<<uni<<endl;
        
    }
    
    return 0;
}