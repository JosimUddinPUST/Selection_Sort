#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ary;
    int i,n,ch,j,tmp,loc,total=0,small;
    cout<<"Enter an array: ";
    while(cin>>n)
    {
        ary.push_back(n);
        total++;
        if(getchar()=='\n')
            break;
    }
    for(i=0; i<total; i++)
    {
        small=ary[i];
        loc=i;
        for(j=i+1; j<total; j++)
        {
            if(small>ary[j])
            {
                loc=j;
            }
        }
        tmp=ary[i];
        ary[i]=ary[loc];
        ary[loc]=tmp;
    }
    cout<<"Enter your choice:"<<endl;
    cout<<"1. Ascending Order."<<endl;
    cout<<"2. Descending Order."<<endl;
    cout<<"3. Both."<<endl;
    cin>>ch;
    if(ch==1)
    {
        system("CLS");
        cout<<"The ascending sorted array is: ";
        for (auto it = ary.begin(); it<ary.end(); it++)
            cout << *it << " ";
    }
    else if(ch==2)
    {
        system("CLS");
        cout<<"The descending sorted array is: ";
        for (auto it = ary.end()-1; it>=ary.begin(); it--)
            cout << *it << " ";
    }
    else if(ch==3)
    {
        system("CLS");
        cout<<"The ascending sorted array is: ";
        for (auto it = ary.begin(); it<ary.end(); it++)
            cout << *it << " ";
        cout<<endl<<"The descending sorted array is: ";
        for (auto it = ary.end()-1; it>=ary.begin(); it--)
            cout << *it << " ";
    }
    else
    {
        system("CLS");
        cout<<"Wrong input. Try again.";
    }

    return 0;
}
