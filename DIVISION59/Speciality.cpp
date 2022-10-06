#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){
        int x,y,z;
        cin>>x>>y>>z;
        if (x>y)
        {
            if (x>z)
            {
                cout<<"Setter"<<endl;

            }
            else
            {
                cout<<"Editorialist"<<endl;
            }
            
        }
        else
        {
            if (y>z)
            {
                cout<<"Tester"<<endl;
            }
            else
            {
                cout<<"Editorialist"<<endl;
            }
            
            
        }
}
    return 0;
}