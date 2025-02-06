#include <iostream>


using namespace std;
int main(){
int n;
int decisions=0;
cin>>n;//number of problems
int petya,vasya,tonya;
for (int i=0 ;i<n;i++){
    cin>>petya;
    cin>>vasya;
    cin>>tonya;

    if((petya+vasya+tonya)>= 2)decisions++;

}
cout<<decisions;


}