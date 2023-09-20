// playying with consturctors

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class hero{
    public :
    int a;
    int b;
    hero(){
        cout<<"Hello thanku for activating me";
    }
    // as you can see as asoon as another constructor is called previous one gets disabled
    hero(int a,int b){
        this->a=a;
        this->b=b;
    }
    // copy constructor
    hero(const hero&ramesh){
        this->a=ramesh.a;
        this->b=ramesh.b;
        }
};
int main()
{
   hero alom(12,13);
   cout<<alom.a<<" "<<alom.b;
   hero ramesh=alom;
   cout<<ramesh.a<<" "<<ramesh.b;

    return 0;
}
