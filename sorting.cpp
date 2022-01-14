#include <bits/stdc++.h>
using namespace std;
void bubble(int x[], int y)
{
    int i,j,k;
    for(i=1;i<y;i++)
    {
        for(j=0;j<y-i;j++)
        {
            if(x[j]>x[j+1])
            {
                k=x[j+1];
                x[j+1]=x[j];
                x[j]=k;
            }
        }
    }
    for(i=0;i<y;i++)
    cout<<x[i]<<", ";
}
void selection(int x[], int y)
{
    int i,j,k;
    for(i=0;i<y;i++)
    {
        for(j=0;j<y;j++)
        {
            if(x[j]>x[i])
            {
                k=x[i];
                x[i]=x[j];
                x[j]=k;
            }
        }
    }
    for(i=0;i<y;i++)
    cout<<x[i]<<", ";
}
void insertion(int x[], int y)
{
    int i,j,k,l=0;
    while(l<y)
    {
        for(i=1;i<y;i++)
        {
            for(j=(i-1);j>=0;j--)
            {
                if(x[j]>x[i])
                {
                    k=x[i];
                    x[i]=x[j];
                    x[j]=k;
                }
            }
        }
        l++;
    }
    for(i=0;i<y;i++)
    cout<<x[i]<<", ";
}
int main()
{
    int i,a,n,x[20];
    cout<<"\nEnter the no of items in list (n<20): ";
    cin>>n;
    cout<<"\nEnter the list:\n";
    for(i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nWhat kind of sort you wanna do: ";
    cout<<"\n1-Bubble Sort\n2-Selection sort\n3-Insertion sort\n";
    cin>>a;
    switch(a)
    {
        case 1: bubble(x,n);
                break;
        case 2: selection(x,n);
                break;
        case 3: insertion(x,n);
                break;
    }
    return 0;
}


