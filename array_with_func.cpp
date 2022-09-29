#include<iostream>
using namespace std;
void printArr(int arr[]){
    for (int i = 0; i < 10; i++)
    {
    cout<<arr[i]<<endl;
    }

}
int main(){
    int array[100];
    fill_n(array,100,4);
    printArr(array);
    int size= sizeof(array)/sizeof(int);
    cout<<size;
    return 0;
}