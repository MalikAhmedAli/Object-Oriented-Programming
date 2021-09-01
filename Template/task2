#include<iostream>
using namespace std;

template <typename apnatype>
class Stack{
	public:
		void push()
		{
			apnatype x[10]={1,2,3,4,5,6,7,8,9,10};
			
			for(int i=0; i<10 ; i++)
			{
				
				cout<<"Value Of X At "<<i+1<<" = "<<x[i]<<endl;
				x[i]++;
			}
			cout<<"There Is No Space In The Stack :: "<<endl;
		}
		void pop()
		{
			apnatype x[10]={1,2,3,4,5,6,7,8,9,10};
			
			for(int i=10; i>0 ; i--)
			{
				--x[i];
				cout<<"Value Of X At "<<i<<" = "<<x[i]<<endl;
				
			}
			cout<<" Empty Stack"<<endl;
		}
	
};
int main()
{
	Stack <int>s;
	cout<<"============= Push The Digit ============="<<endl;
	s.push();
	cout<<endl;
	cout<<"============= Pop The Digit =============="<<endl;
	s.pop();
	return 0;
}
