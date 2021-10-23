#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &arr,int n,int val)
{
	int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            return arr[i];
        }
        else if(arr[i]<val)
        {
            largest=max(largest,arr[i]);
        }
    }
    return largest;
}
int main()
{
	int n,val;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	cin>>val;
	cout<<lowerBound(arr,n,val)<<endl;
}