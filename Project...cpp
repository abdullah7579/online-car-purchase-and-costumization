#include<iostream>
#include<string>
using namespace std;
string controls[]
{
	"Which varient of car do you want to book? Here we have Model X and Model X Plaid ",
	"Which paint you want for your car ",
	"Select your interior color(white or black)",
	"Which size of rim do you want? Here we have 18 inch and 19 inch",
	"leather seats or not","auto pilot","self driving","sun roof","heated seats",
	"heated stering","spear wheel","wall connector","mobile connector","air pump","key fob"
};


string selection[15]
{

};


int price[11]
{
	500,2500,1500,700,900,400,850,1200,600,50,75
};


int finalprice[15]
{
	1,500,600,700,
};


string loc="";
void control(int i);
void yesorno(int i);
void pricefun(int i);
void delivery();
void reciept();


int main()
{
	for(int i=0;i<15;i++)
	{
		if(i<=3)
		control(i);
		else
		yesorno(i);
	}
	for(int i=0;i<15;i++)
	{
		pricefun(i);
	}
	delivery();
	reciept();
}



void control(int i)
{
	cout<<controls[i]<<":"<<endl;
	getline(cin, selection[i]);
	cin.ignore();
}


void yesorno(int i)
{
	cout<<"Do you want "<<controls[i]<<"? "<<endl;
	cin>>selection[i];
	cin.ignore();
}


void pricefun(int i)
{
	if(i==0)
	{
		if(selection[i]=="Model X Plaid"||selection[i]=="plaid"||selection[i]=="Plaid")
		finalprice[i]=45000;
		else
		finalprice[i]=40000;
	}
	if(i>3)
	{
	if(selection[i]=="y" || selection[i]=="Y")
	finalprice[i]=(price[i-4]);
	else
	finalprice[i]=0;
	}
}


void delivery()
{
	cout<<"Enter your delivery location: "<<endl;
	getline(cin, loc);
	cin.ignore();
}


void reciept()
{
	cout<<"You had selected "<<selection[0]<<"----- $"<<finalprice[0]<<endl;
	cout<<"Your car has "<<selection[1]<<" color. ----- $"<<finalprice[1]<<endl;
	cout<<"Your interiour color is "<<selection[2]<<"----- $"<<finalprice[2]<<endl;
	cout<<"Your tyre size is "<<selection[3]<<"----- $"<<finalprice[3]<<endl;
	string status[]
	{
		"leather seats status: ","autopiot status: ","selfdriving status: ","sunroof status: ",
		"heaated seats status: ","heated stering status: ","spear wheel status: ",
		"wall connector status: ","mobile connector status: ","air pump status: ","key fob status: "
	};
	cout<<"Status of itmes which your car include are: "<<endl;
	for(int j=0;j<11;j++)
	{
		cout<<status[j]<<selection[j+4]<<"----- $"<<finalprice[j+4]<<endl;
	}
	int x=0;
	for(int z=0;z<15;z++)
	{
		x=x+finalprice[z];
	}
	cout<<"Total price will be: $"<<x<<endl;
	cout<<"Your car will be delivered to: "<<loc<<endl;
}
