// классы 4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Figure
{
public:
	int xA,xB,xC,xD,yA,yB;
	
	Figure ()
	{
		int i;
		cout << " Coordinate system :"<<" xA,xB,xC, & xD "<<endl;
		cin>> xA>>xB>>xC>>xD;
		cout<<endl;
		cout<<" yD = yA, yB=yC (coordinate axis parallel of the bases of the trapezoid) "
			<<endl<< "Put yA & yB "<<"\n";
		cin>>yA>>yB;
		
		}

	double Check()
	{
		if(xD-xA==xC-xB)
		{ 
			cout<<"it is not trapezoid";
			return 0;
		}
		if (xB-xA==xD-xC)			
				cout << "the trapezoid is isosceles"<<endl;
		else cout<<"the trapezoid is Not isosceles"<<endl;
	}

	void Sides_and_bases()
	{		
		cout<<"lengths of lateral side 1 = "<<sqrt(pow(xD-xC,2)+pow(yB-yA,2))<<"\n"
		<<"lengths of lateral side 1 = "<<sqrt(pow(xB-xA,2)+pow(yB-yA,2))<<endl;
		
		cout<<"base a = "<<xC-xB<<"\n"<<"base b = "<<xD-xA<<endl;
		cout<<"P = "<<xC-xB+xD-xA+sqrt(pow(xB-xA,2)+pow(yB-yA,2))+sqrt(pow(xD-xC,2)+pow(yB-yA,2))<<endl;
		cout<<"S = "<<((xC-xB+xD-xA)/2)*(yB-yA)<<"\n";
		
		}
	double Area ()
	{
		double S;
		S=((xC-xB+xD-xA)/2)*(yB-yA);
		return S ;
	}
	
	
};

int _tmain(int argc, _TCHAR* argv[])
{	
	double averege;
	int count=0,k;

	Figure trapezoid1;
	trapezoid1.Check();
	trapezoid1.Sides_and_bases();
	trapezoid1.Area();
	Figure trapezoid2;
	trapezoid2.Check();
	trapezoid2.Sides_and_bases();
	trapezoid2.Area();
	Figure trapezoid3;
	trapezoid3.Check();
	trapezoid3.Sides_and_bases();
	trapezoid3.Area();

	double *mas_S=new double[3];
	mas_S[0]=trapezoid1.Area();
	mas_S[1]=trapezoid2.Area();
	mas_S[2]=trapezoid3.Area();
	averege= (mas_S[0]+	mas_S[1]+mas_S[2])/3;
	for(k=0;k<3;k++)
	{
		if(mas_S[k]>averege)
			count++;

	}
	cout<<"namber of trapezoid where S > averege S : "<<count<<endl;	
	
	return 0;
}

