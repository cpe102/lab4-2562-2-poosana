#include<iostream>

using namespace std;

double findDistance(double x,double y,double z){
  double s = (x*z)+(0.5*y*z*z);
  return s;
}
// faddf
int main(){
  double u,a,t;
  cout << "Enter u = ";
  cin >> u;
  cout << "\nEnter a = ";
  cin >> a;
  cout << "\nEnter t = ";
  cin >> t;
  cout <<"\nS = "<<findDistance(u,a,t);
 
 

  return 0;
}



