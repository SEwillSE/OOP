#include<iostream>
using namespace std;
int search(float searcharray[],int size,	float searchKey) {
    for(int i=0; i<size; i++) {
        if(searcharray[i]==searchKey)
            return i;

    }
    return -1;

}
int main()
{   int size;
    cout<<"enter the size of elements of searcharray : ";
    cin>>size;

    float searcharray[size];
    cout<<"enter the elements of searcharray:\n ";
    for(int i=0; i<size; i++) {
        cin>>searcharray[i];
    }

    float searchKey;
    cout<<"enter the element of searcharray you want to search: ";
    cin>>searchKey;
    int found=search(searcharray,size,searchKey);

    if(found==-1)
        cout<<searchKey<<" is not found";
    else
        cout<<searchKey<<" is found at index: "<<found;
    return 0;
}