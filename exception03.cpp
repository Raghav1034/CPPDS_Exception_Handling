
#include<iostream>

using namespace std;


main()
{
    int i,j;
    cout << "Enter i : ";
    cin>>i;
    cout<<"Enter j : ";
    cin>>j;

    try{
        if (j==0)
        {
            throw runtime_error("Division by 0");
        }
        int x = i/j;
        cout<<"x = " << x<<endl;

    }
    catch(exception &e)
    {
        cerr <<"Exception : " << e.what()<<endl;
    }
}





class test 
{
    test()
    {
        cout<<"default constructor called" << endl;
    }
    ~test()
    {
        cout<<"default destructor called" << endl;
    }
}

main()
{    

    try
    {
        test t1;
        throw 10;

    }
    catch(int x)
    {
       
    }
    
    

}