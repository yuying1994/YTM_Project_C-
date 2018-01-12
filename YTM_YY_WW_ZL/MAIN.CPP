
#include "project.h"

using namespace std;
int main()
{
  double FV =100;
  double c ;
  double PV;
  double d;
  double N ;
  double a=0.000001;
  double b=10;
  
  
cout << "Please enter the price of the bond: ";
	cin >> PV;
    cout << "Please enter the coupon rate of the bond (in decimal): ";
    cin >> c;
    
    cout << "Please enter the years of the bond: ";
    cin >> N;
    cout << "Please enter the d of the bond: ";
    cin >> d;

   double ytm = BisecYTM(FV,c,PV,d,N,a,b);
  cout<<"YTM = "<<ytm<<endl;
return 0;
}