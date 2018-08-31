#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#include <process.h>
#include <string.h>
char password[]={"12345"};
using namespace std;
class Basic_Fare{
	private:
		double a,b,c,d,e;
	public:
		void Basic_Fare_Edit_Data();
		void Basic_Fare_Display_Data();
};
void Basic_Fare::Basic_Fare_Display_Data(){
	system("cls");
	fstream file;
	file.open("Basic_Fare/A.txt",ios::in);
	file>>a;
	file.close();
	file.open("Basic_Fare/B.txt",ios::in);
	file>>b;
	file.close();
	file.open("Basic_Fare/C.txt",ios::in);
	file>>c;
	file.close();
	file.open("Basic_Fare/D.txt",ios::in);
	file>>d;
	file.close();
	file.open("Basic_Fare/E.txt",ios::in);
	file>>e;
	file.close();
	printf("\'A\' - Smaller than 4 wheeler	\t\t\t: %.2lf\n\'B' - 4 wheeler passenger vehilcle	\t\t: %.2lf\n\'C\' - 4 wheeler for commercial purpose.	\t\t: %.2lf\n\'D\' - Greater than four wheeler for commercial purpose.	: %.2lf\n\'E\' - Greater than 4 wheeler carrying goods.	\t: %.2lf\n\'F\' - Special Purpose Vehicle.\t\t\t\t: N/A",a,b,c,d,e);
	getch();
}
void Basic_Fare::Basic_Fare_Edit_Data(){
	system("cls");
	char ch;
	cout<<"Enter the Vehicle's Category(A-E): ";
	cin>>ch;
	fstream file;
	switch(ch){
		case 'a':
		case 'A':
			cout<<"Enter New Basic Fare: ";
			cin>>a;
			file.open("Basic_Fare/A.txt",ios::out);
			file<<a;
			file.close();
			break;
		case 'b':
		case 'B':
			cout<<"Enter New Basic Fare: ";
			cin>>b;
			file.open("Basic_Fare/B.txt",ios::out);
			file<<b;
			file.close();
			break;
		case 'c':
		case 'C':
			cout<<"Enter New Basic Fare: ";
			cin>>c;
			file.open("Basic_Fare/C.txt",ios::out);
			file<<c;
			file.close();
			break;
		case 'd':
		case 'D':
			cout<<"Enter New Basic Fare: ";
			cin>>d;
			file.open("Basic_Fare/D.txt",ios::out);
			file<<d;
			file.close();
			break;
		case 'e':
		case 'E':
			cout<<"Enter New Basic Fare: ";
			cin>>e;
			file.open("Basic_Fare/E.txt",ios::out);
			file<<e;
			file.close();
			break;
		default:
			cout<<"Wrong choice!\nTry again (Y/N): ";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			Basic_Fare_Edit_Data();
			else
			break;
	}
}
class Daily_Traffic{
	private:
		long a,b,c,d,e,f;
		long a1,b1,c1,d1,e1,f1;
	public:
		void Daily_Traffic_Update(char,int);
		void Daily_Traffic_View_All();
};
void Daily_Traffic::Daily_Traffic_View_All(){
	system("cls");
	fstream file;
	file.open("Daily_Traffic/A.txt",ios::in);
	file>>a;
	file.close();
	file.open("Daily_Traffic/B.txt",ios::in);
	file>>b;
	file.close();
	file.open("Daily_Traffic/C.txt",ios::in);
	file>>c;
	file.close();
	file.open("Daily_Traffic/D.txt",ios::in);
	file>>d;
	file.close();
	file.open("Daily_Traffic/E.txt",ios::in);
	file>>e;
	file.close();
	file.open("Daily_Traffic/F.txt",ios::in);
	file>>f;
	file.close();
	file.open("Daily_Traffic/With_Pass/A.txt",ios::in);
	file>>a1;
	file.close();
	file.open("Daily_Traffic/With_Pass/B.txt",ios::in);
	file>>b1;
	file.close();
	file.open("Daily_Traffic/With_Pass/C.txt",ios::in);
	file>>c1;
	file.close();
	file.open("Daily_Traffic/With_Pass/D.txt",ios::in);
	file>>d1;
	file.close();
	file.open("Daily_Traffic/With_Pass/E.txt",ios::in);
	file>>e1;
	file.close();
	file.open("Daily_Traffic/With_Pass/F.txt",ios::in);
	file>>f1;
	file.close();
	printf("Vehicle\'s Category\t\tTotal Car Passed\tWith Pass\n");
	printf("\tA\t\t\t%d\t\t\t%d\n\tB\t\t\t%d\t\t\t%d\n\tC\t\t\t%d\t\t\t%d\n\tD\t\t\t%d\t\t\t%d\n\tE\t\t\t%d\t\t\t%d\n\tF\t\t\t%d\t\t\tN/A\n____________________________________________________________\n\tTotal\t\t\t%d\t\t\t%d\n",a,a1,b,b1,c,c1,d,d1,e,e1,f,(a+b+c+d+e+f),(a1+b1+c1+d1+e1));
	getch();
}
void Daily_Traffic::Daily_Traffic_Update(char ch,int pass){
	char record[]={"Daily_Traffic/x.txt"};
	record[14]=ch;
	fstream file;
//	fstream file;
	file.open(record,ios::in);
	switch(ch){
		case 'A':
			file>>a;
			a++;
			break;
		case 'B':
			file>>b;
			b++;
			break;
		case 'C':
			file>>c;
			c++;
			break;
		case 'D':
			file>>d;
			d++;
			break;
		case 'E':
			file>>e;
			e++;
			break;
	}
	file.close();
	file.open(record,ios::out);
	switch(ch){
		case 'A':
			file<<a;
			break;
		case 'B':
			file<<b;
			break;
		case 'C':
			file<<c;
			break;
		case 'D':
			file<<d;
			break;
		case 'E':
			file<<e;
			break;
	}
	file.close();
	if(pass==1){
		char record_[]={"Daily_Traffic/With_Pass/x.txt"};
		record_[24]=ch;
		fstream file;
	//	fstream file;
		file.open(record_,ios::in);
		switch(ch){
			case 'A':
				file>>a;
				a++;
				break;
			case 'B':
				file>>b;
				b++;
				break;
			case 'C':
				file>>c;
				c++;
				break;
			case 'D':
				file>>d;
				d++;
				break;
			case 'E':
				file>>e;
				e++;
				break;
		}
		file.close();
		file.open(record_,ios::out);
		switch(ch){
			case 'A':
				file<<a;
				break;
			case 'B':
				file<<b;
				break;
			case 'C':
				file<<c;
				break;
			case 'D':
				file<<d;
				break;
			case 'E':
				file<<e;
				break;
		}
		file.close();
	}
}
class Toll_Plaza:public Basic_Fare,public Daily_Traffic{
	private:
		string Veh_Plate;
		string User_Name;
		char Lic_No[50];
		int age;
		char Veh_cat;
		char M_Pass;
		double a,b,c,d,e;
	public:
		void Toll_Plaza_Main_Page();
		void Toll_Plaza_Allow_Access();
		void Toll_Plaza_Total_Fare_Update(char);
		void Toll_Plaza_View_Total_Fare();
		void Toll_Plaza_Show_All_Users();
		void Toll_Plaza_Search_User();
}Object;
void Toll_Plaza::Toll_Plaza_Search_User(){
	system("cls");
	char uname[100];
	cout<<"Enter User\'s Licence Number: ";
	cin>>uname;
	fstream f1,f2;
	int i=0;
	f1.open("User_Profiles/master_data.txt",ios::in);
	char temp[100],t[]={"User_Profiles/"};
	char shw[100];
	while(f1>>temp){
		if(strcmp(temp,uname)==0){
			strcat(t,temp);
		f2.open(t,ios::in);
		cout<<"Data Found!\n";
		i=1;
//		file<<Lic_No<<'\n'<<User_Name<<'\n'<<Veh_cat<<'\n'<<age<<'\n'<<M_Pass;
//		f2>>Lic_No>>User_Name>>Veh_cat>>age>>M_Pass;
		f2.ignore();
		f2.getline(shw,100);
		cout<<"License Number: \t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Driver's Name: \t\t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Vehicle Category:\t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Age:\t\t\t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Monthly Pass :\t\t";
		if(strcmp(shw,"T")==0)
		cout<<"Taken";
		else
		cout<<"Not-Taken";
		f2.getline(shw,100);
		cout<<"\nVehicle Plate:\t\t"<<shw;
		f2.close();
		getch();
		}
	}
	f1.close();
	if(i==0){
		cout<<"User Not Found !";
		cout<<"\nTry Again(y/n): ";
		char k;
		cin>>k;
		if(k=='y'||k=='Y')
		Toll_Plaza_Search_User();
		else
		Toll_Plaza_Main_Page();
	}
}
void Toll_Plaza::Toll_Plaza_Show_All_Users(){
	system("cls");
	fstream f1,f2;
	int i=1;
	f1.open("User_Profiles/master_data.txt",ios::in);
	char temp[100],t[]={"User_Profiles/"};
	char shw[100];
	while(f1>>temp){
		strcat(t,temp);
		f2.open(t,ios::in);
		cout<<"\nUser : "<<i++<<'\n';
//		file<<Lic_No<<'\n'<<User_Name<<'\n'<<Veh_cat<<'\n'<<age<<'\n'<<M_Pass;
//		f2>>Lic_No>>User_Name>>Veh_cat>>age>>M_Pass;
		f2.ignore();
		f2.getline(shw,100);
		cout<<"License Number: \t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Driver's Name: \t\t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Vehicle Category:\t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Age:\t\t\t"<<shw<<'\n';
		f2.getline(shw,100);
		cout<<"Monthly Pass :\t\t";
		if(strcmp(shw,"T")==0)
		cout<<"Taken";
		else
		cout<<"Not-Taken";
		f2.getline(shw,100);
		cout<<"\nVehicle Plate:\t\t"<<shw<<'\n';
		f2.close();
		cout<<"\n________________________________________________\n";
		strcpy(t,"User_Profiles/");
	}
	f1.close();
	getch();
}
void Toll_Plaza::Toll_Plaza_View_Total_Fare(){
	system("cls");
	fstream file;
	file.open("Fare_Collected/A.txt",ios::in);
	file>>a;
	file.close();
	file.open("Fare_Collected/B.txt",ios::in);
	file>>b;
	file.close();
	file.open("Fare_Collected/C.txt",ios::in);
	file>>c;
	file.close();
	file.open("Fare_Collected/D.txt",ios::in);
	file>>d;
	file.close();
	file.open("Fare_Collected/E.txt",ios::in);
	file>>e;
	file.close();
	printf("Vehicle\'s Category\t\tTotal Collected Fare\n");
	printf("\tA\t\t\t%.2lf\n\tB\t\t\t%.2lf\n\tC\t\t\t%.2lf\n\tD\t\t\t%.2lf\n\tE\t\t\t%.2lf\n_______________________________________________________\n\tTotal\t\t\t%.2lf\n",a,b,c,d,e,(a+b+c+d+e));
	getch();
}
void Toll_Plaza::Toll_Plaza_Total_Fare_Update(char ch){
	char store[]={"Fare_Collected/x.txt"};
	store[15]=ch;
	double temp,add;
	char _get[]={"Basic_Fare/x.txt"};
		_get[11]=Veh_cat;
	fstream file;
	file.open(_get,ios::in);
	file>>add;
	file.close();
	file.open(store,ios::in);
	file>>temp;
	temp+=add;
	file.close();
	file.open(store,ios::out);
	file<<temp;
	file.close();
}
void Toll_Plaza::Toll_Plaza_Allow_Access(){
	system("cls");
	int pass=0;
	cout<<"Enter Driver\'s Name: ";
	cin.ignore();
	getline(cin,User_Name);
	cout<<"Enter License Number: ";
	cin>>Lic_No;
	cout<<"Enter Age: ";
	cin>>age;
//	fflush(stdin);
	cout<<"Enter Vehicle\'s Plate Number: ";
	cin.ignore();
	getline(cin,Veh_Plate);
	cout<<"Enter Vehicle\'s category: ";
	cin>>Veh_cat;
	Veh_cat=(char)toupper(Veh_cat);
	if(Veh_cat<'A'||Veh_cat>'F'){
		cout<<"Wrong Category.";
		getch();
		Toll_Plaza_Main_Page();
	}
	if(Veh_cat=='F'){
		cout<<"No Amount to be paid.";
		getch();
	}
	else{
		cout<<"Monthly Pass Taken(y/n): ";
		char chc;
		cin>>chc;
		chc=(char)toupper(chc);
		if(chc=='Y'){
			pass=1;
			cout<<"No Amount to be paid.\nAs monthly pass is taken.";
			getch();
		}
		else{
			pass=0;
			char store[]={"Basic_Fare/x.txt"};
			store[11]=Veh_cat;
			double temp;
			fstream file;
			file.open(store,ios::in);
			file>>temp;
			printf("Amount to be paid: %.2lf",temp);
			file.close();
			getch();	
		}	
	}
	if(pass==1)
	M_Pass='T';
	else
	M_Pass='F';
	fstream file;
	file.open("User_Profiles/master_data.txt",ios::out|ios::app);
	file<<Lic_No<<'\n';
	file.close();
	char f[]={"User_Profiles/"};
	strcat(f,Lic_No);
	file.open(f,ios::out);
	file<<Lic_No<<'\n'<<User_Name<<'\n'<<Veh_cat<<'\n'<<age<<'\n'<<M_Pass<<'\n'<<Veh_Plate;
	file.close();
	if(pass==0)
	Toll_Plaza_Total_Fare_Update(Veh_cat);	
	Daily_Traffic_Update(Veh_cat,pass);
}
void Toll_Plaza::Toll_Plaza_Main_Page(){
	system("cls");
	system("color 80");
	cout<<"\t\t\t\tToll Plaza System\n\n\t\t\t    Client\'s end:\n";
	cout<<"\t\t\t1. Pass a Vehicle.\n\t\t\t2. View all Basic Fare.\n\n";
	cout<<"\t\t\t    Administrator End:\n";
	cout<<"\t\t\t3. Change Basic Fare.\n\t\t\t4. Total Fare for all Vehicles.\n\t\t\t5. Total vehicles passed.\n\t\t\t6. All User\'s Profile.\n\t\t\t7. Search a User\n";
	cout<<"\t\t\t0. To Exit\n\t\t\t";
	char choice,temp[10];
	cin>>choice;
	switch(choice){
		case '1':
			system("color 90");
			Toll_Plaza_Allow_Access();
			break;
		case '0':
			exit(0);
			break;
		case '2':
			system("color c0");
			Basic_Fare_Display_Data();
			break;
		case '3':
			system("color 80");
			cout<<"Enter the Password: ";
			cin>>temp;
			if(strcmp(temp,password)==0)
			Basic_Fare_Edit_Data();
			else{
				cout<<"Wrong Password!\n";
				getch();
				Toll_Plaza_Main_Page();
			}
			break;
		case '4':
			system("color 50");
			cout<<"Enter the Password: ";
			cin>>temp;
			if(strcmp(temp,password)==0)
			Toll_Plaza_View_Total_Fare();
			else{
				cout<<"Wrong Password!\n";
				getch();
				Toll_Plaza_Main_Page();
			}
			break;
		case '5':
			system("color d0");
			cout<<"Enter the Password: ";
			cin>>temp;
			if(strcmp(temp,password)==0)
			Daily_Traffic_View_All();
			else{
				cout<<"Wrong Password!\n";
				getch();
				Toll_Plaza_Main_Page();
			}
			break;
		case '6':
			system("color 0c");
			cout<<"Enter the Password: ";
			cin>>temp;
			if(strcmp(temp,password)==0)
			Toll_Plaza_Show_All_Users();
			else{
				cout<<"Wrong Password!\n";
				getch();
				Toll_Plaza_Main_Page();
			}
			break;
		case '7':
			system("color 0a");
			cout<<"Enter the Password: ";
			cin>>temp;
			if(strcmp(temp,password)==0)
			Toll_Plaza_Search_User();
			else{
				cout<<"Wrong Password!\n";
				getch();
				Toll_Plaza_Main_Page();
			}
		default:
			cout<<"\nWrong Choice.";
			getch();
			Toll_Plaza_Main_Page();
			break;
	}
	Toll_Plaza_Main_Page();
}
int main(){
	Object.Toll_Plaza_Main_Page();
	return 0;
}
