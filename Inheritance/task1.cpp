#include<iostream>
#include<string>
using namespace std;
class Pen
{
    protected:
        string brand_name;
     protected:
        Pen()
        {
            brand_name="NULL";
        }
        
        void set()
        {
            cout<<"WHAT IS THE BRAND NAME OF COLOR IS ";
            cin>>brand_name;
        }
        string print()
        {
            return brand_name;
        }

        ~Pen()
        {
            cout<<"CALL THE DESTRUCTOR "<<endl;
        }
};

class Color: protected Pen
{
    private:
        string name;
     public:
        Color()
        {
            name =  "NULL";
        }

        void set_value()
        {
            cout<<"WHAT IS THE NAME OF COLOUR ";
            cin>>name;
            Pen::set();
        }

        void print()
        {
            cout<<"THE BRAND NAME OF PEN IS "<<Pen::print()<<" AND ITS COLOR IS "<<name<<endl;
        }
        ~Color()
        {
            cout<<"DESTRUCTOR CALL "<<endl;
        }
};
int main()
{
    Color C;
    cout<<"-------------------SET THE INFORMATION ------------------"<<endl<<endl;
    C.set_value();
    cout<<endl;
    cout<<"-------------------GET THE INFORMATION -----------------"<<endl;
    C.print();
    return 0;
}
