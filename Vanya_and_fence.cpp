#include <iostream>

using namespace std;
int main(){
    int n,h;
    int width=0;
    cin>>n;
    cin>>h;
    int a;//height of each person
    for (int i = 0;i<n;i++){
        cin>>a;
        if(a>h) 
            width+=2;
        else
            width++;
    }
    cout<<width<<endl;

}