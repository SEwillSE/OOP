#include<iostream>
using namespace std;
int binary_search(int array[],int size,int key) {
    int  start=0,end=size-1;
    while(start<=end)
    {   int median=(start+end)/2;
        if(key==array[median])
            return median;
        if(key<array[median])
            end=median-1;
        else
            start=median+1;
    }
    return -1;
}
int main()
{   int size;
    cout << "enter the size:   ";
    cin >> size;

    int array[size];
    cout<<"enter sorted  data in its increasing order:   ";
    for(int i=0; i<size; i++)
        cin>>array[i];

    cout<<"this is  your data:   ";
    for(int x:array)
        cout<<x<<"  ";

    int key;
    cout<<"\n\aenter the  number to be search:   ";
    cin>>key;

    int received=binary_search(array,size,key);
    if(received==-1)
        cout<<key<<"is not found ";
    else
        cout<<key<<"is found at index:  "<<received;
    return 0;
}