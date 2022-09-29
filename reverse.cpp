#include<iostream>
using namespace std;

void reverse(int arr[], int n ){
    int start = 0;
    int end = n-1;
while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void print(int arr[], int n  ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int arr[3] = {1,5,7};

    reverse(arr,3);
    print(arr,3);

return 0;
    
}