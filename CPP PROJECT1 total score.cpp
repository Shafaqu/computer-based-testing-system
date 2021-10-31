#include<iostream>
using namespace std;
#include<unistd.h>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
class student{
	private:
		string English[2]={"I__________like to see your book.\nA-may\nB-can\nC-should\nD-would",
		"_________I come in, please?\nA-do\nB-may\nC-might\nD-will"};
		char EnglishAns[2] = {'d','b'},crt;
		int EnglishResult=0;
		
		string Physics[2]={"Physics deal with the study of:\nA. matter\nB. Energy\nC. Both",
		"Particles have the mass smallest of the following is:\nA. Neutron\nB. Quark\nC. Electron"};
		char PhysicsAns[2] = {'c','b'};
		int PhysicsResult=0;
		
		string Chem[2]={"There are basic ___________ state of matter\nA. 4\nB. 3\nC. 5",
		"____________ is the positively charged particle\nA. Electron\nB. Proton\nC. Neutron"};
		char ChemAns[2] = {'b','b'};
		int ChemResult=0;
		
		string Math[2]={"acre is equal to ________square foot?\nA. 45434 square foot\nB. 34343 square foot\nC. 43572 square foot\nD. 43560 square foot ",
		"What is the Sum of First 70 even Numbers?\nA. 4970\nB. 4950\nC. 4900\nD. 4980"};
		char MathAns[2] = {'d','a'};
		int MathResult=0;
	int	roll_no;
	char answer, answer2;
	
	
	public:
		void startTest(){
			system("CLS");
			cout<<"Enter your roll number!";
			cin>>roll_no;
		}
		int EnglishTest(){
			system("CLS");
			for(int i=0;i<2;i++){
				cout<<English[i]<<endl;
				cout<<"\nEnter your choice: ";
				cin>>crt;
				if(crt==EnglishAns[i])
					EnglishResult++;
			}
			return EnglishResult;
	}
	int PhysicsTest(){
			system("CLS");
			for(int i=0;i<2;i++){
				cout<<Physics[i]<<endl;
				cout<<"\nEnter your choice: ";
				cin>>crt;
				if(crt==PhysicsAns[i])
					PhysicsResult++;
			}
			return PhysicsResult;
	}
	int ChemTest(){
			system("CLS");
			for(int i=0;i<2;i++){
				cout<<Chem[i]<<endl;
				cout<<"\nEnter your choice: ";
				cin>>crt;
				if(crt==ChemAns[i])
					ChemResult++;
			}
			return ChemResult;
	}
	int MathTest(){
			system("CLS");
			for(int i=0;i<2;i++){
				cout<<Math[i]<<endl;
				cout<<"\nEnter your choice: ";
				cin>>crt;
				if(crt==MathAns[i])
					MathResult++;
			}
			return MathResult;
	}
};
 class admin{
 	private : 
 	string xy;
 	int pass = 123;
 	int p;
 	public:
 		void login(){
 			
 			cout<<"admin\n";
 			cout<<"enter password: ";
	 		cin>>p;
 			if (p == pass){
 				system("CLS");
		 		cout<<"Login to the system please wait!";
		 		sleep(3);
		 		system("CLS");
				cout<<"Student Detail:";
			}
				else{
					cout<<"Incorrect Password";
					sleep(2);
					admin a;
					a.login();
			 }
		 }
 };
 
 int main(){
 	admin a;
 	student s;
 	char x;
 	cout<<"Chose user Admin/Student (a/s): ";
 	cin>>x;
 	if(x=='a'){
 		a.login();
	}else if (x == 's'|| x == 'S'){
		s.startTest();
		int ER = s.EnglishTest();
		int PR = s.PhysicsTest();
		int CR = s.ChemTest();
		int MR = s.MathTest();
		system("CLS");
		cout<<"You have scored!\n\n";
		cout<<"English result : "<<ER<<endl;
		cout<<"Physics result : "<<PR<<endl;
		cout<<"Chemistry result : "<<CR<<endl;
		cout<<"math result : "<<MR<<endl;
		cout<<"the total marks is  :"<<ER+PR+CR+MR<<endl;
	}
	
	getch();
	return 0;
}
	
