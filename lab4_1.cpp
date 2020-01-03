#include<iostream>
#include<cmath>
using namespace std;

double function(double x){
    double y=(3*x*x*x)+(2*2.71828)+pow(2,((2*x)+1))+pow(((x*x)+1),0.5);
    return  y;
} 
// afdaf
int main(){
    double a;
    cout << "Enter x: ";
    cin >> a;
    cout<<"\nResult y: "<<function(a);

    return 0;

}
    



    

    
