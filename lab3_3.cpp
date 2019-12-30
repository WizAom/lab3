#include<iostream>
using namespace std;
main()
{
	float a=6,b,c=0;
    while(a<=19){
        c=c+(1/a);
    	a++;
    }
    cout << c;
    return 0;
}