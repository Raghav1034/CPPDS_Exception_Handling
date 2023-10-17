#include <iostream>
using namespace std;

int main()
{
int i;
cout<<"Enter i ";
cin>>i;

try{
if (i>20)
{
    cout<<"Entered number is more than 20"<<endl;
}
else if(i>15){
    throw(i);
}
else
{
    throw("NUmber less than 15");
}
cout<<"code which wont generate an exception";
//Any code here will not be executed if an exception occurs
}


catch(int x)
{
    cout<<"Exception occured for i = "<<i<<endl;

}
catch(char *message)
{
    cout<<message;
}
catch(...)
{
    cout<<"Default exception handling ";
}

}