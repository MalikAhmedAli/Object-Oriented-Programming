#include<iostream>
using namespace std;


template<typename newtype>
class test{
    public:
    newtype array[10];
    int index;
    
    test(){index=0;}
    void push(newtype a){
        if(index<9)
        array[index++]=a;
        else
        cout<<"Stack is Full\n";
    }

    newtype pop(){
        if(index==0){
            cout<<"Stack is empty\n";
            //type casting of 0 to newtype 
            return (newtype)0;
        }
        else
        {   //index--;
            //cout<<index;
            //return array[index];
            //OR
            return array[--index];
        }
        
    }
};

int main(int argc, char const *argv[])
{
    test<double> obj;
    obj.push(10);
    obj.push(20);
    cout<<obj.pop()<<endl;
    cout<<obj.pop()<<endl;
    cout<<obj.pop()<<endl;
    cout<<obj.pop()<<endl;
    
    return 0;
}
