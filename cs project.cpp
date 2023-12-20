#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string control[17]
{
	"Select your car(Model X, Model Y, Model 3)",
	"Select your varient(Model X, Model X Plaid)",
	"Select your varient(Model Y, Model Y Performance, Model Y Long Range)",
	"Select your varient(Model 3, Model 3 Performance, Model 3 Long Range)",
	"Select your paint color: ",
	"Select your interior color(white or black)",
	"Select your rims size(18 inch or 19 inch)",
	" leather seats "," auto pilot "," self driving "," sun roof "," heated seats ",
	" heated stearing "," spear wheels "," wall connector "," air pump "," key fob "
};

string selection[17]
{
	
};
string adress;

int price[10]
{
	500,2500,1500,700,900,400,80,500,35,250
};

int finalprice[15]
{
	1,500,600,700,
};

double additionprice=0;
void controls(int a);
void finalpricefun(int b);
void receipt(int c);
void additionprices(int d);

int main()
{
	string name, username, password;
    

    // Registration
    cout << "Registration\n";
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);

    

    cout << "Choose a username: ";
    cin >> username;

    cout << "Create a password: ";
    cin >> password;

    cout << "Registration successful!\n";

    // Login
    string loginentry, passwordentry;
    cout << "\nLogin\n";
    cout << "Enter your username: ";
    cin >> loginentry;

    cout << "Enter your password: ";
    cin >> passwordentry;

    // Check if login and password match the registered values
    if (loginentry == username && passwordentry == password) {
        cout << "Welcome! Login Successful\n";
    } else {
        cout << "Login Failed! Try Again\n";
    }


	for(int i=0;i<15;i++)
	{
		controls(i);
	}
	
	cout<<"Enter your delivery adress: "<<endl;
	getline(cin, adress);
	cout<<endl<<endl<<endl;
	
	for(int i=0;i<15;i++)
	{
		finalpricefun(i);
	}
	
	for(int i=0;i<15;i++)
	{
		additionprices(i);
	}
	
	for(int i=0;i<=15;i++)
	{
		receipt(i);
	}
}

void controls(int a)
{
	if(a==0)
	{
		cout<<control[0]<<endl;
		getline(cin, selection[0]);
	}
	if(a==1)
	{
		if(selection[0]=="model x"||selection[0]=="Model X")
		{
			cout<<control[1]<<endl;
			getline(cin, selection[1]);
		}
		if(selection[0]=="model y"||selection[0]=="Model Y")
		{
			cout<<control[2]<<endl;
			getline(cin, selection[1]);
		}
		if(selection[0]=="model 3"||selection[0]=="Model 3")
		{
			cout<<control[3]<<endl;
			getline(cin, selection[1]);
		}
	}
	if(a>=2)
	{
		if(a>=2&&a<5)
		{
			cout<<control[a+2]<<endl;
			getline(cin, selection[a]);
		}
		if(a>=5)
		{
			cout<<"Do you want"<<control[a+2]<<"?"<<endl;
			getline(cin, selection[a]);
		}
	}
}
void finalpricefun(int b)
{
	if(b==0)
	{
		if(selection[1]=="model x"||selection[1]=="Model X")
		{
			finalprice[0]=40000;
		}
		if(selection[1]=="model x plaid"||selection[1]=="Model X Plaid")
		{
			finalprice[0]=45000;
		}
		if(selection[1]=="model y"||selection[1]=="Model Y")
		{
			finalprice[0]=32000;
		}
		if(selection[1]=="model y performance"||selection[1]=="Model Y Performance")
		{
			finalprice[0]=41000;
		}
		if(selection[1]=="model y long range"||selection[1]=="Model Y Long Range")
		{
			finalprice[0]=37000;
		}
		if(selection[1]=="model 3"||selection[1]=="Model 3")
		{
			finalprice[0]=28000;
		}
		if(selection[1]=="model 3 performance"||selection[1]=="Model 3 Performance")
		{
			finalprice[0]=40000;
		}
		if(selection[1]=="ymodel 3 long range"||selection[1]=="Model 3 Long Range")
		{
			finalprice[0]=35000;
		}
	}
	if(b>3)
	{
		if(selection[b+1]=="y"||selection[b+1]=="Y")
		{
			finalprice[b]=price[b-4];
		}
		else
		{
			finalprice[b]=0;
		}
	}
}
void receipt(int c)
{
	if(c==0)
	{
		cout<<"You had selected: "<<selection[0]<<endl;
	}
	if(c==1)
	{
		cout<<"Your's car varient is: "<<selection[1]<<"----- $"<<finalprice[0]<<endl;
	}
	if(c==2)
	{
		cout<<"Your car color is: "<<selection[2]<<"----- $"<<finalprice[1]<<endl;
		cout<<"Interior color of your car is: "<<selection[3]<<"----- $"<<finalprice[2]<<endl;
		cout<<"Rims size is: "<<selection[4]<<"----- $"<<finalprice[3]<<endl;
	}
	if(c==3)
	{
		cout<<"Your car include following items: "<<endl;
	}
	if(c>3&&c<14)
	{
		cout<<control[c+3]<<"status: "<<selection[c+1]<<"----- $"<<finalprice[c]<<endl;
	}
	if(c==14)
	{
		cout<<"Final price of your car is: "<<"----- $"<<additionprice<<endl;
	}
	if(c==15)
	{
		cout<<"Your delivery adress is: "<<adress<<endl;
	}
}
void additionprices(int d)
{
	additionprice += finalprice[d];
}
