#include<iostream>
using namespace std;

int main(){
    int array[100],sum=0, n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum+array[i];
        /* code */
    }
    
    
    
    cout<<"the sum of array is"<<sum;
    
    return 0 ;

}