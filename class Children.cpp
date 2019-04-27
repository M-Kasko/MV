
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Children
{
private:
	string name,surename, age;
	

public:
	
	void setName(string name_)
	{
		name=name_;
		
		
	}
	void setSurename( string surename_)
	{
		surename=surename_;
	}
	void setAge( string age_)
	{
		age=age_;
	}
	
	string getName ()
	{
		return name; 
		
	}
	string getSurename ()
	{
		return surename; 
		
	}
	string getAge ()
	{
		return age; 
		
	}
	
};

int _tmain(int argc, _TCHAR* argv[])
{
	
	string name,surename,age;
	
		
	Children kid;
	cout<<"Put name,surename,age of kid "<<endl;
	cin>>name>>surename>>age;
	cout<<endl;

	kid.setName(name);
	kid.setSurename(surename);
	kid.setAge(age);

	cout<<"kid: "<< "\n"<<kid.getName()<<"  "<<kid.getSurename()<<"  "<<kid.getAge()<< " years old"<<endl;
	Children teen;
	cout<<"Put name,surename,age of teen"<<endl;
	cin>>name>>surename>>age;
	cout<<endl;

	teen.setName(name);
	teen.setSurename(surename);
	teen.setAge(age);

	cout<<"teen "<< "\n"<<teen.getName()<<"  "<<teen.getSurename()<<"  "<<teen.getAge()<< " years old"<<endl;
	
	return 0;
}

