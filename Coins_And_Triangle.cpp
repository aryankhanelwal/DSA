#include<iostream>
using namespace std;


int main(){

 int T;
    cin >> T;
    while (T--){

int coin,row;
    cin>>coin;
     row = coin*(coin+1)/2;
    for (int i = 0; i < coin; i++)
    {
       int h=1;
        while (row<=coin)
        {
            h = h+1;
            cout<<h-1;
        }
        
    }
    }
    
    
    

    return 0;
}