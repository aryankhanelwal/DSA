#include <iostream>
using namespace std;

int main() {
    int T,Test,first ,second;
    
    cin >>T;
    while(Test<T){
    
    
    cin>>first>>second;
    if(first<second)
    {
        cout<<"FIRST";
    }
    else if (second<first){
        cout<<"SECOND";
    }
    else
    {
        cout<<"ANY";
    }
    cout<<"\n";
    }
    Test++;
	return 0;
}