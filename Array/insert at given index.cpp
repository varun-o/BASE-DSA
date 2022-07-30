#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int index, num;
	int arr[8] = {2,3,10,5,6};
	cout<<"ENTER INDEX NUMER AND VALUE WHERE TO INSERT "<<endl;
	cin>>index>>num;
	int size;
	size = sizeof(arr)/sizeof(arr[0]);
	int length = size-1;
	//insert at given index of array
	int i;
	for(i = length; i>index; i--)
	{
		arr[i] = arr[i-1];
	}
	
	arr[i] = num; //storing value at index
	
	//displaying final aaray
	for(int j=0; j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
	
	return 0;
}
