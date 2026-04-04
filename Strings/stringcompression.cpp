// an array of chars is given you need to compress the given array by writing the no. of times any char is present in the array 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &chars){
    cout<<"running compress....";
    int n = chars.size();
    int idx = 0;
    int i = 0;
    while(i <n){
        int count = 0;
        char ch  = chars[i];
        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        chars[idx++]= ch;
            if(count > 1){
            string str = to_string(count);
            for(char dig : str){
                chars[idx++] = dig;
            }
        }
    }
    chars.resize(idx);
    return idx;
}


int main(){
    cout<<"enter the no. of chars for the char array: ";
    int n;
    cin>>n;
    vector <char> chars(n);
    cout<< "enter the chars for the char array: ";
    for(int i = 0; i<n; i++){
        cin>> chars[i];
    }
    int idx = compress(chars);
    
    cout<<"the new size of the compressed array is: "<<idx<<endl;
    for(int i = 0; i<idx; i++){
        cout<<chars[i];
    }
    return 0;
}