#include&lt;iostream&gt;
#include&lt;string&gt;
using namespace std;
class Employee{
private:
int employee_no;
string name;
int phone_no[4];
int age;
float payment;

public:
Employee();
Employee(int x , string n , int c , int a , float p );
Employee(Employee &amp;value);
void set_information();
void print_information();
void update_information();
~Employee();

};

Employee::Employee(){

for(int i=0 ; i&lt;3 ; i++)

{
cout&lt;&lt;&quot;enter the value for employee number &quot;;
cin&gt;&gt;employee_no;
cout&lt;&lt;&quot;ENTER THE NAME OF EMPLOYEE IS &quot;;
cin&gt;&gt;name;
cout&lt;&lt;&quot;ENTER THE CONTACT OF EMPLOYEE &quot;;
cin&gt;&gt;phone_no[i];
cout&lt;&lt;&quot;ENTER THE AGE OF EMPLOYEE IS &quot;;
cin&gt;&gt;age;
cout&lt;&lt;&quot;ENTER THE PAYMENT OF EMPLOYEE IS &quot;;
cin&gt;&gt;payment;
cout&lt;&lt;endl;
}
}

Employee::Employee(int x , string n , int c , int a , float p)
{
employee_no = x;
name = &quot;n&quot;;
phone_no[4] = c;
age = a;
payment =p;

for(int i=0 ; i&lt;3 ; i++)
{

cout&lt;&lt;&quot;enter the value for employee number &quot;;
cin&gt;&gt;x;
cout&lt;&lt;&quot;ENTER THE NAME OF EMPLOYEE IS &quot;;
cin&gt;&gt;n;
cout&lt;&lt;&quot;ENTER THE CONTACT OF EMPLOYEE &quot;;
cin&gt;&gt;c;
cout&lt;&lt;&quot;ENTER THE AGE OF EMPLOYEE IS &quot;;
cin&gt;&gt;a;
cout&lt;&lt;&quot;ENTER THE PAYMENT OF EMPLOYEE IS &quot;;
cin&gt;&gt;p;

cout&lt;&lt;endl;

}

}

Employee::Employee(Employee &amp;value)
{
employee_no = value.employee_no;
employee_no= value.age;
employee_no= value.phone_no[4];
employee_no= value.payment;
}

void Employee::set_information(){

for(int i=0; i&lt;3; i++)
{

cout&lt;&lt;&quot;ENTER THE VALUE FOR EMPLOYEE NUMBER &quot;;
cin&gt;&gt;employee_no;
cout&lt;&lt;&quot;ENTER THE NAME OF EMPLOYEE IS &quot;;
cin&gt;&gt;name;
cout&lt;&lt;&quot;ENTER THE CONTACT OF EMPLOYEE &quot;;
cin&gt;&gt;phone_no[i];
cout&lt;&lt;&quot;ENTER THE AGE OF EMPLOYEE IS &quot;;
cin&gt;&gt;age;
cout&lt;&lt;&quot;ENTER THE PAYMENT OF EMPLOYEE IS &quot;;
cin&gt;&gt;payment;

cout&lt;&lt;endl;

}

}

void Employee::print_information(){

for(int i=0 ; i&lt;3 ; i++)
{

cout&lt;&lt;&quot;EMPLOYEE NUMBER IS ... &quot;&lt;&lt;employee_no&lt;&lt;endl;
cout&lt;&lt;&quot;EMPLOYEE NAME IS .... &quot;&lt;&lt;name&lt;&lt;endl;
cout&lt;&lt;&quot;CONTACT OF EMPLOYEE IS .. &quot;&lt;&lt;phone_no&lt;&lt;endl;
cout&lt;&lt;&quot;AGE OF EMPLOYEE IS ... &quot;&lt;&lt;age&lt;&lt;endl;
cout&lt;&lt;&quot;PAYMENT OF EMPLOYEE IS ....&quot;&lt;&lt;payment&lt;&lt;endl;

cout&lt;&lt;endl;
}
}

void Employee::update_information()
{
for(int i=0 ; i&lt;3 ; i++)
{
cout&lt;&lt;&quot;enter the value for employee number &quot;;
cin&gt;&gt;employee_no;
cout&lt;&lt;&quot;ENTER THE NAME OF EMPLOYEE IS &quot;;
cin&gt;&gt;name;
cout&lt;&lt;&quot;ENTER THE CONTACT OF EMPLOYEE &quot;;
cin&gt;&gt;phone_no[i];
cout&lt;&lt;&quot;ENTER THE AGE OF EMPLOYEE IS &quot;;
cin&gt;&gt;age;
cout&lt;&lt;&quot;ENTER THE PAYMENT OF EMPLOYEE IS &quot;;
cin&gt;&gt;payment;

cout&lt;&lt;endl;

}

}

Employee::~Employee()
{
cout&lt;&lt;&quot;destructor iss.......&quot;;
}
int main(){

Employee e1;
cout&lt;&lt;&quot;SET INFORMATION OF EMPLOYEE IS . ............ &quot;&lt;&lt;endl;
e1.set_information();
cout&lt;&lt;endl;
cout&lt;&lt;&quot;get INFORMATION OF EMPLOYEE IS . ............ &quot;&lt;&lt;endl;
e1.print_information();
cout&lt;&lt;endl;
cout&lt;&lt;&quot;update INFORMATION OF EMPLOYEE IS . ............ &quot;&lt;&lt;endl;
e1.update_information();
return 0;
}
