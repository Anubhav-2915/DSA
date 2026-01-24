#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>vec; //syntax 1 for delaring vector 
    vector<int>vec2(5,0); //syntax 2 for declaring vector
    vector<int>vec3{1,2,3,4}; //syntacx 3 for declaring vector

    //for each loop for vectors

    for(int val: vec3){
        cout<<val<<endl;
    }

    //vector functions:-
    cout<<vec3.size()<<endl;
    vec.push_back(24);
    vec3.pop_back();
    cout<<vec.front()<<endl;
    cout<<vec3.back()<<endl;
    cout<<vec2.at(3)<<endl;

    return 0;
}