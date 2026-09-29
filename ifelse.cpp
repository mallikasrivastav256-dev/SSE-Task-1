#include<iostream>
using namespace std;
int main()
{
    int budget;
    cout<<"Enter your budget :"<<endl;
    cin>> budget;

    if
    (budget>2000000){

        cout<<"you can buy thar"<<endl;
    }
    else {
        cout<<"you cannot buy thar"<<endl;
    }

    int age;
    cout<<"Enter your age :";
    cin>>age;
    if (age>=18){
        cout<<"you can vote"<<endl;
    } 
    else {
        cout<<"you cannot vote"<<endl;
    }
    return 0;
}