#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <cctype>
using namespace std;



int main(){

//DECLARED VARS
int phy, math, chem, choice;
double average, total = 0;
const string TEST1 = "ASSIGNMENT";
const string TEST2 = "COURSEWORK";
const string TEST3 = "MID-TERM";
const string TEST4 = "END OF TERM";

//calculate total and average
// total = phy + math + chem;
// average = total/3;

while (true){

cout<<"\tChoose a test set below"<<endl;

//OPTIONS TO BE SELECTED FROM

cout<<"\t 1. ASSIGNMENT"<<endl;
cout<<"\t 2. COURSEWORK"<<endl;
cout<<"\t 3. MID-TERM"<<endl;
cout<<"\t 4. END OF TERM"<<endl;
cout<<endl;


bool isFailing = true;
while (isFailing){
cout<<" Enter between 1 and 4 from the options above"<<endl;
cin>>choice;

//CHECK CHOICE
switch(choice){
case -100 ... 0:
cout<<"Please enter correct choice!"<<endl;

break;

case 1:
cout<<"You selected "<<TEST1<<endl;
sleep(1);
system("cls");
cout<<"Enter marks to see total and average"<<endl;

//testing
//prompt user to enter marks
cout<<"Physics: ";
cin>>phy;

cout<<"Maths: ";
cin>>math;

cout<<"Chemistry: ";
cin>>chem;

total = phy + math + chem;
average = (total/3);


cout<<"TOTAL IN "<<TEST1<<" = "<<total<<endl;
cout<<"AVERAGE IN "<<TEST1<<" = "<<average<<endl;
isFailing = false;
break;

case 2:
cout<<"You selected "<<TEST2<<endl;
sleep(1);
system("cls");
cout<<"Enter marks to see total and average"<<endl;

//testing
//prompt user to enter marks
cout<<"Physics: ";
cin>>phy;

cout<<"Maths: ";
cin>>math;

cout<<"Chemistry: ";
cin>>chem;

total = phy + math + chem;
average = (total/3);


cout<<"TOTAL IN "<<TEST2<<" = "<<total<<endl;
cout<<"AVERAGE IN "<<TEST2<<" = "<<average<<endl;
isFailing = false;
break;

case 3:
cout<<"You selected "<<TEST3<<endl;
sleep(1);
system("cls");
cout<<"Enter marks to see total and average"<<endl;

//testing
//prompt user to enter marks
cout<<"Physics: ";
cin>>phy;

cout<<"Maths: ";
cin>>math;

cout<<"Chemistry: ";
cin>>chem;

total = phy + math + chem;
average = (total/3);


cout<<"TOTAL IN "<<TEST3<<" = "<<total<<endl;
cout<<"AVERAGE IN "<<TEST3<<" = "<<average<<endl;
isFailing = false;
break;

case 4:
cout<<"You selected "<<TEST4<<endl;
sleep(1);
system("cls");
cout<<"Enter marks to see total and average"<<endl;

//testing
//prompt user to enter marks
cout<<"Physics: ";
cin>>phy;

cout<<"Maths: ";
cin>>math;

cout<<"Chemistry: ";
cin>>chem;

total = phy + math + chem;
average = (total/3);


cout<<"TOTAL IN "<<TEST4<<" = "<<total<<endl;
cout<<"AVERAGE IN "<<TEST4<<" = "<<average<<endl;
isFailing = false;
break;

case 5 ... 1000000:
cout<<"Option Out of Range"<<endl;
break;

default:
cout<<"unknown input"<<endl;
}
};

}





return 0;
}

