#include  <iostream>


using namespace std;
int main(){
    int a,b;
    int year=0;
    cin>>a;
    cin>>b;
   do{
        a=a*3;
        b=b*2;
        year++;
    } while(a<=b);
    cout<<year;
}