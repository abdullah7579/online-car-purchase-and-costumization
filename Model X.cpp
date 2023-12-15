#include<iostream>
using namespace std;

//range=range, tspeed= top speed, hmile=time for half mile 
float v,Xrange=348,Xtspeed=149,Xhmile=3.8,Prange=333,Ptspeed=149,Phmile=2.5;
float p;//varible for paint
char a;//variable of auto pilot
char sd;//varible for self driving 
char sr;//varible for sun roof
char hs;//varible for heated seats
char hst;//varible for heated stearing
char sw;//varible for spare wheel
char tk;//varible for tool kit
char wc;//varible for wall connector
char mc;//varible for mobile connector
char ap;//varible for air pump
char kf;//varible for key fob
char  sp;//varible for shipping time 
string adr;//varible for adress
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
	cout<<"Which varient do you want(For Model X press 1, for Model X Plaid press 2): "<<endl;
	cin>>v;
	
	if(v==1)
	{
		v1 = "Model X";
		v2 = Xrange;
		v3 = Xtspeed;
		v4 = Xhmile;
		cout<<"You selected Model X which will have: "<<endl<<Xrange<<" mile range, "<<endl<<Xtspeed<<" mileperhour top speed, "<<endl<<"Will require "<<Xhmile<<" seconds to reach half mile"<<endl;
		tpr=tpr+vprice1;
		cvprice=vprice1;
		cout<<"Price of your Model X is: $"<<tpr<<endl;
	}
	else
	{
		v1 = "Model X Plaid";
		v2 = Prange;
		v3 = Ptspeed;
		v4 = Phmile;
		cout<<"You selected Model X Plaid which will have: "<<endl<<Prange<<" mile range, "<<endl<<Ptspeed<<" mileperhour top speed, "<<endl<<"Will require "<<Phmile<<" seconds to reach half mile"<<endl;
		tpr=tpr+vprice2;
		cvprice=vprice2;
		cout<<"Price of your Model X Plaid is: $"<<tpr<<endl;
	}
}
void paint()
{
	cout<<"Select your paint color. For Pearl whilte press 1, for solid black press 2, for stealth grey press 3, for deep blur metalic press 4, for ultra red press 5."<<endl;
	cin>>p;
	if(p==1)
	{
		p1 = "Your car is in  pearl whilte color.";
		cout<<"You had selected pearl whilte color";
	}
	if(p==2)
	{
		p1 = "Your car is in solid black color.";
		cout<<"You had selected solid black color";
	}
	if(p==3)
	{
		p1 = "Your car is in stealth grey color.";
		cout<<"You had selected stealth grey color";
	}
	if(p==4)
	{
		p1 = "Your car is in deep blue metallic color.";
		cout<<"You had selected deep blue metallic color";
	}
	if(p==5)
	{
		p1 = "Your car is in ultra red color.";
		cout<<"You had selected ultra red color";
	}
	cout<<endl;
	tpr=tpr+paintprice;
	paintprice1=paintprice;
	cout<<"Current price of your car is: $"<<tpr<<endl;
}
void aut()
{
	cout<<"Do you want auto pilot(Y/N): ";
	cin>>a;
	if(a=='Y'||a=='y')
	{
		cout<<"You had purchased auto pilot.";
		a1 = "You had purchased auto pilot.";
		tpr=tpr+aprice;
		aprice1=aprice;
		cout<<"Your current price is: $"<<tpr;
	}
	else
	{
		cout<<"You had not purchased auto pilot.";
		a1 = "You had not purchased auto pilot.";
		cout<<"Your current price is: $"<<tpr;
		aprice1=0;
	}
}
void sdriving()
{
	cout<<"Do you want self driving(Y/N): ";
	cin>>sd;
	if(sd=='Y'||sd=='y')
	{
		cout<<"You had sucessfully purchased Tesla self driving.";
		sd1 = "You had sucessfully purchased Tesla self driving.";
		tpr=tpr+sdprice;
		sdprice1=sdprice;
		cout<<"Current price is: $"<<tpr;
	}
	else
	{
		cout<<"You has not purchased Tesla self driving.";
		sd1 = "You has not purchased Tesla self driving.";
		cout<<"Your price is same ie $"<<tpr;
		sdprice=0;
	}
}
void sroof()
{
	cout<<"Do you want sun roof(Y/N): ";
	cin>>sr;
	if(sr=='Y'||sr=='y')
	{
		cout<<"You got a sun roof in your Tesla.";
		sr1 = "You got a sun roof in your Tesla.";
		tpr=tpr+srprice;
		srprice1=srprice;
		cout<<"Your cars price is: $"<<tpr;
	}
	else
	{
		cout<<"You skipped sun roof in your Tesla.";
		sr1 = "You skipped sun roof in your Tesla.";
		cout<<"Your cars price is: $"<<tpr;
		srprice=0;
	}
}
void hseat()
{
	cout<<"Do you want heated seats(Y/N): ";
	cin>>hs;
	if(hs=='Y'||hs=='y')
	{
		cout<<"You got heated seats in your ";
		hs1="You got heated seats in your ";
		tpr=tpr+hsprice;
		hsprice1=hsprice;
		cout<<"Your price is: $"<<tpr;
		
	}
	else
	{
		cout<<"You skipped heated seats in your ";
		hs1="You skipped heated seats in your ";
		cout<<"Your cars price is: $"<<tpr;
		hsprice1=0;
	}
}
void hstearing()
{
	cout<<"Do you want heated stearing(Y/N): ";
	cin>>hst;
	if(hst=='Y'||hst=='y')
	{
		cout<<"Your car has heated stearing wheel.";
		hst1="Your car has heated stearing wheel.";
		tpr=tpr+hstprice;
		hstprice1=hstprice;
		cout<<"Your price is: $"<<tpr;
	}
	else
	{
		cout<<"Your car doesnot has heated stearing.";
		hst1="Your car doesnot has heated stearing.";
		cout<<"Your price is same: $"<<tpr;
		hstprice1=0;
	}
}
void styre()
{
	cout<<"Do you want spare wheel(Y/N): ";
	cin>>sw;
	if(sw=='Y'||sw=='y')
	{
		cout<<"Your car has spare wheel.";
		sw1="Your car has a spare wheel.";
		tpr=tpr+swprice;
		swprice1=swprice;
		cout<<"Cars price is: $"<<tpr;
	}
	else
	{
		cout<<"Your car doesnot has a spear wheel.";
		sw1="Your car doesnot has a spear wheel.";
		cout<<"Your price is same ie: $"<<tpr;
		swprice1=0;
	}
}
void tkit()
{
	cout<<"Do you want tool kit(Y/N): ";
	cin>>tk;
	if(tk=='Y'||tk=='y')
	{
		cout<<"Your car has a tool kit.";
		tk1="Your car has a tool kit.";
		tpr=tpr+tkprice;
		tkprice1=tkprice;
		cout<<"Your cars price is: $"<<tpr;
	}
	else
	{
		cout<<"Your car doesnot has a tool kit.";
		tk1="Your car doesnot has a tool kit.";
		cout<<"Price of your car is: $"<<tpr;
		tkprice=0;
	}
}
void wconnec()
{
	cout<<"Do you want wall connector(Y/N): ";
	cin>>wc;
	if(wc=='Y'||wc=='y')
	{
		cout<<"Wall connector would be added to your car.";
		wc1="Wall connector would be added to your car.";
		tpr=tpr+wcprice;
		wcprice1=wcprice;
		cout<<"Current price is: $"<<tpr;
	}
	else
	{
		cout<<"Your car is missing the wall connector.";
		wc1="Your car is missing the wall connector.";
		cout<<"Current price is: $"<<tpr;
		wcprice=0;
	}
}
	
void mconnec()
{
	cout<<"Do you want mobile connector(Y/N): ";
	cin>>mc;
	if(mc=='Y'||mc=='y')
	{
		cout<<"Your car has a mobile connector.";
		mc1="Your car has a mobile connector.";
		tpr=tpr+mcprice;
		mcprice1=mcprice;
		cout<<"Cars price increases to: $"<<tpr;
	}
	else
	{
		cout<<"Mobile connector is not added to your car.";
		mc1="Mobile connector is not added to your car.";
		cout<<"Price is same: $"<<tpr;
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
		cout<<"Current price of car is: $"<<tpr;
	}
	else
	{
		cout<<"Your car misses air pump.";
		ap1="Your car misses air pump.";
		cout<<"Cars price is: $"<<tpr;
		apprice1=0;
	}
}
void kfob()
{
	cout<<"Do you want key fob(Y/N): ";
	cin>>kf;
	if(kf=='Y'||kf=='y')
	{
		cout<<"Your car has a fob key.";
		kf1="Your car has a fob key.";
		tpr=tpr+kfprice;
		kfprice1=kfprice;
		cout<<"Price with key fob is: $"<<tpr;
	}
	else
	{
		cout<<"Your car doesnot has a fob key.";
		kf1="Your car doesnot has a fob key.";
		cout<<"Cars price without key fob is: $"<<tpr;
		kfprice1=0;
	}
}
void ship()
{
	cout<<"Do you want urgent(With in a month) or normal delivery(Urgent delivery will have extra charges): ";
	cin>>sp;
	if(sp=='Y'||sp=='y')
	{
		cout<<"Your car will be delivered in urgent conditions.";
		sp1="Your car will be delivered in urgent conditions.";
		tpr=tpr+spprice;
		spprice1=spprice;
		cout<<"With urgent delivery your car will cost: $"<<tpr;
	}
	else
	{
		cout<<"Your car will be deliveres normally.";
		sp1="Your car will be deliveres normally.";
		cout<<"With normal delivery your car will cost: $"<<tpr;
		spprice=0;
		
	}
}
void adress()
{
	cout<<"Enter your location of delivery: ";
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
	sroof();//sun roof
	cout<<endl;
	hseat();//heated seats 
	cout<<endl;
	hstearing();//heated stearing 
	cout<<endl;
	styre();//spare syte
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
	adress();
	cout<<endl;
	
	cout<<"You had selected: "<<v1<<"-----"<<"$"<<cvprice<<endl<<endl<<"With specifications: "<<endl<<"Range "<<v2<<"miles"<<endl<<"Max speed "<<v3<<"mileperhour"<<endl<<"Requires "<<v4<<"seconds to reach half miles"<<endl;//varient
	cout<<endl<<p1<<"-----"<<"$"<<paintprice1<<endl;//paint
	cout<<a1<<"-----"<<"$"<<aprice1<<endl;//auto pilot
	cout<<sd1<<"-----"<<"$"<<sdprice1<<endl;
	cout<<sr1<<"-----"<<"$"<<srprice1<<endl;
	cout<<hs1<<v1<<"."<<"-----"<<"$"<<hsprice1<<endl;
	cout<<hst1<<"-----"<<"$"<<hstprice1<<endl;
	cout<<sw1<<"-----"<<"$"<<swprice1<<endl;
	cout<<tk1<<"-----"<<"$"<<tkprice1<<endl;
	cout<<wc1<<"-----"<<"$"<<wcprice1<<endl;
	cout<<mc1<<"-----"<<"$"<<mcprice1<<endl;
	cout<<ap1<<"-----"<<"$"<<apprice1<<endl;
	cout<<kf1<<"-----"<<"$"<<kfprice1<<endl;
	cout<<sp1<<"-----"<<"$"<<spprice1<<endl;
	cout<<adr1<<adr<<endl;
	cout<<"Your car will cost: $"<<tpr;
	
	
	return 0;
}
