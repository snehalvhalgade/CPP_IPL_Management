#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
class IPL
{
	public:
		void champions();
	    void IPL1();
		void user();   
		void Teamandplayers();
		void Main1();  
		};
void IPL::IPL1()
		{
		   int reply;
		   fstream f;
		   cout<<"If you want to see schedule of IPL then please press 1 otherwisw press 0:";
		   cin>>reply;
		   char cha1[500];
		   if(reply==1)
		   {
		   	f.open("Schedule.txt",ios::in);
		   	while(f)
		   	{
		   		f.getline(cha1,500);
		   		if(f)
		   		cout<<cha1<<endl;
			   }
			cout<<"\n\n";
		   }
		   else
		   {
		   	cout<<"\nOK No problem, you can see other information, Thank You!"<<endl;
		   }
		   f.close();
		}
void IPL::champions()
		{
			char chr2[500];
			fstream champ;
			champ.open("Champions.txt",ios::in);
			while(champ)
			{
				champ.getline(chr2,500);
				if(champ)
				cout<<chr2<<endl;
			}
			cout<<"Champions to be shown"<<endl;
}
void IPL :: user(void){
	cout<<"\tThis programe gives you all information about IPL";
	Main1();
		
	}
    void IPL :: Teamandplayers()
 {
 	ifstream f;
 	int g;
 	char name1[1000];
 	char name2[1000];
 	char name3[1000];
 	char name4[1000];
 	char name5[1000];
 	char name6[1000];
 	char name7[1000];
 	char name8[1000];
 	cout<<"\nChoose the Team for Which Team Players you want to view\n\t1.MI\n\t2.CSK\n\t3.RCB\n\t4.KKR\n\t5.DD\n\t6.RR\n\t7.SRH\n\t8.KXIP";
	cin>>g;
	switch(g)
	{
		case 1:
			system("cls");
			cout<<"\nMUMBAI INDIANS"<<endl;
			f.open("MI.txt");
			cout<<"\n\n";
			while(f){
				f.getline(name1,1000);
				if(f){
					cout<<"\t"<<name1<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		case 2:
			system("cls");
		    cout<<"\n\tCHENNAI SUPER KINGS"<<endl;
			f.open("CSK.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name2,1000);
				if(f){
					cout<<"\t"<<name2<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		case 3:
			system("cls");
			cout<<"\n\tROYAL CHALLENGERS BANGALORE"<<endl;
			f.open("RCB.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name3,1000);
				if(f){
					cout<<"\t"<<name3<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		case 4:
			system("cls");
		    cout<<"\n\tKOLKATA KNIGHT RIDERS"<<endl;
			f.open("KKR.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name4,1000);
				if(f){
					cout<<"\t"<<name4<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		case 5:
			system("cls");
			cout<<"\n\tDELHI DAREDEVILS"<<endl;
			f.open("DD.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name5,1000);
				if(f){
					cout<<"\t"<<name5<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		case 6:
			system("cls");
			cout<<"\n\tRAJASTHAN ROYALS"<<endl;
			f.open("RR.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name6,1000);
				if(f){
					cout<<"\t"<<name6<<endl;
				}
			}
			cout<<endl;
			f.close();
			cout<<"\nEnter value:";
			int un;
			cin>>un;
			if(un==1)
			{
				Main1();
			}
			else
			exit(1);
		case 7:
			system("cls");
			cout<<"\n\tSUNRISERS HYDERABAD"<<endl;
			f.open("SRH.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name7,1000);
				if(f){
					cout<<"\t"<<name7<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		case 8:
			system("cls");
			cout<<"\n\tKINGS XI PUNJAB"<<endl;
			f.open("KP.txt");
			cout<<"\n\n\n";
			while(f){
				f.getline(name8,1000);
				if(f){
					cout<<"\t"<<name8<<endl;
				}
			}
			cout<<endl;
			f.close();
			Main1();
		default:
			user();
	}
 Main1();
 }	
 void IPL :: Main1(void)
{
	char data[10000];
	ifstream g;
	g.open("IPL");	
	cout<<"\n\tChoose what you want to do :\n";
	cout<<"\n\t1.TEAM AND PLAYERS\n\t2.UMPIRES\n\t3.COACHES\n\t4.EACH TEAM OWNER\n\t5.NUMBER OF STADIUMS\n\t6.ADDING PLAYERS\n\t7.PREVIOUS RECORDS OF MATCHES\n\t8.Go to Main Menu\n\t9.EXIT";
	int e;
	cout<<"\n\tplease enter any number from above:";
	cin>>e;
	switch(e)
	{
			
		case 1:
			system("cls");
		    Teamandplayers();		    
		case 2:
			system("cls");
		    cout<<"\n\tUMPIRES"<<endl;
			char umpires[1000];
			g.open("UMPIRES.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(umpires,1000);
				if(g){
					cout<<"\t"<<umpires<<endl;
				}
			}
			cout<<endl;
			g.close();
			Main1();
			user();
			user();
		case 3:
			system("cls");
			cout<<"\n\tCOACHES"<<endl;
			char coach[1000];
			g.open("COACHES.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(coach,1000);
				if(g){
					cout<<"\t"<<coach<<endl;
				}
			}
			cout<<endl;
			g.close();
			Main1();
			user();
		
		case 4:
			system("cls");
			cout<<"\n\tTEAM OWNERS:"<<endl;
			char owner[1000];
			g.open("Team_owners.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(owner,1000);
				if(g){
					cout<<"\t"<<owner<<endl;
				}
			}
			cout<<endl;
			g.close();
			Main1();
			user();
		case 5:
			system("cls");
		    cout<<"\n\tSTADIUMS"<<endl;
		    char stadium[1000];
			g.open("Stadiums.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(stadium,1000);
				if(g){
					cout<<"\t"<<stadium<<endl;
				}
			}
			cout<<endl;
			g.close();
			Main1();
			user();
		case 6:
			system("cls");
			cout<<"\n\tADD Information About players:\n\n";
			{
        		string tname;
       			 fflush(stdin);
       			 cout<<"\tselect which team you want to select";
       			 cout<<"\n1.MI\n2.CSK\n3.RCB\n4.KKR\n5.DD\n6.RR\n7.SRH\n8.KKXIP";
       		
       				 cout<<"\t\n\nEnter Team Number :"<<endl;
      		      int a;
      		      cin>>a;
      		      switch(a)
      		      {
					
      		      {
      		      	case 1: 
      		      	ofstream mi;
      		      		cout<<"Enter player names for MI";
      		      		mi.open("MI.txt");
      		      		string membernames;
      		      		for(int i=0;i<=11;i++)
      		      		{
      		      			getline(cin,membernames);
      		      			mi<<membernames<<endl;
						}
						mi.close();
						cout<<"Added sucessfully";
						system("cls");
						Main1();
					}
					{
						case 2:
							ofstream csk;
							cout<<"Enter player names for CSK";
							csk.open("CSK.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								csk<<membernames<<endl;
							}
							csk.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
						{
						case 3:
							ofstream rcb;
							cout<<"Enter player names for RCB";
							rcb.open("RCB.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								rcb<<membernames<<endl;
							}
							rcb.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
						{
						case 4:
							ofstream KKR;
							cout<<"Enter player names for KKR";
							KKR.open("KKR.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								KKR<<membernames<<endl;
							}
							KKR.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
						{
						case 5:
							ofstream DD;
							cout<<"Enter player names for DD";
							DD.open("DD.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								DD<<membernames<<endl;
							}
							DD.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
						{
						case 6:
							ofstream RR;
							cout<<"Enter player names for RR";
							RR.open("RR.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								RR<<membernames<<endl;
							}
							RR.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
						{
						case 7:
							ofstream SRH;
							cout<<"Enter player names for SRH";
							SRH.open("SRH.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								SRH<<membernames<<endl;
							}
							SRH.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
						{
						case 8:
							ofstream KXIP;
							cout<<"Enter player names for KXIP";
							KXIP.open("KXIP.txt");
							string membernames;
							for(int i=0;i<=11;i++)
							{
								getline(cin,membernames);
								KXIP<<membernames<<endl;
							}
							KXIP.close();
							cout<<"Added sucessfully";
							system("cls");
							Main1();
					}
				
        		}
    

}
		case 7:
			system("cls");
			cout<<"\n\tPREVIOUS RECORDS OF MATCHES\n\n";
			char records[1000];
			g.open("Previous_Matches.txt");
			cout<<"\n\n\n";
			while(g){
				g.getline(records,1000);
				if(g){
					cout<<"\t"<<records<<endl;
				}
			}
			cout<<endl;
			g.close();
			Main1();
			user();
		case 8:
			system("cls");
			cout<<"\n\tgo to main menu\n\n";
			user();
		case 9:
			system("cls");
			cout<<"\n\nTHANK YOU\n\n";exit(0);
	
		case 10:
			system("cls");
			cout<<"\n\tplease enter correct value\n\n\n";
			user();

		
	
}
	}
int main()
{
	cout<<"\tIPL CRICKET TOURNAMENT ORGANISER \n";
	int x;
	cout<<"Please Choose your option\n\n\n"<<endl;
	cout<<"1-Schedule\n2-Last Year's Champions  \n3-For Further Details  \n4-Exit Program";
	cin>>x;
	
	IPL obj;
	switch(x)
	{
		case 1:
			obj.IPL1();
			main();
			break;
		case 2:
			obj.champions();
			main();
			break;
		case 3:
			obj.user();
			main();
			
			break;
		case 4:
			cout<<"=====================\nThank You";
			exit(1);
	}
}
