#include <iostream>
#include <string>

using namespace std;
int main(){
    int n;
    string s;
    int anton=0;
    int danik=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A')
            anton++;
        else if (s[i]=='D')
            danik++;
            
}
if(anton>danik)
    cout<<"Anton";
else if (danik>anton)
    cout<<"Danik";
else
    cout<<"Friendship";
}