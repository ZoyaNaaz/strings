#include<iostream>
#include<algorithm>
using namespace std;

void nextPermutation(string &s){
    int n = s.length();
    int pivot = -1;

    // S1, find pivot
    for (int i = n-2; i > 0; i--)
    {
        if(s[i] < s[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(s.begin(),s.end());
    }
    // S2, swap pivot with n-1th ele
    swap(s[pivot], s[n-1]);

    // S3, reverse pivot+1 to n-1
    reverse(s.begin()+pivot+1, s.end());
    
}
int main(){
    string s = "abc";

    nextPermutation(s);
    cout<<s<<endl;

    // cout<<next_permutation(s.begin(), s.end())<<endl; //can also find next per with build in func -> itss a part of STL 
    // cout<<s<<endl;
    return 0;
}