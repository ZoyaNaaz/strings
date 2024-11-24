#include<iostream>
using namespace std;

bool isSameFreq(int f1[], int f2[]){
    for(int i = 0; i < 26; i++){
        if(f1[i] != f2[i])
            return false;
    }
    return true;
}

bool stringPermutation(string& s1, string& s2){
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    int windSize = s1.length();

    for(int i = 0; i < s2.length(); i++){
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while(windIdx < windSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            windIdx++; idx++;
        }
        if(isSameFreq(freq, windFreq)){ //found
            return true;
        }
    }
    return false;
}


int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout<<stringPermutation(s1, s2);

    
    return 0;
}