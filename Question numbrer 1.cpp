// Problem Statement
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 4 20
// Sample Output 1:
// 80
// Explanation Of Sample Input 1:
// Length of the rectangle is 4 and breadth is 20. 
// Hence the area of the rectangle is (length*breadth). 
// So the answer is 4*20=80.
// Sample Input 2:
// 2 10
// Sample Output 2:
// 20
// Explanation Of Sample Input 2:
// Length of the rectangle is 2 and breadth is 10. 
// Hence the area of the rectangle is (length*breadth). 
// So the answer is 2*10=20.

#include <bits/stdc++.h> 
class Rectangle {
  public:
  int length;
  int breadth;
public:
  int getArea(){
      return length*breadth;
  }
};