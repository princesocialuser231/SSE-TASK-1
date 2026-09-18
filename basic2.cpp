# include<iostream>

using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo=9;
    glo=78;
    // int a =14;
    // int b =15;
   int a=14, b=16;
   float pi=3.14;  // takes 4 bytes
   double e= 2.7324; // takes 8 bytes 
   char c='u';  // takes 1 byte
   bool is_true = false; // takes 1 byte
   sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.\n Here the value of a is "<<a<<".\n The value of b is "<< b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of e is "<<e;
    cout<<"\nThe value of c is "<<c;
     return 0;
}