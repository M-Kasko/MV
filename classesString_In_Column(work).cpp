#include "stdafx.h"
#include <iostream>
#include<random>
using namespace std;
 
class String_in_column
{
 int ** mas_of_date;
public:
 void make_Massive(int height1, int width1)
{
	int n;
	mas_of_date = new int*[height1]; 
	for (int i = 0; i < height1; i++)
	 {
	   mas_of_date[i] = new int[width1];
     }
 
 for (int i = 0; i < height1; i++) 
 { 
	for (int j = 0; j < width1; j++)
	{
		n=rand()%10;
		mas_of_date[i][j] = n;
		cout << mas_of_date[i][j] << " ";
	} 
  cout << endl;
 }
}

 void Change(int height1, int width1)
{
 int** temp_mas = new int*[width1]; 
 for (int i = 0; i < width1; i++)
 {
 temp_mas[i] = new int[height1];
 } 


 for (int i = 0; i < width1; i++) 
{
	for (int j = 0; j < height1; j++)
	{
		temp_mas[i][j] = mas_of_date[j][i]; 
	}
	cout << endl;
}
 
 for (int i = 0; i < height1; i++) 
 {
	delete[] mas_of_date[i]; 
 }
	delete[] mas_of_date;
 
 mas_of_date = new int*[width1]; 
 for (int i = 0; i < width1; i++)
 {
 mas_of_date[i] = new int[height1];
 } 
 for (int i = 0; i < width1; i++) 
 { 
   for (int j = 0; j < height1; j++)
   {
     mas_of_date[i][j] = temp_mas[i][j]; 
     cout << mas_of_date[i][j] << "  ";
   }
   cout <<  endl;
 }
  for (int i = 0; i < width1; i++) 
 {
   delete[] temp_mas[i];
 }
  delete[] temp_mas;
 }
   
	
};
 
int main()
{
 setlocale(LC_ALL, "rus");

 int height1;
 int width1;

 cout << "Put height ";
 cin >> height1;
 cout << "Put weight ";
 cin >> width1;
 
  String_in_column Massive;
 
 Massive.make_Massive(height1, width1);
 
 cout << "\n Change: ";
 Massive.Change(height1, width1); 
 
 return 0;
}