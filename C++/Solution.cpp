#include <iostream>
using namespace std;
int input()
{
    string num;
    cin>>num;
    for(int i=0;i<num.length();i++)
    {
        if(!isdigit(num[i]))
        {
        cout<<"Enter a valid odd Integer :: ";
        return input();
        }
    }
    int n = stoi(num);
    if(n%2==0||n<=1)
    {
        cout<<"Enter only odd numbers and not 1 :: ";
        return input();
    }
    else
        return n;
}
void diode(int n)
{
    for(int i=1;i<n+3;i++)
    {
        for(int j=0;j<((n/2)+2);j++)
        {
            if(i<=((n/2)+2) && j<i)
                cout<<"@";
            else if(i>((n/2)+2)&&j<(2*((n/2)+2)-i))
               cout<<"@";
            else cout<<" ";
        }
        for(int j=0;j<n+2;j++)
        {
            if(i==((n/2)+2)) cout<<"*";
            else cout<<" ";
        }
        for(int j=0;j<n;j++)
            if(i>1 && i<n+2) cout<<"@";
        cout<<"\n";
    }
    cout<<"Number of lines 'only odd number' :: ";
    diode(input());
}
int main()
{
    cout<<"It is a symbol like a diode.\n\nNumber of lines 'only odd number' :: ";
    diode(input());
    return 0;
}
