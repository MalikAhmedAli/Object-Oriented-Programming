#include<iostream>
using namespace std;
class Counter{

private:
int count;

public:

void initialize(int x)
{
count = x;

cout<<"THE VALUE OF COUNT IS \t"<<x<<endl;
}
void increment()
{
count++;
cout<<"INCREMENT THE COUNT VALUE IS \t

"<<count<<endl;

}
void decrement()
{

count--;
cout<<"DECREMENT THE COUNT VALUE IS

\t"<<count<<endl;
}

};

int main(){
Counter C;
C.initialize(12);
C.increment();
C.decrement();
return 0;
}
