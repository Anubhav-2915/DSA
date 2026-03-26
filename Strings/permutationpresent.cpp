// if any permutation of s1 is present in s2 then return true else false
#include <iostream>
#include <string>
using namespace std;

bool freqsame(int freq1[], int freq2[]){
    for(int i = 0; i<26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
bool checkinclusion ( string s1, string s2){
    int freq[26] = {0};
    for(int i = 0; i<s1.length();i++){
        freq[s1[i] - 'a']++;
    }

    for(int i = 0; i<s2.length();i++){
        int windfreq[26] = {0};
        int windidx = 0, idx = i;

        while(windidx <s1.length() && idx < s2.length() ){
            windfreq[s2[idx] - 'a']++;
            windidx++; idx++;
        }
        if (freqsame(freq, windfreq)){
            return true;
        }
    }
    return false;
}

int main(){
    string substr;
    string mainstr;
    cout<<"enter the substring for permutations: ";
    cin>>substr;
    cout<<"enter the mainstring to be checked: ";
    cin>>mainstr;

    cout<<checkinclusion(substr, mainstr);

}