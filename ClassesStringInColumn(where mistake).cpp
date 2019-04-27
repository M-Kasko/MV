
#include "stdafx.h"
#include <iostream>
#include <random>
using namespace std;

class StringInColumn 
{
int **mas_of_date;
public:	
	void String_ (int height1,int width1)
	{			
		int n;
			mas_of_date = new int*[height1];
		for ( int i=0;i<height1;i++)
		{
			mas_of_date[height1]=new int [width1];
		}
		for ( int i=0;i<height1;i++)
		{
			for ( int j=0;j<width1;j++)
			{
				n=rand()%10;
			 mas_of_date[i][j]=n;  ////////////////
			  cout << mas_of_date[i][j]<<"  ";
			}
			cout<<endl;
		}
	}
				
	
	void change_numbers (int height1,int width1)
	{
			
	for ( int i=0;i<width1;i++)
		{
			for ( int j=0;j<height1;j++)
			  {
				  cout<< mas_of_date[j][i]<<"  "; 
			  }
			  cout<<endl;
			}
						
		}
			
};


inline int _tmain(int argc, _TCHAR* argv[])
{

	StringInColumn Mass;
	Mass.String_(3,5);
	Mass.change_numbers(3,5);
	

	
		
	return 0;
}

