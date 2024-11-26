#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char op;
    double a,b;
    cout<<"Choose an operator (+,-,*,/, s for sin, c for cos, t for tan):";
    cin>>op;
    if( op == 's' || op == 'c' || op == 't'){
        cout<<"enter a number (in degrees):";
        cin>>a;

        // convert degrees into radians
        double rad = a*M_PI/180.0;

        switch(op){
            case 's':
                 cout<<"sin("<<a<<") = "<<sin(rad);
                 break;
            case 'c':
                cout<<"cos("<<a<<") ="<<cos(rad);
                break;
            case 't':
                cout<<"tan("<<a<<") ="<<tan(rad);
                break;
            default:
                cout<<"Invalid operator!"<<endl;
        }

    }
    else{
        cout<<"enter two number : ";
        cin>>a>>b;
    
    switch(op){
        case '+':
        cout<<"Result : "<<a+b<<endl;
        break;
         case '-':
        cout<<"Result : "<<a-b<<endl;
        break;
         case '*':
        cout<<"Result : "<<a*b<<endl;
        break;
         case '/':
         if(b != 0){
            cout<<"Result :"<<a/b<<endl;
         }
         else{
            cout<<"Error: Division by zero!"<<endl;
         }
        break;
        default:
        cout<<"Invalid Operator!"<<endl;
    }
 }
}