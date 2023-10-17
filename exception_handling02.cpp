#include <iostream>
using namespace std;

 main()
{

try{
{
funct(NULL,0);
}
catch(char *ptr)
{

}

catch(int i)
{
   

}

catch(...)
{
     cout<<"Exception from funct()";
}

void funct(char *str;int x)
{
    if(str==NULL)
    throw(str);
    if(x == 0)
    throw(x);
}
}