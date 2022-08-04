#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m,n;
	cout<<"Enter size of first array"<<endl;
	cin>>m;
	int A[m];
	cout<<"Enter elements of 1st array "<<endl;
	for(int i =0; i<m; i++)
	{
		cin>>A[i];
	}
	cout<<"Enter size of second array"<<endl;
	cin>>n;
	int B[n];
	cout<<"Enter elements of 2nd array "<<endl;
	for(int i =0; i<n; i++)
	{
		cin>>B[i];
	}
	int C[m+n];
	int i=0, j=0, k=0;
	for(i,j ; i<m, j<n;)
	{
		if(A[i] < B[j])
		{
			C[k] = A[i];
			k++, i++;
		}
		else
		{
			C[k] = B[j];
			k++, j++;
		}
	}
	while(i<m)
	{
		C[k] = A[i];
		k++, i++;
	}
	while(j<n)
	{
		C[k] = B[j];
		k++, j++;
	}
	for(int i=0; i<10; i++)
	{
		cout<<C[i]<<" ";
	}
	return 0;
}
