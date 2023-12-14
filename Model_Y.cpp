#include<iostream>
using namespace std;
//range=range, tspeed= top speed, hmile=time for half mile 
float v,Yrange=330,Ytspeed=155,Yhmile=3.8,YAWDrange=333,YAWDtspeed=149,YAWDhmile=2.5;
float p;//varible for paint
char a;//variable of auto pilot
char sd;//varible for self driving 
char sr;//varible for panoramic sun roof
char hs;//varible for heated seats
char hst;//varible for heated stearing
char sw;//varible for spare wheel
char tk;//varible for tool kit
char wc;//varible for wall connector
char mc;//varible for mobile connector
char ap;//varible for air pump
char kf;//varible for key fob
char  sp;//varible for shipping time 
string adr;//varible for address
string v1;
float v2,v3,v4;
string p1;
string a1;
string sd1;
string sr1;
string hs1;
string hst1;
string sw1;
string tk1;
string wc1;
string mc1;
string ap1;
string kf1;
string sp1;
string adr1;
//prices starts from here
float vprice1=40000,vprice2=45000,paintprice=500,aprice=2500,sdprice=2500,srprice=1500,hsprice=2000,hstprice=1000,swprice=100,tkprice=100,wcprice=1500,mcprice=1500,apprice=500,kfprice=700,spprice=5000;
float cvprice,paintprice1,aprice1,sdprice1,srprice1,hsprice1,hstprice1,swprice1,tkprice1,wcprice1,mcprice1,apprice1,kfprice1,spprice1;
float tpr=0;

void vdetail()
{
	cout<<"Which varient do you want(For Model Y press 1, for Model Y AWD press 2): "<<endl;
	cin>>v;
	
	if(v==1)
	{
		v1 = "Model Y";
		v2 = Yrange;
		v3 = Ytspeed;
		v4 = Yhmile;
		cout<<"You selected Model Y which will have: "<<endl<<Yrange<<"mile range, "<<endl<<Ytspeed<<"mileperhour top speed, "<<endl<<"Will require "<<Yhmile<<"seconds to reach half mile"<<endl;
		tpr=tpr+vprice1;
		cvprice=vprice1;
		cout<<"Price of your Model Y is: "<<tpr<<endl;
	}
	else
	{
		v1 = "Model Y(AWD) Plaid";
		v2 = YAWDrange;
		v3 =YAWDtspeed;
		v4 = YAWDhmile;
		cout<<"You selected Model Y(AWD) which will have: "<<endl<<YAWDrange<<"mile range, "<<endl<<YAWDtspeed<<"mileperhour top speed, "<<endl<<"Will require "<<YAWDhmile<<"seconds to reach half mile"<<endl;
		tpr=tpr+vprice2;
		cvprice=vprice2;
		cout<<"Price of your Model Y(AWD) is: "<<tpr<<endl;
	}
}
void paint()
{
	cout<<"Select your paint color. For Pearl white press 1, for solid black press 2, for stealth grey press 3, for deep blue metalic press 4, for ultra red press 5."<<endl;
	cin>>p;
	if(p==1)
	{
		p1 = "Your car is in  pearl white color.";
		cout<<"You haave selected pearl white color";
	}
	if(p==2)
	{
		p1 = "Your car is in solid black color.";
		cout<<"You have selected solid black color";
	}
	if(p==3)
	{
		p1 = "Your car is in stealth grey color.";
		cout<<"You have selected stealth grey color";
	}
	if(p==4)
	{
		p1 = "Your car is in deep blue metallic color.";
		cout<<"You have selected deep blue metallic color";
	}
	if(p==5)
	{
		p1 = "Your car is in ultra red color.";
		cout<<"You have selected ultra red color";
	}
	cout<<endl;
	tpr=tpr+paintprice;
	paintprice1=paintprice;
	cout<<"Current price of your car is: "<<tpr<<endl;
}
void aut()
{
	cout<<"Do you want auto pilot(Y/N): ";
	cin>>a;
	if(a=='Y'||a=='y')
	{
		cout<<"You have purchased auto pilot.";
		a1 = "You have purchased auto pilot.";
		tpr=tpr+aprice;
		aprice1=aprice;
		cout<<"Your current price is: "<<tpr;
	}
	else
	{
		cout<<"You have not purchased auto pilot.";
		a1 = "You have not purchased auto pilot.";
		cout<<"Your current price is: "<<tpr;
		aprice1=0;
	}
}
void sdriving()
{
	cout<<"Do you want self driving(Y/N): ";
	cin>>sd;
	if(sd=='Y'||sd=='y')
	{
		cout<<"You have sucessfully purchased Tesla self driving.";
		sd1 = "You have sucessfully purchased Tesla self driving.";
		tpr=tpr+sdprice;
		sdprice1=sdprice;
		cout<<"Current price is: "<<tpr;
	}
	else
	{
		cout<<"You have not purchased Tesla self driving.";
		sd1 = "You have not purchased Tesla self driving.";
		cout<<"Your current price is: "<<tpr;
		sdprice=0;
	}
}
void sroof()
{
	cout<<"Do you want panoramic sun roof(Y/N): ";
	cin>>sr;
	if(sr=='Y'||sr=='y')
	{
		cout<<"You got a panoramic sun roof in your Tesla.";
		sr1 = "You got a panoramic sun roof in your Tesla.";
		tpr=tpr+srprice;
		srprice1=srprice;
		cout<<"Your car price is: "<<tpr;
	}
	else
	{
		cout<<"You have not purchased panoramic sun roof.";
		sr1 = "You have not purchased panoramic sun roof.";
		cout<<"Your car price is "<<tpr;
		srprice=0;
	}
}
void hseat()
{
	cout<<"Do you want heated seats(Y/N): ";
	cin>>hs;
	if(hs=='Y'||hs=='y')
	{
		cout<<"You got heated seats in your car. ";
		hs1="You got heated seats in your car.";
		tpr=tpr+hsprice;
		hsprice1=hsprice;
		cout<<"Your price is: "<<tpr;
		
	}
	else
	{
		cout<<"You skipped heated seats in your car ";
		hs1="You skipped heated seats in your car ";
		cout<<"Your car price is: "<<tpr;
		hsprice1=0;
	}
}
void hstearing()
{
	cout<<"Do you want heated stearing(Y/N): ";
	cin>>hst;
	if(hst=='Y'||hst=='y')
	{
		cout<<"Your car have heated stearing wheel.";
		hst1="Your car have heated stearing wheel.";
		tpr=tpr+hstprice;
		hstprice1=hstprice;
		cout<<"Your price is: "<<tpr;
	}
	else
	{
		cout<<"Your car does not have heated stearing.";
		hst1="Your car does not have heated stearing.";
		cout<<"Your price is same: "<<tpr;
		hstprice1=0;
	}
}
void styre()
{
	cout<<"Do you want spare wheel(Y/N): ";
	cin>>sw;
	if(sw=='Y'||sw=='y')
	{
		cout<<"Your car have a spare wheel.";
		sw1="Your car have a spare wheel.";
		tpr=tpr+swprice;
		swprice1=swprice;
		cout<<"Car price is: "<<tpr;
	}
	else
	{
		cout<<"Your car does not hves a spear wheel.";
		sw1="Your car does not have a spear wheel.";
		cout<<"Your price is same  "<<tpr;
		swprice1=0;
	}
}
void tkit()
{
	cout<<"Do you want tool kit(Y/N): ";
	cin>>tk;
	if(tk=='Y'||tk=='y')
	{
		cout<<"Your car have a tool kit.";
		tk1="Your car have a tool kit.";
		tpr=tpr+tkprice;
		tkprice1=tkprice;
		cout<<"Your cars price is: "<<tpr;
	}
	else
	{
		cout<<"Your car does not have a tool kit.";
		tk1="Your car does not have a tool kit.";
		cout<<"Price of your car is: "<<tpr;
		tkprice=0;
	}
}
void wconnec()
{
	cout<<"Do you want wall connector for your car (Y/N): ";
	cin>>wc;
	if(wc=='Y'||wc=='y')
	{
		cout<<"Wall connector would be added to your car.";
		wc1="Wall connector would be added to your car.";
		tpr=tpr+wcprice;
		wcprice1=wcprice;
		cout<<"Current price is: "<<tpr;
	}
	else
	{
		cout<<"Your car is not going to have  the wall connector.";
		wc1="Your car is  not going to have the wall connector.";
		cout<<"Current price is: "<<tpr;
		wcprice=0;
	}
}
	
void mconnec()
{
	cout<<"Do you want mobile connector(Y/N): ";
	cin>>mc;
	if(mc=='Y'||mc=='y')
	{
		cout<<"Your car have a mobile connector.";
		mc1="Your car have a mobile connector.";
		tpr=tpr+mcprice;
		mcprice1=mcprice;
		cout<<"Car price increase to: "<<tpr;
	}
	else
	{
		cout<<"Mobile connector is not added to your car.";
		mc1="Mobile connector is not added to your car.";
		cout<<"Price is same :"<<tpr;
		mcprice1=0;
	}
}
void apump()
{
	cout<<"Do you want air pump(Y/N): ";
	cin>>ap;
	if(ap=='Y'||ap=='y')
	{
		cout<<"Your car has air pump to pressurise a punctured tyre.";
		ap1="Your car has air pump to pressurise a punctured tyre.";
		tpr=tpr+apprice;
		apprice1=apprice;
		cout<<"Current price of car is :"<<tpr;
	}
	else
	{
		cout<<"Your car misses air pump.";
		ap1="Your car misses air pump.";
		cout<<"Cars price is :"<<tpr;
		apprice1=0;
	}
}
void kfob()
{
	cout<<"Do you want key fob(Y/N): ";
	cin>>kf;
	if(kf=='Y'||kf=='y')
	{
		cout<<"You will get a key fob with your car .";
		kf1="You will get a key fob with your car.";
		tpr=tpr+kfprice;
		kfprice1=kfprice;
		cout<<"Price with key fob is: "<<tpr;
	}
	else
	{
		cout<<"You will not get a key fob with your car.";
		kf1="You will not get a key fob with your car.";
		cout<<"Car price without key fob is: "<<tpr;
		kfprice1=0;
	}
}
void ship()
{
	cout<<"Do you want urgent(With in a month) or normal delivery(Urgent delivery will have extra charges)(Y/N): ";
	cin>>sp;
	if(sp=='Y'||sp=='y')
	{
		cout<<"Your car will be delivered in within a month .";
		sp1="Your car will be delivered in within a month.";
		tpr=tpr+spprice;
		spprice1=spprice;
		cout<<"With urgent delivery your car will cost: "<<tpr;
	}
	else
	{
		cout<<"Your car will be delivered in 4 months  .";
		sp1="Your car will be delivered in 4 months .";
		cout<<"With normal delivery your car will cost: "<<tpr;
		spprice=0;
		
	}
}
void address()
{
	cout<<"Enter your address for the  delivery: ";
	cin>>adr;
	adr1="Your car will be delivered to: ";
}



int main()
{
	vdetail();//varient detail
	cout<<endl;
	paint();//paint
	cout<<endl;
	aut();//auto pilot
	cout<<endl;
	sdriving();//self driving
	cout<<endl;
	sroof();//panoramic sun roof
	cout<<endl;
	hseat();//heated seats 
	cout<<endl;
	hstearing();//heated stearing 
	cout<<endl;
	styre();//spare tyre
	cout<<endl;
	tkit();//tool kit
	cout<<endl;
	wconnec();//wall connector
	cout<<endl;
	mconnec();//mobile connector
	cout<<endl;
	apump();//air pump
	cout<<endl;
	kfob();//key fob
	cout<<endl;
	ship();//shipping time 
	cout<<endl;
	address();
	cout<<endl;
	
	cout<<"You have selected: "<<v1<<"-----"<<cvprice<<"$"<<endl<<endl<<"With specifications: "<<endl<<"Range "<<v2<<"miles"<<endl<<"Max speed "<<v3<<"mileperhour"<<endl<<"Requires "<<v4<<"seconds to reach half miles"<<endl;//varient
	cout<<endl<<p1<<"-----"<<paintprice1<<"$"<<endl;//paint
	cout<<a1<<"-----"<<aprice1<<"$"<<endl;//auto pilot
	cout<<sd1<<"-----"<<sdprice1<<"$"<<endl;
	cout<<sr1<<"-----"<<srprice1<<"$"<<endl;
	cout<<hs1<<v1<<"."<<"-----"<<hsprice1<<"$"<<endl;
	cout<<hst1<<"-----"<<hstprice1<<"$"<<endl;
	cout<<sw1<<"-----"<<swprice1<<"$"<<endl;
	cout<<tk1<<"-----"<<tkprice1<<"$"<<endl;
	cout<<wc1<<"-----"<<wcprice1<<"$"<<endl;
	cout<<mc1<<"-----"<<mcprice1<<"$"<<endl;
	cout<<ap1<<"-----"<<apprice1<<"$"<<endl;
	cout<<kf1<<"-----"<<kfprice1<<"$"<<endl;
	cout<<sp1<<"-----"<<spprice1<<"$"<<endl;
	cout<<adr1<<adr<<endl;
	cout<<"Your car will cost: "<<tpr;
	
	
	return 0;
}
