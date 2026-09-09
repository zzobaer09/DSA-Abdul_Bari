#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin>>n;
    string * ss = new string[n];

    cout<<"Size of: "<<sizeof(ss)<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>ss[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<ss[i]<<endl;
    }



    return 0;
}
