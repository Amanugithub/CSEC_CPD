#include <iostream>
#include <string>
#include <set>

 using namespace std;

 int main(){
    string username;
    cin>>username;
    //create a set
    set<char>myset(username.begin(),username.end()); 

    if(myset.size()==1){
        cout<<"IGNORE HIM!";
    }
    if(myset.size()%2 != 0){
        cout<<"IGNORE HIM!";
    }
    if(myset.size()%2 == 0){
        cout<<"CHAT WITH HER!";
 }}