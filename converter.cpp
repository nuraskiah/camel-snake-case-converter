#include <iostream>
#include <string>
using namespace std;

 string t="_";

 string toCamelCase(string s){
    string u;
    if(s.find(t)!=string::npos){
      u=toupper(s[s.find(t)+1]);
      s.replace(s.find(t)+1, 1, u);
      s.erase(s.find(t), 1);
      return toCamelCase(s);
    }
    return s;
 }

 string to_snake_case(string s){
    string l;
    if(s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")!=string::npos){
      l=tolower(s[s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ")]);
      s.insert(s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), t);
      s.replace(s.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ"),1,l);
      return to_snake_case(s);
    }
	return s;
 }
 
 int main(){
    string s;
    cin>>s;

    //check if string is camel or snake case
    if(s.find(t)!=string::npos){
        s=toCamelCase(s);
    } 
    
    else{
        s=to_snake_case(s);
    }
	
	cout<<s<<endl;
	
    return 0;
 }
