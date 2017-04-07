#include<bits/stdc++.h>

using namespace std;

int main(){

    int N;

    cin>>N;

    int sum=0;

    if(N>0)
    {
        for(int i=1;i<=N;i++)
            sum+=i;
    }
    else if(N<=0)
    {
        for(int i=1;i>=N;i--)
            sum+=i;
    }

    cout<<sum<<endl;

}