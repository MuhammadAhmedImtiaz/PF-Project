#include<iostream>
#include<conio.h>
using namespace std;
int i=0;
int found;
struct Student
{
	int id;
	float marks,per;
	string name,grade;
}s[25];
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];


void insert()
{
	cout<<"\n\n\t\t\t  *** INSERT RECORD ***";
	cout<<"\n\n Enter Student Id :";
	cin>>s[i].id;
	cout<<"\n\n Enter Teacher Name: ";
	cin>>s[i].name;
	cout<<"\n\n Enter Student Marks: ";
	cin>>s[i].marks;
	s[i].per=s[i].marks/100*100;
	if(s[i].per >=85)
	s[i].grade ="A+";
	else if(s[i].per >=65)
	s[i].grade ="B+";
	else if(s[i].per >=55)
	s[i].grade ="B";
	else if(s[i].per >=50)
	s[i].grade ="C";
	else if(s[i].per >=45)
	s[i].grade ="D";
	else if(s[i].per >=33)
	s[i].grade ="E";
	else
	s[i].grade ="F";
	i++;
	cout<<"\n\n *** Inerst Record Successfully *** ";

}
void search()
{

	cout<<"/n/n/t\t\t *** SEARCH RECORD *** ";
	if(i==0)
	cout<<"\n\n *** No Record Found ***";
	else
	{
		int id;
		cout<<"\n\n Enter Student Id: ";
		cin>>id;
		for(int a=0;a<i;a++)
		{
			if(id==s[a].id)
			{
			cout<<"\n\n Name: "<<s[a].name;
			cout<<"\n\n Marks: "<<s[a].marks;
			cout<<"\n\n Percentage : "<<s[a].per<<"%";
			cout<<"\n\n Grade : "<<s[a].grade;
			found++;
				
			}
			
		}
		if(found==0)
		cout<<"\n\n *** Student Id Not Found ***";
		
	}
}
void update()
{
	int id,found=0;
	cout<<"\n\n Enter Student Id: ";
	cin>>id;
	cout<<"/n/n/t/t/t *** Update RECORD *** ";
	if(i==0)
	cout<<"\n\n *** No Record Found ***";
	else
	{
		
		for(int a=0;a<i;a++)
		{
			if(id==s[a].id)
			{
	cout<<"\n\n\t\t\t  *** INSERT RECORD ***";
	cout<<"\n\n Enter Student Id :";
	cin>>s[i].id;
	cout<<"\n\n Enter Teacher Name: ";
	cin>>s[a].name;
	cout<<"\n\n Enter Student Marks: ";
	cin>>s[a].marks;
	s[a].per=s[a].marks/100*100;
	if(s[a].per >=85)
	s[a].grade ="A+";
	else if(s[a].per >=65)
	s[a].grade ="B+";
	else if(s[a].per >=55)
	s[a].grade ="B";
	else if(s[a].per >=50)
	s[a].grade ="C";
	else if(s[a].per >=45)
	s[a].grade ="D";
	else if(s[i].per >=33)
	s[a].grade ="E";
	else
	s[a].grade ="F";
	i++;
	cout<<"\n\n *** Update Record Successfully *** ";

}
}
			
		}
		if(found==0)
		cout<<"\n\n *** Student Id Not Found ***";
		
	}
void deleterecord()
{
	int a;
	cout<<"Press 1 to delete full record"<<endl;
	cout<<"Press 2 to specific full record"<<endl;
	if(a==1)
	{
		i=0;
		cout<<"All record is deleted"<<endl;
	}
	else
	{
		string rollno;
		cout<<"Enter roll-no which you want to delete"<<endl;
		for(int i=0;i<i;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<i;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				
				}
				i--;
				cout<<"Your requried record id deleted..!!"<<endl;
	
			}
		}
	}
}







int main()
{
	int choice;
	p:
	cout<<"\n\n\t\t\t***  SCHOOL MANAEMENT SYSTEM";
	cout<<"\n\n 1. INSERT RECORD";
	cout<<"\n\n 2. Search RECORD";
	cout<<"\n\n 3. Update RECORD";
	cout<<"\n\n 4. Delete RECORD";
	cout<<"\n\n 5. Show RECORD";
	cout<<"\n\n 6. Exit ";
	cout<<"\n\n ENTER YOUR CHOICE ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		insert();
		break;
		
		case 2:
		search();
		break;
		
		case 3:
		update();
		break;
		
		case 4:
		deleterecord();
		break;
		
		case 5:
		break;
		
		case 6:
		exit(0);
		break;
		
		default :
		cout<<"\n\n *** INVALID CHOICE *** ";
			
	}
	getch();
	goto p;
}
