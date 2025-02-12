#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main (){
    string str1;
    string str2;
    cin>>str1>>str2;
    for (char &ch : str1) {
        if(isupper(ch))
            ch = tolower(ch);
    }
        for (char &ch : str2) {
        if(isupper(ch))
            ch = tolower(ch);
    }
    //compare
    int result = str1.compare(str2);
    if (result == 0) {
        std::cout <<0<<endl;
    } else if (result < 0) {
        std::cout << -1<<endl;
    } else {
        std::cout << 1<<endl;
    }
}
