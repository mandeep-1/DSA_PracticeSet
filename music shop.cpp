#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void bye_bye();
void initiate();
void welcome_screen();
void aid();
void call(char[]);

//------------------------------CLASS--------------------------

class Music
{
          private:    	char Track_Id[10];
                        char Track_Name[20];
                        char Category[20];
                        char Marketing_Brand[20];
                        char Year_of_release[15];
                        int Stock_record;
                        float Record_Price; 
      	 public :     	void add_records();
                        void enter_data();
                        void enter_datas();
                        void show_data();
                        void search();
                        void edit();
                        void create();
                        void view_data();
                        void delete_record();
                       	void test();
                       int check(char[]);char Choice(char*);
}global;

//------------------------FUNCTIONS-----------------------

//FUNCTION 1~~~~~~~~~~
void aid()
{
 	clrscr();
cout<<" -----------------------------------------"<<endl;
cout<<"WELCOME TO MANKIRAT & GROUP"<<endl;
cout<<" MusiC WorlD"<<endl;
 
         cout<<" -----------------------------------------"<<endl;
cout<<" #####$$*****"<<endl;
cout<<" -----------------------------------------"<<endl;
cout<<" Choose Your Option: "<<endl;
cout<<" -----------------------------------------"<<endl;
cout<<" 1 -> ADD TRACKS "<<endl;
cout<<" 2 -> VIEW DATA FROM FILE "<<endl;
cout<<" 3 -> SEARCH RECORD(s)"<<endl;
cout<<" 4 -> EDIT DATA "<<endl;
cout<<" 5 -> DELETE RECORDS FROM FILE "<<endl;
cout<<" 6 -> EXIT TO PROGRAM WINDOWS " <<endl;
cout<<" -----------------------------------------------------------"<<endl;
}
//FUNCTION 2:
int Music::check(char rec[])
{ 	
   ifstream mem5("MUWORLD",ios::binary);
   if(!mem5)
   {
cout<<" Not enough space ";
exit(0);
   }
    Music checks;
    int k=0;
    mem5.seekg(0);
    while(mem5.read((char*)&checks,sizeof(checks)))
    {
if(strcmp(checks.Track_Id,rec)==0)
{
k++;
return k;
 			}
    }
    mem5.close();
    return k;
}
//FUNCTION 3
void Music::test()
 //FIND NO. OF RECORDS
{
ifstream memo;memo.open("MUWORLD");
memo.seekg(0,ios::end);
int n;
n=memo.tellg()/sizeof(global);
cout<<" \n\t\t NUMBER OF RECORDS PRESENT IN THE FILE ARE = "<<n<<endl;
cout<<"-----------------------------------------"<<endl;
}
//FUNCTION 4: 
void Music::enter_data()
{
 cout<<" WELCOME TO MUSIC MILLENIUM "<<endl<<endl;
chk:cout<<" Enter track's identity " <<endl;
gets(Track_Id);
if(check(Track_Id)>=1)
{
    cout<<" The Id entered already exists, please enter a new Id "<<endl;
   goto chk;
}
cout<<" ~ Enter track's name " <<endl;
gets(Track_Name);
cout<<" ~ Enter track's category: AUDIO/VIDEO/MP3.... " <<endl;
gets(Category);
cout<<" ~ Enter track's marketing brand " <<endl;
gets(Marketing_Brand);
cout<<" ~ Enter track's year of release: 12 April 2010,etc.. " <<endl;
 gets(Year_of_release);
cout<<" ~ Enter track's stock " <<endl;
cin>>Stock_record;
cout<<" ~ Enter track's price " <<endl;
cin>>Record_Price;
}
//FUNCTION 5
char Music::Choice(char *s)
{
cout<<"\n MODIFY \t "<<s<<"\t"<<"Y/N";
char ch;
ch =getch();
if((ch=='y')||(ch=='Y'))
return 'Y';
else
return 'n';
}

// FUNCTION 6:
void Music::enter_datas()
{
clrscr();
global.show_data();
cout<<endl;
gotoxy(25,25);
if(Choice("TRACK'S NAME")=='Y')
{
cout<<"\n ENTER TRACKS NEW NAME :"<<endl;
 
gets(Track_Name);
}
cout<<endl;
if(Choice(" CATEGORY ")=='Y')
{
	cout<<"\n ENTER NEW CATEGORY :"<<endl;
	gets(Category);
}
cout<<endl;
if(Choice("MARKEETING BRAND")=='Y')
{
	cout<<"\n ENTER NEW BRAND : "<<endl;
	gets(Marketing_Brand);
}
cout<<endl;
if(Choice("TRACKS STOCK")=='Y')
{
	cout<<"\n ENTER NEW STOCK :"<<endl;
	cin>>Stock_record;
}
cout<<endl;
if(Choice("PRICE OF RECORD")=='Y')
{
	cout<<"\n ENTER NEW PRICE :"<<endl;
	cin>>Record_Price;
}
cout<<endl;
}

 //FUNCTION 7 
void Music::show_data()
{
	cout<<"***###***"<<endl<<endl;
	cout<<" ~ Track's Identification: " <<Track_Id<<endl;
	cout<<" ~ Track's name is: " <<Track_Name<<endl;
	cout<<" ~ Track's category is: " <<Category<<endl;
	cout<<" ~ Track's marketting brand: " <<Marketing_Brand<<endl;	cout<<" ~ Track's year of release: " <<Year_of_release<<endl;
	cout<<" ~ Track's stock: " <<Stock_record<<endl;
cout<<" ~ 	Track's price: " <<Record_Price<<endl;
}
 
//FUNCTION 8
void Music::create()
{
	ifstream mem0;
	mem0.open("MUWORLD",ios::binary);
	mem0.close();
}

//FUNCTION 9
void Music::search()
{
	ifstream mem1;
	mem1.open("MUWORLD",ios::binary);
	if(!mem1)
	{
		cout<<" No space No space ";
		getch();
		exit(0);
	}
	int z=0;
	char searchh[10];
	char ch='y';
	while(ch=='y'||ch=='Y')	
	{
		 z=0;
		global.test();
		cout<<" Enter tracks Id to Search: "<<endl;
		gets(searchh);mem1.close();mem1.open("MUWORLD");
		while(mem1.read((char*)&global,sizeof(global)))
		{						if(strcmp(global.Track_Id,searchh)==0)
	{
		cout<<"TRACK PRESENT IN THE FILE MEMORY "<<endl<<endl;
		z++;
	}
}
mem1.seekg(0);
mem1.close();
 
if(z==0)
{
	cout<<" No such track present, please enter the Id properly "<<endl;
}
cout<<" Want to continue ";
cin>>ch;
aid();
}
}

//FUNCTION 10
void Music::view_data()
{
	ifstream mem3;
	mem3.open("MUWORLD",ios::binary);
	if(!mem3)
	{
		cout<<" No space present ";
		getch();
		exit(0);
	}
	global.test();
	char chy='y';
	int x=0,y=0;
	char choice1;
	char Id[10];
	while(chy=='y'||chy=='Y')
	{
		mem3.seekg(0);aid();cout<<" ->Enter your choice:"<<endl;
		cout<<" U -> see record of choice"<<endl;
                  cout<<"V->all records"<<endl;
		cout<<"W-exit"<<endl;
		global.test();
		cout<<endl;
		cin>>choice1;
		switch(choice1)
		{
		case 'U':case 'u':  x=0;
					mem3.close();
					mem3.open("MUWORLD");
					cout<<" Enter tracks Id "<<endl;
					gets(Id);
 
				while(mem3.read((char*)&global,sizeof(global)))
				{
					if(strcmp(global.Track_Id,Id)==0)
					{	global.show_data();
						x++;
					}
                                    }    
				mem3.seekg(0);
				mem3.close();
				if(x==0)
				  cout<<" No such Id present, Enter proper ID"; 
				break;
case 'V':case 'v' :         y=0;
				mem3.close();
				mem3.open("MUWORLD");
				while(mem3.read((char*)&global,sizeof(global)))
				{
					global.show_data();
					y++;
				}
				mem3.seekg(0);
				mem3.close();
				if(y==0)
				cout<<" NO DATA PRESENT "<<endl<<endl;
				 break;
case 'W':case 'w':      return;
default:          cout<<" Enter proper choice U or V ";
} //for switch
mem3.close();
cout<<endl;
cout<<" Want to continue ";
cin>>chy;
}
cout<<" Press any key to continue :-";
aid();
 
getch();
}
 //for function//FUNCTION 11~~
void Music::add_records()	
{
ofstream mem4("MUWORLD",ios::binary|ios::ate);
if(!mem4)
{
cout<<" Not enough space ";getch();
exit(0);
          }
          global.test();
          mem4.close();
          char chyr='y';
          while(chyr=='y'||chyr=='Y')
          {
mem4.open("MUWORLD",ios::ate);
global.enter_data();
mem4.write((char*)&global,sizeof(global));
cout<<" Track Added , Wana continue ";
cin>>chyr;
if(chyr=='y'||chyr=='Y')
     mem4.close();
aid();
          }
          mem4.close();
}
//FUNCTION 12~~
void Music::edit()
{
ifstream mem7;
mem7.open("MUWORLD",ios::binary);
ofstream mem12;
mem12.open("M",ios::binary,ios::ate);
if(!mem7)
{
cout<<" No space No space ";
getch();
exit(0);
}
 
         mem7.close();
         mem12.close();
char p;
int z=0;
char editt[10];
char ch='y';
while(ch=='y'||ch=='Y')
{
 z=0;
Music::test();
cout<<" Enter 'e' Id to Edit : "<<endl;
cout<<" Press 'r' to return : "<<endl;
cin>>p;
switch(p)
        {
             case 'e':case 'E':   cout<<" Enter tracks Id to Edit : "<<endl;
               gets(editt);
              mem7.open("MUWORLD");
     mem12.open("M",ios::ate);
while(mem7.read((char*)&global,sizeof(global))){
if(strcmp(global.Track_Id,editt)==0)
{
z++;
cout<<"ENTER NEW DETAILS  OF THE TRACK "<<endl<<endl;
global.enter_datas();
mem12.write((char*)&global,sizeof(global);
}
else
mem12.write((char*)&global,sizeof(global);
                  }
                                    mem7.close();
                                    mem12.close();
                                    remove("MUWORLD");
                                    rename("M","MUWORLD");
                                   if(z==0)
                                  {
                    		 cout<<" No such track present, please enter the Id properly      "<<endl;
                   		}
                   		break;
case 'r':case 'R':           return;
}
 
   cout<<" Want to continue ";
   cin>>ch;
   aid();
}
aid();	
}


//FUNCTION 13
void Music::delete_record()
{
global.test();
ifstream mem9("MUWORLD",ios::binary);
ofstream mem10("TEMPM",ios::binary|ios::app);
if(!mem9&&!mem10)
{
  cout<<" Not Enough Space "<<endl;
  getch();
  exit(0);
}
int tem;
char delr[10];
char entry='y';
while(entry=='y'||entry=='Y')
{
    cout<<" WANT TO DELETE FILE.. PRESS: 1 "<<endl;
    cout<<" WANT TO DELETE PARTICULAR RECORD.. PRESS: 2 " <<endl;
cout<<" TO RETURN PRESS ... 3 "<<endl;
cin>>tem;
switch(tem)
{     case 3:  return;
       case 2: mem9.close();
mem9.open("MUWORLD");
int m=0;
cout<<" Enter the Id of track to be deleted "<<endl;
gets(delr);
mem9.seekg(0);
while(mem9.read((char*)&global,sizeof(global)))
{
if(strcmp(global.Track_Id,delr)!=0)
{
mem10.write((char*)&global,sizeof(global);
m++;
}
 
 			}
mem9.seekg(0);
mem9.close();
mem10.close();
if(m==0)
cout<<" NO SUCH ID PRESENT, ID MUST HAVE BEEN   DELETED "<<endl;
else
    				cout<<" TRACK DELETED "<<endl; 
break;
          case 1:
{
mem9.close();
mem10.close();
remove("MUWORLD");
rename("TEMPM","MUWORLD");
cout<<" FILE DELETED .... "<<endl;
global.create();
return;
                             }
     default:			cout<<" PLEASE ENTER A PROPER CHOICE ";
  }
  cout<<endl;
  cout<<" DO YOU WANT TO CONTINUE " <<endl;
  cin>>entry;
  aid();
  }
   mem9.close();
   mem10.close();
   remove("MUWORLD");
   rename("TEMPM","MUWORLD");
}
//DISPLAY
void call(char a[50])
{
int l,i;
l=strlen(a);
for (i=0;i<l;i++)
{
         delay(150);
 
cprintf("%c",a[i]);
}
}
//WELCOME
void welcome_screen()
{
clrscr();
int xx;
for(xx=1;xx<80;xx++)
cout<<"*";
for(xx=1;xx<=48;xx++)
{
gotoxy(1,xx);
cout<<"*";
        }
for(xx=1;xx<=48;xx++)
{
gotoxy(79,xx);
cout<<"*"<<endl;
}
gotoxy(1,48);
for(xx=1;xx<80;xx++)
cout<<"*";
int i;
for(int x=640;x>=0;x--) 
//Design
{
delay(5);
if(x==639)
{
     delay(50);
     gotoxy(2,13);
     cout<<" --------------------------------------------------------------------------";
gotoxy(2,21);
cout<<" ----------------------------------------------------------------------------";
gotoxy(38,15);
call("PRESENTING");
gotoxy(29,17);
call("A PROJECT ON ");
gotoxy(33,19);
call("MUSIC SHOP MANAGEMENT");
delay(50);
}
         }
gotoxy(22,25);
for(int k=0;k<52;k++)
{
cout<<"#";
}
for(k=25;k<29;k++)
{
gotoxy(22,k);
cout<<"#"<<endl;
}
for(k=22;k<74;k++)
{
gotoxy(k,29);
cout<<"#";
}
for(k=29;k>25;k--)
{
gotoxy(73,k);
cout<<"#";
}
gotoxy(23,27);
cputs(" LOADING ");
for(int h=1;h<=38;h++)
{
cprintf("%c",14);
delay(100);
}
gotoxy(2,47);
cputs(" COMPLETE ..... ");gotoxy(29,47);
  cputs("Press Any Key To Login....");
getch();
}
 
//BYE-BYE
void bye_bye()
{
clrscr();
int x;
for(x=1;x<80;x++)
cout<<"*";
gotoxy(1,1);
for(x=1;x<=48;x++)
cout<<"*"<<endl;
for(x=1;x<=48;x++)
{
gotoxy(79,x);
cout<<"*"<<endl;
}
gotoxy(1,48);
for(x=1;x<80;x++)
cout<<"*";
gotoxy(20,4);
call(" PROGRAMMERS AND DESIGNERS: ");
gotoxy(4,6);
cout<<"RAVI SHEKHAR" ;
gotoxy(4,45);
cout<<"AMANDEEP";
gotoxy(63,45);
cout<<" NISHIGANDHA ";
gotoxy(63,6);
cout<<"BANTY KUMAR";
gotoxy(25,22);
call(" SPECIAL THANKS TO ");
gotoxy(27,24);
call(" S . K . JHA SIR");
gotoxy(25,26);
cout<<"(H.O.D,Computer Science)";
delay(400);
}
//INITIATE
void initiate()
{	
clrscr();
cout<<" --------------------"<<endl;
cout<<"WELCOME TO MANKIRAT & GROUP "<<endl;
cout<<" MusiC PlaNeT"<<endl;
cout<<"--------------------"<<endl;
cout<<" #####$$*****"<<endl;
cout<<"--------------------"<<endl;
cout<<" Choose Your Option:"<<endl;
 
cout<<" --------------------"<<endl;
cout<<" 1 -> ADD TRACKS "<<endl;
cout<<" 2 -> VIEW DATA FROM FILE "<<endl;
cout<<" 3 -> SEARCH RECORD(s)"<<endl;	
cout<<" 4 -> EDiIT DATA "<<endl;

cout<<" 5 -> DELETE RECORDS FROM FILE "<<endl;
cout<<" 6 -> EXIT TO PROGRAM WINDOWS " <<endl;
char choose;
char contin='y';
while(contin=='Y'||contin=='y')
{
     cout<<" --------------------"<<endl;
     cout<<" ENTER YOUR CHOICE : " ;
     cin>>choose;
     switch(choose)
    {
      case '1':  global.add_records(); 
                   break;
      case '2': global.view_data();
  break;
                        case '3': global.search();
 break;
      case '4': global.edit();
  break;
               case '5': global.delete_record(); 
break;
                      case '6': return;
                      default: cout<<" Please enter proper choice "<<endl;
         break;
}
cout<<" --------------------"<<endl;
cout<<" Want To COnTinUe In MaINs :"<<endl;
cin>>contin;
if(contin=='y'||contin=='Y')aid();
}
}
 
//VOID MAIN FUNCTION
void main()
{
   char pass[20];
   welcome_screen();
   clrscr();
   gotoxy(30,15);
   cout<<" ENTER THE PASSWORD : "<<endl;
   gotoxy(2,47);
   gets(pass);
   if(strcmpi(pass,"music")==0)
       initiate();
	else
	{
    	clrscr();
    	gotoxy(25,20);
		cout<<" UNAUTHORISED ACCESS, PROGRAMME IS SHUTING DOWN ";
		gotoxy(25,22);
		gotoxy(27,25);
		cputs(" ENDING.. ");
		for(int h=1;h<=38;h++)
		{
			cprintf("%c",-80);
        }
		gotoxy(38,25);
		for(int k=1;k<=38;k++)
		{
    		cprintf("%c",-78);
    		delay(100); 
		}
		gotoxy(2,47);
		sound(400);
		delay(300);
		nosound();
		sound(7);
		delay(400);
		nosound();
		sound(400);
		delay(300);
		nosound();
		sound(7);
		delay(400);
		sound(400);
		delay(300);
		nosound();
		sound(7);
		delay(400);
		nosound();
		exit(0);
	}
bye_bye();
}




