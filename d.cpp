#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

struct student
{
	string fname;
	string name;
	string no_matric;
	string sect;
	string faculty;
	string course;
	string intake;
}studentData;


struct CGPA
{
	string matric;
	string c_sub1;
	string c_sub2;
	string c_sub3;
	string c_sub4;
	string c_sub5;
	string c_sub6;
	string gpa;
	string gred;
	string fail;
	string re_paper;
	string m1;
	string m2;
	string m3;
	string m4;
	string m5;
	string m6;
	string agn;
	
}studentCGPA;


int main ()
{
	int i=0, j;
	char choice;
	string find;
	string srch;

while(1)
{
	system("cls");
	
	cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
	cout<<"\n\n\t\t\t\t******** STUDENT INFORMATION SYSTEM (DIPLOMA)********\n\n";
	cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
	cout<<"\n\n\n\n\nMAIN SCREEN\n\n";
	cout<<"Enter our choice:"<<endl;
	cout<<"1.Students information"<<endl;
	cout<<"2. Student GCPA"<<endl;
	cout<<"3.Exit Program"<<endl;
	cin>>choice;
	
	system("cls");
	
	switch (choice)
	{
   case '1':
   {
   	while(1)
   	{
   	system ("cls");
   	cout<<"\t\t\tSTUDENTS INFORMATION \n\n\n";
   	cout<<"Enter Your Choice:"<<endl;
   	cout<<"1. New Information Of Student\n";
   	cout<<"2. Find And Display Information\n";
   	cout<<"3. Jump to main\n";
   	cin>>choice;
   	
   	switch (choice)
   	{
   	case'1':
   		{ ofstream f1("student.txt",ios::app);
   		for (i=0; choice!='n';i++)
   		{
   			if((choice=='y')||(choice=='Y')||(choice=='1'))
   			{
   				cout<<"Enter First Name:";
   				cin>>studentData.fname;
   				cout<<"Enter Last Name:";
   				cin>>studentData.name;
   				cout<<"Enter No Matric:";
   				cin>>studentData.no_matric;
   				cout<<"Enter The Course choosen:";
   				cin>>studentData.course;
   				cout<<"Choose The Intake:\n";
   				cout<<"1. June'16\n";
   				cout<<"2. Nov'16\n";
   				cout<<"3. June' 17\n";
   				cout<<"4. Nov'17\n";
   				cin>>studentData.intake;
   		
				   }
				   else ((choice=='N')||(choice=='n'));
				   {
				   	 cout<<"THANK YOU"<<endl;
				   }
				   f1<<studentData.fname<<endl<<studentData.name<<endl<<studentData.no_matric<<endl;
				   cout<<"Do you want to enter data:";
				   cout<<"Press Y to Continue and N to Finish:";
				   cin>>choice;	
		    }
		    f1.close();
		   }
		   
		   
		   
		   continue;
		   
		   case'2':
		   	{ ifstream f2("student.txt");
		   	cout<<"Enter first Name TO Be Display:";
		   	cin>>find;
		   	cout<<endl;
		   	int notFound=0;
		   	for (j=0;(j<i)||(!f2.eof());j++)
		   	{
		   		getline(f2,studentData.fname);
		   		
		   		if(studentData.fname==find)
		   		{
		   			notFound=1;
		   			cout<<"First Name: "<<studentData.fname<<endl;
		   			getline(f2,studentData.name);
		   			cout<<" Last Name:"<<studentData.name<<endl;
		   			getline(f2,studentData.no_matric);
		   			cout<<" No Matric:"<<studentData.no_matric<<endl;
		   			getline(f2,studentData.course);
		   			cout<<" Course :"<<studentData.course<<endl;
		   			getline(f2,studentData.intake);
		   			cout<<" Intake:"<<studentData.intake<<endl;
				   }
			   }
			   if (notFound==0)
			   {
			   	cout<<"NO RECORD FOUND"<<endl;
			   }
			   f2.close();
			   cout<<"Press any key two times to proceed";
			   getch();
			   getch();
			   
			   }
			   
			   
			   
			   case'3':
			    {
				
			   	break;
			   }
	   }
	   break;
	   }
	   continue;
   }
   case '2':
   {
   	while (1)
   	{
   		system("cls");
   		cout<<"\t\t\tSTUDENTS GCPA\n\n\n";
   		cout<<"Enter your choice\n";
   		cout<<"1. New Data\n";
   		cout<<"2. Find and display\n";
   		cout<<"3. Jump to main\n";
   		cin>>choice;
   		
   		switch (choice)
   		{
   			case '1':
   			{
   				ofstream t1("cgpa.txt",ios::app);
   			
   				{
   					if((choice=='y')||(choice=='Y')||(choice=='1'))
   					{
   						cout<<"Enter Students NO Matric:";
   						cin>>studentCGPA.matric;
   						cout<<"Enter 1st Semester GPA:";
   						cin>>studentCGPA.m1;
   						cout<<"Enter  2nd Semester GPA:";
   						cin>>studentCGPA.m2;
   						cout<<"Enter  3rd Semester GPA:";
   						cin>>studentCGPA.m3;				
   						cout<<"Enter  4th Semester GPA:";
   						cin>>studentCGPA.m4;				 
   						cout<<"Enter  5th Semester GPA:";
   						cin>>studentCGPA.m5;
   						cout<<"Enter 6th Semester GPA:";
   						cin>>studentCGPA.m6;
   						
   						studentCGPA.gpa=studentCGPA.m1+studentCGPA.m2+studentCGPA.m3+studentCGPA.m4+studentCGPA.m5+studentCGPA.m6;
   						t1<<studentCGPA.matric<<endl<<studentCGPA.m1<<endl<<studentCGPA.m2<<endl<<studentCGPA.m3<<endl<<studentCGPA.m4<<endl<<studentCGPA.m5<<endl<<studentCGPA.m6<<endl;
   						 }
							   
						  }
						  system("cls");
						  
						  t1.close();
					}
					   continue;
					   case'2':
					   	{
					   	ifstream t2("cgpa.txt::app");
					   	cout<<"Enter name to displyed:";
					   	cin>>find;
					   	cout<<endl;
					   	int notFound=0;
					   	for (j=0;((j<i)||(t2.eof()));j++)
					   	{
					   		getline(t2,studentCGPA.matric);
					   		if(studentCGPA.matric==find)
					   		{
					   			notFound=1;
					   			cout<<"Students Name:"<<studentCGPA.m1<<endl;
					   			getline(t2,studentCGPA.m1);
					   			cout<<"1st Sem CGPA:"<<studentCGPA.m1<<endl;
					   			getline(t2,studentCGPA.m2);
					   			cout<<"2nd Sem CGPA:"<<studentCGPA.m2<<endl;
					   			getline(t2,studentCGPA.m3);
					   			cout<<"3rd Sem CGPA:"<<studentCGPA.m3<<endl;
					   			getline(t2,studentCGPA.m4);
					   			cout<<"4th Sem CGPA:"<<studentCGPA.m4<<endl;
					   			getline(t2,studentCGPA.m5);
					   			cout<<"5th Sem CGPA:"<<studentCGPA.m1<<endl;
					   			getline(t2,studentCGPA.m6);
					   			cout<<"6th Sem CGPA:"<<studentCGPA.m1<<endl;
							   }
							  
						   }
						   
						   if (notFound==0){
						   	cout<<"NO RECORD FOUND"<<endl;
						   }
						   cout<<"PRESS ANY KEY  TO PROCEED";
						   getch();
						   
						 }
						 continue;
						 case'3':
						 	{
						 		break;
							 }
				   }
				break;
			   }
			   
		   }
		 
	   }

   }
   	}
		

