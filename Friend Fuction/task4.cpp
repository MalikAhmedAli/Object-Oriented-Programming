#include<iostream>
using namespace std;
class Location{
public:
void set_location()
{
cout<<"I'M IN ISLAMABAD:: \t"<<endl;
}
friend class Display;

};

class Display{
public:
void get_loction(Location l)
{
l.set_location();
}

};
int main()
{
Location L;
Display D;
D.get_loction(L);
return 0;
}
