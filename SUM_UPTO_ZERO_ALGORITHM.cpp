#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array:  ";
    cin>>size;
    int numbers[size];
    cout<<"enter values in the following conditions:  \n1:all values must be integers\n2:you should enter 0 at least b/n two values\n3:the last elemet must be d/t from 0";
    for(int i=0; i<size; i++) {
        cout<<"\n enter the "<<i+1<<" element:  ";
        cin>>numbers[i];
    }
    int nsize=0;
    for(int i=0; i<size; i++) {
        if(numbers[i]==0)
            nsize++;
    }
    int sum=0, psum[nsize+1];
    int j=0;
    for(int i=0; i<size; i++) {

        sum+=numbers[i];
        psum[j]=sum;
        if(numbers[i]==0) {
            j++;
            sum=0;

        }
    }
    cout<<"\n sum of values up to 0 :";
    for(int result:psum)
        cout<<result<<" ,";
    return 0;
}