#include<bits/stdc++.h>

using namespace std;

vector<long long int> vt;
queue<long long int>qdivisor;

void get_divisors(long long int n)
{
    long long int i;
    double sqrt_of_n = sqrt(n);

    for (i = 9; i>1; i--)
        if (n % i == 0)
        {
            //cout<<i;
            vt.push_back(i);
            qdivisor.push(i);
            get_divisors(n / i);
            return;
        }

    vt.push_back(n);
    qdivisor.push(n);
}

int main()
{
    long long int N;

    vt.clear();

    vector<int>save;

    cin >> N;

    if(N==0)
    {
        cout<<10<<endl;
        return 0;
    }

    get_divisors(N);



    int len = vt.size();

    if(vt[len-1]>9)
    {
        cout<<-1<<endl;
        return 0;
    }

    int mul=1;
    while(!qdivisor.empty())
    {


        int temp = qdivisor.front();


        if((mul*temp)<=9)
        {
            mul*=temp;
            qdivisor.pop();
        }
        else
        {
            save.push_back(mul);
            mul=1;
        }

    }
    save.push_back(mul);

    sort(save.begin(),save.begin()+save.size());

    for(auto &x : save)
    {
        cout<<x;
    }

    cout << endl;
    return 0;
}