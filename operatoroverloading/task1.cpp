#include<iostream>
using namespace std;
class Container{
	private:
		int weight;
		
		public:
			Container(int weight1)
			{
				weight= weight1;
			}
			
			Container operator+(Container C)
			{
				int sum;
				sum = weight+C.weight;
					return sum;
			}
			
			void print()
			{
			cout<<"SUM OF CONTAINER 1 AND CONTAINER 2 IS = "<<weight<<endl;
			}
};

int main()
{
	Container C(50);
	Container C1(100);
	Container ADD(0);
	ADD=C+C1;
	ADD.print();	
	return 0;
}
