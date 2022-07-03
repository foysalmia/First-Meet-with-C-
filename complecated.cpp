#include<bits/stdc++.h>
using namespace std;

int total_sum(int a[],int n)
{
    if(n==0)return 1;
    int small=1;
    small=total_sum(a,n-1);
    return small * a[n-1];
}

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    int x = total_sum(arr,a);
    cout<<x<<endl;
    return  0;
}
