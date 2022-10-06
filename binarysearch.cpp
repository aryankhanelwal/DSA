#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2; // this is because we want our iutput to be in the range.
while (start<=end)
{

    if (arr[mid]==key)
    {
        return mid;
    }
    else{
        if (arr[mid]>key)
        {
            end = mid-1;
        }
    else{
        start = mid+1;
    }
    mid = start + (end - start)/2;
    }
    
}

return -1;

}

int main(){
    int even[] = {1,2,3,4,5,6};

    int index = binarysearch(even , 6, 8);
    cout<<index;
    return 0;
}