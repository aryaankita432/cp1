#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a , a);
}
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    int result =A[0];
	    for(int i=0;i<N;i++)
	    {
	        result = gcd(A[i],result);
	    }
	    
	    cout<<result<<endl;
	    
	}
	return 0;
}
