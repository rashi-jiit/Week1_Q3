#include <iostream>
using namespace std;

int main(){
    string s0;
    cout<<"Enter the String: ";
    cin>>s0;
    for (int i=s0.length();i>=0;i--){
        cout<<s0[i];
    }
}
