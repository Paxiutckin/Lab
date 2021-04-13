#include <iostream>
#include<cmath>

using namespace std;

int main()
{
double time,weight, speed, trenie, alpha;
double k,x,y;
const double g=9.8;
setlocale(LC_ALL,"Rus");
do
{
cout <<"¬веди врем€ (сек) ";
cin>>time;
if (cin.fail())
{
cout<<"¬веди корректные данные "<<endl;
cin.clear();
cin.ignore ();
fflush(stdin);
}
else
if (time<=0)
{
cout<<"¬веди корректные данные "<<endl;
cin.clear();
fflush(stdin);
}

}while(time<=0|| !time);



do
{
cout <<"¬веди массу (кг) ";
cin>>weight;
if (cin.fail())
{
cout<<"¬веди корректные данные "<<endl;
cin.clear();
cin.ignore ();
fflush(stdin);
}
else
if (weight<=0)
{

cout<<"¬веди корректные данные "<<endl;
cin.clear();
fflush(stdin);

}

}while(weight<=0|| !weight);


do
{
cout <<"¬веди скорость (м/с) ";
cin>>speed;
if (cin.fail())
{
cout<<"¬веди корректные данные "<<endl;
cin.clear();
cin.ignore ();
fflush(stdin);
}
else
if (speed<=0)
{

cout<<"¬веди корректные данные "<<endl;
cin.clear();
fflush(stdin);

}

}while(speed<=0|| !speed);


do
{
cout <<"¬веди коефицент трени€ ";
cin>>trenie;
if (cin.fail())
{
cout<<"¬веди корректные данные "<<endl;
cin.clear();
cin.ignore ();
fflush(stdin);
}
else
if (trenie<=0)
{

cout<<"¬веди корректные данные "<<endl;
cin.clear();
fflush(stdin);

}

}while(trenie<=0|| !trenie);

do
{
cout <<"¬веди градус угла ";
cin>>alpha;
if (cin.fail())
{
cout<<"¬веди корректные данные "<<endl;
cin.clear();
cin.ignore ();
fflush(stdin);
}
else
if (alpha<0|| alpha>90)
{

cout<<"¬веди корректные данные "<<endl;
cin.clear();
fflush(stdin);

}

}while(alpha<0|| alpha>90 || !alpha);

k = trenie/weight;

for (int i = 0; i < time; i++)
{x = (((speed * cos(alpha)) / k) * (1 - exp(-k * i)));
y = ((((g / k) + speed * sin(alpha)) / k) * (1 - exp(-k * i))) - (g * i / k);
cout << "x(" << i + 1 << ") = " << x << " ";
cout << "y(" << i + 1 << ") = " << y << " ";
cout << endl;
}

}
