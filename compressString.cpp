#include<iostream>
#include<vector>
using namespace std;


int compressString(vector<char>& chars){
     int idx = 0, n = chars.size();
     for(int i = 0; i < n-1; i++){
        int count = 0;
        char ch = chars[i];
        while(i < n && chars[i] == ch){
            count++; i++;
        }
        if(count == 1){
            chars[idx++] = ch;
        }
        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(auto val : str){
                chars[idx++] = val;
            }
        }
        i--;
     }
     chars.resize(idx);
     return idx;
}

int main(){
    vector<char>s = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout<<compressString(s)<<endl;
    for(auto val : s){
        cout<<val<<" ";
    }
    return 0;
}


