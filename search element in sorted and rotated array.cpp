int getpivot(vector<int>&arr, int n)
{
    int s=0;
    int e = arr.size()-1;
    while(s<e)
    {
        int mid = s+(e-s)/2;
        
        if(arr[mid] >= arr[0])
            s = mid+1;
        else
            e = mid;
    }
    return s;
}

int binary(vector<int>&arr, int s, int e, int key)
{
    while(s<=e)
    {
    int mid = s+(e-s)/2;
    if(arr[mid] == key)
        return mid;
    else if(key < arr[mid])
        e = mid-1;
    else
        s = mid+1;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getpivot(arr,n);
    if(k>= arr[pivot] && k <= arr[n-1] )
        return binary(arr, pivot, n-1, k);
    else
        return binary(arr, 0, pivot-1, k);
}

