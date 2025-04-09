//reverse a string
#include<iostream>
int main() {
    string toRev= "Sandy";
    for(int i=toRev.size(); i>=0; i--){
        cout<<toRev[i];
    }
}
