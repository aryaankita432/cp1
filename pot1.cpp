#include <bits/stdc++.h>
using namespace std;
// Problem of the day (01/01/2022)
int main() {
	//code
	int T,N,D;
	cin>>T;
	while(T--)
	{
    	cin>>N;
    	cin>>D;
    	int arr[N];
    	int temp[D];
    	for(int i=0;i<N;i++)
    	{
    	    cin>>arr[i];
    	}
    	for(int i=0;i<D;i++)
    	{
    	    temp[i]=arr[i];
    	}
    	for(int i=D;i<N;i++)
    	{
    	    arr[i-D]=arr[i];
    	}
    	for(int i=0;i<D;i++)
    	{
    	    arr[N-D+i]=temp[i];
    	}
    	for(int i=0;i<N;i++)
    	{
    	    cout<<arr[i]<<" ";
    	}
    	cout<<endl;
	}
	return 0;
}