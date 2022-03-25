#include<bits/stdc++.h>
using namespace std;
//access specifiers -pulic and private
 class Car{
 private:
 	float price;
 public:
 	int model_no;
 	char name[30];
 	Car()
 	{
 		cout<<"Constructer is called";
 	}
   Car(float p,int m,char *n)
   {
   	price =p;
   	model_no =m;
   	strcpy(name,n);
   }
 	void print()
 	{
 		cout<<"Name : "<<name<<"\n";
 		cout<< "Model_no : "<< model_no<<endl;
 		cout<< "price :"<< price<< endl; 
 	}
 	
 };
 int main()
 {
    
    Car c;
    //c.price =100;
    Car d(222,333,"audi");  
    c.model_no=112;
    c.name[0]='B'; 
    c.name[1]='M'; 
    c.name[2]='W'; 
    c.name[3]='\0';
   //cout<< "price : "<<c.price<< "\n model_no: "<< c.model_no<<endl;
    cout<<endl;
    c.print();
    cout<< "\n"<<d.print();
    //cout<< sizeof(c)<<endl;
   // cout<< sizeof(Car)<<endl;
    return 0;
 }