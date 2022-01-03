#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int z=0,o=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            z++;
            if(a[i]==1)
            o++;
            if(a[i]==2)
            t++;
        }
        int zero[z];
        int one[o];
        int two[t];
        int z1=0,o1=0,t1=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            zero[z1++]=a[i];
            else if(a[i]==1)
            one[o1++]=a[i];
            else
            two[t1++]=a[i];
        }
        for(int i=0;i<z;i++)
        {
            a[i]=zero[i];
        }
        int c=0;
        for(int i=z;i<(z+o);i++)
        {
            a[i]=one[c++];
        }
        c=0;
        for(int i=(z+o);i<(z+o+t);i++)
        {
            a[i]=two[c++];
        }
       
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends