// классы1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Tiles
{
public:
	string brand;
	int size_h; 
	int size_w;
	double price;
	Tiles (	string brand,	int size_h, int size_w,	double price_)
	{ 
		this->brand=brand;
		this->size_h=size_h;
		this->size_w=size_w;
		this->price=price_;
	}
	void getData (	)
	{
		cout<< brand<<"\n"<<size_h<<"\n"<<size_w<<"\n"<<price<<endl;
		cout<<endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{

	Tiles Black ("adf",11,13,12.4);
	Black.getData();
	Tiles Red ("sgs",11,44,34.1);
	Red.getData();
	return 0;
}

