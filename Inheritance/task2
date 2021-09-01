#include<iostream>
#include<string>
using namespace std;
class Fruit
{
    protected:
    string taste;
    protected:
        Fruit();
        void tasted()
        {
            cout<<"ENTER THE TASTE OF FRUIT IS ";
            cin>>taste;
        }
        string printf()
        {
            return 0;
        }

    

};

class Apple: private Fruit
{
    private:
        string fruit_name;
        string fruit_color;
            public:
                Apple()
                {
                    fruit_name = "NULL";
                    fruit_color ="NULL";
                }
                
                void set_value()
                {
                    cout<<"WHAT IS THE NAME OF FRUIT ";
                    cin>>fruit_name;
                    cout<<"WHAT IS THE COLOR OF FRUIT ";
                    cin>>fruit_color;
                    Fruit::tasted();
                }

                void print_fruit_color_name()
                {
                    cout<<fruit_name<<" is "<<fruit_color<<" and its taste is "<<Fruit::printf()<<endl;
                }
};

class Pomegranate: private Fruit
{
    private:
        string fruit_name;
        string fruit_color;
            public:
                Pomegranate()
                {
                    fruit_name = "NULL";
                    fruit_color ="NULL";
                }
                void set_information()
                {
                    cout<<"WHAT IS THE NAME OF FRUIT ";
                    cin>>fruit_name;
                    cout<<"WHAT IS THE COLOR OF FRUIT ";
                    cin>>fruit_color;
                    Fruit::tasted();
                }

                void print_fruit_color_name()
                {   
                    cout<<fruit_name<<" is "<<fruit_color<<" and its taste is "<<Fruit::printf()<<endl;
                }
};

class Grapes: private Fruit 
{
    private:
        string fruit_name;
        string fruit_color;
            public:
                  Grapes()
                {
                    fruit_name = "NULL";
                    fruit_color ="NULL";
                }
                void set_info()
                {
                    cout<<"WHAT IS THE NAME OF FRUIT ";
                    cin>>fruit_name;
                    cout<<"WHAT IS THE COLOR OF FRUIT ";
                    cin>>fruit_color;
                  Fruit::tasted();
                }

                void print_fruit_color_name()
                {
                    cout<<fruit_name<<" is "<<fruit_color<<" and its taste is "<<Fruit::printf()<<endl;
                }
};
int main()
{   
    Apple A;
    Pomegranate P;
    Grapes G;

        cout<<"------------------SET THE INFORMATION OF FRUITS----------------"<<endl<<endl;
        A.set_value();
        P.set_information();
        G.set_info();
            cout<<endl;
                cout<<"-----------------GET THE INFORMATION OF FRUITS-------------"<<endl<<endl;
                A.print_fruit_color_name();
                P.print_fruit_color_name();
                G.print_fruit_color_name();
    return 0;
}
