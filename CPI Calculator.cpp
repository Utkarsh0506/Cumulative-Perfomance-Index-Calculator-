#include<iostream>

class CPI
{
public:
    int a,d;
    float b,c;
void input()
{
std::cout<<"Enter your current CPI (Entry should be below 10) : ";

std::cin>>b;
std::cout<<" Total No. Of credit till last sem : ";

std::cin>>a;

}
void knowthissem1()
{
std::cout<<"Enter your expected SPI : ";
std::cin>>c;
if(c>=10)
{
    std::cout<<" Bro Not possible to score more than 10";
    //std::break;
}
else
std::cout<<" Total No. Of credit in last sem : ";
std::cin>>d;
}
void calculation1()
{
float m;
m=(((a*b)+(c*d))/(a+d));
std::cout<<"CPI WIll BE :"<<m;
}
void knowthissem2()
{
std::cout<<" Your Expected CPI : ";
std::cin>>c;
std::cout<<" Total No. Of credit in next sem : ";
std::cin>>d;
}
void calculation2()
{
float m;
m=(((c*(a+d))-(a*b))/d);
if(m<=10)
std::cout<<"SPI Should be :"<<m;
else
    std::cout<<" Buddy Not Possible to reach this CPI in this sem";
}
void sem()
{

std::cout<<" No. Of subjects are ";
int m;
std::cin>>m;
int n=0;
float s=0;
for(int i=0;i<m;i++)
    {
        int p,q;
        std::cout<<" Credit of Subject"<<(i+1)<<"  :  ";
        std::cin>>p;
        s=s+p;
        std::cout<<" Expected Grade Score for this subject from 4 to 10  : ";
        std::cin>>q;
        n=n+(p*q);
    }
    float z;
    z=n/s;
    if(z>10)
        std::cout<<" Buddy It is not possible to score more than 10 SPI";
    else
        std::cout<<"SPI Will Be : "<<z;
}
};
int main()
{
CPI p;
std::cout<<" Press 1 for calculate expected CPI till next semesters"<<"\n"<<"Press 2 to calculate SPI of next sem"<<"\n"<<"Press 3 to calculate required SPI to reach desired CPI"<<"\n";
std::cout<<"\n"<<" Your Choice is : ";

int z;
std::cin>>z;
switch(z)
{
case 1:
    p.input();
    p.knowthissem1();
    p.calculation1();
    break;
case 3:
    p.input();
    p.knowthissem2();
    p.calculation2();
    break;
case 2:
    p.sem();
    break;
default:
    std::cout<<" Kindly make a proper entry";
}
return 0;
}

