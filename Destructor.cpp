// playying with consturctors

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class hero{
    public :
    int a;
    int b;
    hero(){
        cout<<"Hello thanku for activating me"<<endl;
    }
    // as you can see as asoon as another constructor is called previous one gets disabled
   ~hero(){
       cout<<"D is called"<<endl;
   }
   void display(){
       cout<<"Hello world"<<endl;
   }
};
int main()
{
  hero alom;
  alom.display();
  hero *alom1=new hero();
  delete(alom1);
//   Another important thing is that for a dynamically created object you have to  manually use delete keyword to free memory after use

    return 0;
}
