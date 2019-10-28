#include<iostream>
#include<fstream>
#define n 30
#include<iomanip>
#include<cstring>
using namespace std;

struct studRecord{
		int id;
		char name[50];
		char sub[50];
		int limit;
		float finalgrade;
		float passgrade;	
		float totalgrade;
}s[n];

struct studGrade{
	int subg;
	
}stud[20][20];


class stud_Proc{
	public: 
	 void newLine();
	 void AddRecord(int &, char, int,float, float);
	 void ShowRecord(int &, float, int, float, float);
	 void DeleteRecord(int &, float , int, float ,float);
	 void FindRecord(int &, float,int , float, float );
	 void EditRecord(int &, float, int , float ,float);
	
};




	int choice, o, no = 0, i=0, j=0, limit;
	float passgrade=0,totalgrade=0,finalgrade=0;
int main(){
	
	stud_Proc sl;
	


	// Prompts the user to input number of subjects and its names 
	cout<<"\t\t\tEnter How many subject you want to add: ";
	cin>>limit;
	for(int k=0; k<limit; k++){
		cout<<"\t\t\t"<<k+1<<". Subject: ";
		cin>>s[k].sub;	
	}
	cout<<"\t\t\tEnter a passing Grade: ";
	cin>>passgrade;
	system("cls");
	// Main Menu
	do{
		cout<<"\t\t\t============ WELCOME TO GRADING SYSTEM ============"<<endl;
		cout<<"\t\t\t\t[1] ADD STUDENT RECORD "<<endl;
		cout<<"\t\t\t\t[2] SHOW STUDENT RECORD "<<endl;
		cout<<"\t\t\t\t[3] FIND STUDENT RECORD "<<endl;
		cout<<"\t\t\t\t[4] DELETE STUDENT RECORD "<<endl;
		cout<<"\t\t\t\t[5] Edit STUDENT RECORD "<<endl;
		cout<<"\t\t\t\t[6] EXIT PROGRAM "<<endl;
		cout<<"\t\t\t==================================================="<<endl;
		cout<<"\t\t\t\tEnter your choice: ";
		cin>>choice;
		system("cls");
		cout<<"\n \n";
		
		// Options 
	switch(choice){
		case 1:			
			sl.AddRecord(no, choice, limit,totalgrade,finalgrade);
		break;
		case 2:
			sl.ShowRecord(no,passgrade,limit ,totalgrade,finalgrade);
			cout<<"\t\t\tPress Any Key to End Viewing....";
			system("pause > nul");
			system("cls");	
		break;
		case 3:
			sl.FindRecord(no, passgrade,limit,totalgrade,finalgrade);
		break;
		case 4:
			sl.DeleteRecord(no, passgrade, limit, totalgrade, finalgrade);
				system("cls");	
		break;
		case 5:
			sl.EditRecord(no, passgrade, limit, totalgrade, finalgrade);	
		break;
	}
	}while(choice!=6);
	{
		cout<<"Thank you for using our program";
		system("pause > nul");
	}
	return 0;	
}


void stud_Proc::newLine(){
	char s;
	do{cin.get(s);
	}while(s!='\n');
}



// Adds a new student record consisting of Student ID,Student Name and its grade for each subject
void stud_Proc::AddRecord(int &num, char choice, int limit, float totalgrade, float finalgrade){     
do{
		


		cout<<"\t\t\t-------------- ADDING A NEW RECORD --------------"<<endl;
		cout<<"\t\t\tEnter Student ID: ";
		cin>>s[num].id;
		newLine();
		cout<<"\t\t\tEnter Student Name: ";
		cin.getline(s[num].name,49);
		for(int k=0; k<limit; k++){
			cout<<"\t\t\tEnter "<<s[k].sub<<" Grade : ";
			cin>>stud[k][num].subg;
			s[num].totalgrade += stud[k][num].subg;
		}
		num++;
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\tDo you want to Add another record? (Y/N)?";
		cin>>choice;
		system("cls");
		}while (toupper (choice)== 'Y');
		system("cls");
}


// Shows all the Student Records Including ID, Name,Grades for Every Subject and Its Remarks
void stud_Proc::ShowRecord(int &num, float passgrade, int limit, float totalgrade, float finalgrade){
	

	int i=0;
	int j=0;
	totalgrade=0;
	
	if(num == 0){
		cout<<"\t\t\t-------------- There is no record to show --------------\n \n \n";
	}else{
	cout<<"\t\t\t-------------- STUDENT RECORD LIST --------------\n\n\n"<<endl;
		for(i=0;i<num;i++)
		{
		cout<<"\t\t\t------------------     ("<<i+1<<")     --------------------"<<endl;

			cout<<"\t\t\tID: "<<s[i].id<<endl;
			cout<<"\t\t\tName: "<<s[i].name;
			for( int l=0; l<limit; l++)
				{
					cout<<"\n\t\t\tGrade in "<<s[l].sub<<" is ";
					cout<<stud[l][i].subg;
				}
			s[i].finalgrade = s[i].totalgrade/limit;
			cout<<"\n\t\t\tAverage: "<<s[i].finalgrade;
			if( s[i].finalgrade >= passgrade )
			{	
			cout<<"\n\t\t\tRemark: PASSED";
			}
			else 
			{
			cout<<"\n\t\t\tRemark: FAILED";
			}
				cout<<endl;
				cout<<endl;
				cout<<"\t\t\t--------------------------------------------------";
				cout<<endl;	
				cout<<endl;
				cout<<endl;
		}
	}
	cout<<endl;
	cout<<endl;
	

}

// This deletes a specific record of a student using ID
void stud_Proc::DeleteRecord(int &num, float passgrade, int limit, float totalgrade, float finalgrade){
	
	bool found=false;
	int i=0;
	int k,index,del;

	if(num==0)
		{
		cout<<"\t\t\t\t-------------- THERE IS NO DATA TO BE DELETED -------------- ";
		}
		else
		{
		ShowRecord(no,passgrade,limit ,totalgrade,finalgrade);
		cout<<"\t\t\tEnter Student ID to be deleted: ";
  	  	cin>>del;
		for(k=0;k<num;k++){
		
    
		  
	        if(s[k].id == del)
			{ 
				
				s[k].id=s[k+1].id;
				strcpy(s[k].name,s[k+1].name);
				s[k].totalgrade=0;
				s[k].totalgrade=s[k+1].totalgrade;
				for(int j=0; j<limit; j++)
				{
				stud[j][k].subg=stud[j][k+1].subg;
				}
			num--;	
		
			cout<<"\t\t-------------- Student Deleted Successfully -------------- ."<<endl;  
		
	
			found = true;
    		}
	}
	if(!found)
	{
	cout<<"\t\t\tStudent Doesn't Exist...";
	
	}
    	
    	cout<<endl;
    	cout<<endl;
    	
    	cout<<"\t\t\t\t\tPress any key to continue.......";
    	system("pause > nul");
    	system("cls");		
		}
}


// Finds a specific record of a student using a student number
void stud_Proc::FindRecord(int &num, float passgrade, int limit, float totalgrade, float finalgrade){
	
	bool found=false;
	int SN;
	
	if(num==0){
		cout<<"\t\t\tThere is no Student Record ";
		cout<<"\t\t\t\t\t\t\tPress Any Key to Quit Searching....";
	system("pause > nul");	
	system("cls");
	}
	else 
	{	
	cout<<"\t\t\t-------------- SEARCH STUDENT --------------\n\n\n"<<endl;
	cout<<"\t\t\tEnter ID you want to search: ";
	cin>>SN;
	
	for(int i=0; i<num; i++)
	if(SN == s[i].id){
		cout <<"\t\t\tName: " << s[i].name;
			for( int k=0; k<limit; k++)
			{
			cout<<"\n\t\t\tGrade in "<<s[k].sub<<" is ";
			cout <<stud[k][i].subg;
			}
			s[i].finalgrade = s[i].totalgrade/limit;
			cout<<"\n\t\t\tAverage: "<<s[i].finalgrade;
			if( s[i].finalgrade >= passgrade )
			{
			cout<<"\n\t\t\tRemark: PASSED";
			}
			else 
			{
			cout<<"\n\t\t\tRemark: FAILED";
			}
	found = true;
	}if(!found)
	{
	cout<<"\t\t\tStudent Doesn't Exist...";
	}
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\tPress Any Key to Quit Searching....";
	system("pause > nul");	
	system("cls");
	}
}


// Edit a specific record of a student using a student number
void stud_Proc::EditRecord(int &num, float passgrade, int limit, float totalgrade, float finalgrade){
	
	bool found=false;
	int edit, i;
	if(num==0)
	{
		cout<<"There is no Record to Edit ";
		system("cls");
	}
	else
	{
		ShowRecord(no,passgrade,limit ,totalgrade,finalgrade);
		cout<<"\n\t\t\tEnter Student ID you want to edit ";
		cin>>edit;
		for(int i=0; i<num;i++)
		{	
			if(edit==s[i].id)
			{
			s[i].totalgrade=0;
			cout<<"\t\t\tEnter Student ID: ";
			cin>>s[i].id;
			newLine();
			cout<<"\t\t\tEnter Student Name: ";
			cin.getline(s[i].name,49);
			for(int k=0; k<limit; k++)
			{
				cout<<"\t\t\tEnter "<<s[k].sub<<" Grade : ";
				cin>>stud[k][i].subg;
				s[i].totalgrade += stud[k][i].subg;
			}	
			found = true;
		}					
			
		}
		if(!found)
		{
		cout<<"\t\t\tStudent Doesn't Exist...";
		}
	cout<<endl;
	cout<<"\t\t\tPress Any Key to Quit Editing....";
	system("pause > nul");	
	system("cls");
	}	
}
