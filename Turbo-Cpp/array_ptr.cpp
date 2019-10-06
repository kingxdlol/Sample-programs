#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int arr[5] = {30,40,50,60,70};
  int *ptr=arr;
  cout << *ptr++;	//will output 30 and ptr will point to arr[1] element
  cout << (*ptr)++;	//will output 40 and then increament arr[1] by 1(arr[1]=41)
  cout << *ptr;		//will output 41 as ptr still point to arr[1] element
  cout << *(++ptr);	//it will first add 1 to arr[1] & then output it(output is 42)
  cout << *ptr+1;	//will output 30 and ptr will point to arr[1] element
  cout << *ptr;		//will output 30 and ptr will point to arr[1] element
  cout << ++*ptr++;	//will output 30 and ptr will point to arr[1] element
  cout << *ptr;		//will output 30 and ptr will point to arr[1] element
  cout << (++*ptr)++;	//will output 30 and ptr will point to arr[1] element
}
