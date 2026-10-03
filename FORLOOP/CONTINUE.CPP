#include<iostream>
using namespace std;
int main()
{
    for(int i=511;i<=1999;i++){
        if(i==515){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
