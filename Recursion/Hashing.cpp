#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; //inputs should be from 1-10
    }

    int  hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    cout<<"enter number of querries"<<endl;
    int q;
    cin>>q;
    cout<<"enter querries:-"<<endl;
    while(q--){
        int numbers;
        cin>>numbers;
        cout<<"no.of times:-"<<hash[numbers]<<endl;
    }


}
