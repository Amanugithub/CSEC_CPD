#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    string prev,current;
    cin>>prev;//first value
    for(int i=1;i<n;i++){
        
        cin>>current;
        if(current != prev){
            count++;
        }
        prev = current;
    }
        cout<<count;
}