#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arr[6] = {2,3,4,5,6};
	int size;
	size = sizeof(arr)/sizeof(arr[0]);
	int length = size-1;
	//insert at begin of array
	int i;
	for(i = length; i>0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[i] = 1; //storing value at begining
	
	//displaying final aaray
	for(int j=0; j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
	
	return 0;
}
