#include<iostream>
using namespace std;
int arrmax(int arr[],int n){
   int maxi = INT_MIN;
for (int i = 0; i < n; i++)
{
    if (maxi < arr[i])
    {
        maxi = arr[i];
    }
    
}
    return maxi;
}
int arrmin(int arr[],int n){
   int mini = INT_MAX;
for (int i = 0; i < n; i++)
{
    // if (mini >arr[i])
    // {
    //     mini = arr[i];
    // }
     mini= min(mini , arr[i]);
}
    return mini;
}
int main()
{
    int n;
    int array[100];
    cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
cout<<arrmax(array,n);
cout<<arrmin(array,n);

return 0 ;

}

