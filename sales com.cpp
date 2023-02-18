#include<iostream>
using namespace std;

int main()
{

float total_income,income,sales,commision,tax;
//cout<<"Input fixed allowance\n";
//cin>>fixedallawance;
float fixed_allawance=10000;
cout<<"input value of sales\n";
cin>>sales;

if(sales>50000)
{
    commision=0.12*sales;
}
else if(sales>=20000&&sales<50000)
{
    commision=0.09*sales;
}
else if(sales>10000&&sales<20000)
{
    commision=0.07*sales;
}
else
{
    commision=0;
}
cout<<"commision="<<commision<<endl;
income=fixed_allawance+commision;
cout<<"income before tax"<<income<<endl;
if(income>=10000)
{
tax=income*0.1;
}
else
{
 tax=0;
}
cout<<"Tax="<<tax<<endl;
total_income=income-tax;
cout<<"total income"<<total_income<<endl;
return 0;
}
