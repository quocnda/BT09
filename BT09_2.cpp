#include<iostream>
using namespace std;
int main()
{
   int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; //loi o cho chua het chuong trinh ma da xoa con tro p dan den con tro p2 cung bi thay doi va chi vao gia tri rac
*p2 = 100;
 cout << *p2;
 delete p2;

}