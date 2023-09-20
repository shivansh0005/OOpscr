

// Problem Statement
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// Afzal
// 67
// Sample Output 1:
// The name of the person is Afzal and the age is 67.
// Sample Input 2:
// Ali
// 30
// Sample Output 2:
// The name of the person is Ali and the age is 30.
// Explanation Of Sample Input 1:
// The input name is Ali and the input age is 30 which is printed in the specified format.
#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

   private:
   int age;
   string name;
   public:
   void setValue(string name,int age){
       this->name=name;
       this->age=age;
   }
  
void GetValue(){
     cout<<"The name of the person is "<<this->name<<" and the age is "<<this->age<<".";
}


};

int main() {
Person a;
string name;
int age;
cin>>name;
cin>>age;
a.setValue(name,  age);
a.GetValue();

    return 0;
}