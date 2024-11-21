#include<iostream>
#include<algorithm>
using namespace std;


string reverseWord(string& s){
    int n = s.length();
    string ans = "";
    reverse(s.begin(), s.end());
    for(int i = 0; i < n; i++){
        string word = ""; int count = 0;
        while (i < n && s[i] != ' ')
        {
            word += s[i]; i++;
            count++;
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0){
            ans += " " + word + to_string(count);
        } 
    }
    return ans.substr(1);
}


int main(){
    string s = "helloii  world";

    cout<<reverseWord(s);


    return 0;
}