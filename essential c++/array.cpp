#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1 [6] = {23,25,256};
    for(int i: arr1) cout<<i<<endl;
    
    cout<<"Enter val"<<endl;
    int n;
    cin>>n;
    int arr2 [n];
    
    arr2[0] = 23;
    arr2[2] = 23;
    arr2[3] = 23;

    // gives garbage value
    for(int i: arr2) cout<<i<<endl;

    return 0;
}
