#include <iostream>
#include <string>
using namespace std;
 
 int main(){
    string s,u,b;
    string t="_";
    int a,c,i,j;
    int arr[1000];
    cin>>s;
 
    //to camel case
    if(s.find(t)!=string::npos){
        while(s.find(t)!=string::npos){
            u=toupper(s[s.find(t)+1]);
            s.replace(s.find(t)+1, 1, u);
            s.erase(s.find(t), 1);
        }
    }
 
    //to snake case
    else{
        while(s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")!=string::npos){
            b=tolower(s[s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")]);
            s.insert(s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), t);
            s.replace(s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"),1,b);
        }
    }
 
    cout<<s<<endl;
 
    return 0;
 }
