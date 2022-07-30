#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int index, num;
	int arr[8] = {2,3,10,5,6};
	int i=0;
	int j=7;
	while(i<j) // for reversing an array
	{
		int temp;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	for(int i =0; i<8;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
