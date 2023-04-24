#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
vector<int>kRotate(vector<int>a,int k)
{
	int n=a.size();
	for(int i=0;i<k;i++)
	{
		int temp=a[n-1];
		for(int j=n-1;j>=0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=temp;
	}
	return a;
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	int k;
	cin>>k;
	kRotate(arr,k);
	auto p=kRotate(arr,k);
	for(auto i:p){
		cout<<i<<" ";
	}
	cout<<endl;
}