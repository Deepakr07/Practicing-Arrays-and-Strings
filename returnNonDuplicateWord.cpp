/*
Approach
extract each words from the string using stringstream [stringstream iss(input) while(iss<< word){ manipulate the word}   ]  
pass the each wpr o a function named processWord where the frequecy of each character of the word is computed.
if in any situation if the frequecy of a character is more than 1 then a flag variable is set to 1;
after iterating the complete word if flag variable remains as zero, then that word iis pushed to a vector and that vector is returned.

*/
#include <bits/stdc++.h>
using namespace std;
vector<string>processWord(string word){
    int flag = 0;
    vector<string>result;
    unordered_map<char,int>mp;
    for(int i = 0 ; i<word.size();i++){
        mp[word[i]]++;
    }
    for(int i = 0 ; i<word.size();i++){
        if(mp[word[i]]>1){
            flag = 1;
        }
    }
    
    if(flag == 0){
        result.push_back(word);
    }
    return result;
    
}
vector<string> extractWords(string s){
     vector<string>result;
    stringstream iss(s);
    string word;
    while(iss >> word){
      vector<string>resultword;
      resultword = processWord(word);
      result.insert(result.end(),resultword.begin(),resultword.end());
    }
    return result;
}
int main()
{
    string s;
    getline(cin,s);
    vector<string>result;
    result = extractWords(s);
    for(string str:result){
        cout<<str<<' ';
    }
    return 0;
}
