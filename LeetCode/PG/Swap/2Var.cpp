// Swaping using XOR bit manipulation
int main() {
    // std::cout << "Hello World!\n";
    int a, b;
    cin>>a;
    cin>>b;
    cout<<"before swapping, a:"<<a<<" b: "<<b<<endl; 
    a= a + b;
    b= a - b;
    a= a - b;
    cout<<"before swapping, a:"<<a<<" b: "<<b<<endl; 
    
}
