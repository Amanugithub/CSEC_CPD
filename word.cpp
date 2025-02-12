#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string line;
    int up=0;
    int low = 0;

    cin>>line;

    for(int i = 0 ;i<line.length();i++){
        if(isupper(line[i]))
            up++;
        else
            low++;
    }
    if(up>low){
        for(int i = 0 ;i<line.length();i++){
            line[i] = toupper(line[i]);
        }
        cout<<line;
    }
    else if (low>=up) {
        for(int i = 0 ;i<line.length();i++){
            line[i] = tolower(line[i]);
        }
        cout<<line;
    }

}