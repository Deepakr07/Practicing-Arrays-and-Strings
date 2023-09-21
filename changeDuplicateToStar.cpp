//Approach
//char*s pointer to character array (alternative way to pass a string)
//initialize a hashh array of size 257 and initialize it to zero
//Run a for loop till length of string
// if hash[s[i]] == 0, then increment the value of hash[s[i]]
//else if hash[s[i]]>=1 then increment the hash[s[i]] value and set the s[i] value as '*'
// return s

#include<bits/stdc++.h>
using namespace std;
char* manipulateDuplicate(char* s)
{
    int hash[257] = {0};
    for(int i = 0 ; i< strlen(s) ; i++){
        if(s[i] == ' ')
        continue;
        
        else if(hash[s[i]] == 0){
            hash[s[i]]++;
            
        }
        else if(hash[s[i]] >=1){
            hash[s[i]]++;
            s[i] = '*';
        }
    
        
    }
    return s;
    
    
}

int main(){
    
    char s[100];
    char *result;
    cin.getline(s,100);
    result = manipulateDuplicate(s);
    cout<<result;
    
    
}