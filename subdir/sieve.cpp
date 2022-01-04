    #include<bits/stdc++.h>
    using namespace std;
    void sieve(int n)
    {
         bool isprime[n+1];
         memset(isprime,true,sizeof(isprime));
         for(int i=0;i*i<=n;i++)
         {
             if(isprime[i])
             {
                 for(int j=i*i;j<=n;j=j+i)
                 {
                     isprime[j]=false;
                 }
             }
         }
         
         for(int i=0;i<=n;i++)
         {
             if(isprime[i])
             cout<<isprime[i]<<" ";
         }
        
    }
    int main()
    {
        int N;
        cin>>N;
        sieve(N);
    	return(0);
    }
