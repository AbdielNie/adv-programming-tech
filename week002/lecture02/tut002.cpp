#include <iostream>

#define Pi 3.1415926

use namespace std;

struct person
{
    char name[50];
    int age;
    string dateOfBirth;
} s[1];    

int main()
{
/*
    Tut002
    from question2
 */

/* 
Question 2:
Write a C++ program to read in information from a person (name, age, date of birth) and display it back
to them. You may collect the information however you see fit.

Name: Gary Gygax
Age: 79
DOB: 27/07/1938

*/
    cout << "Enter information of person: " << endl;

    
        for(int i = 0; i < 1; ++i)
        {
            cout << "age: ";
            cin >> s[i].age;

            cout << "name: ";
            cin >> s[i].name;

            cout << "dateOfBirth: ";
            cin >> s[i].dateOfBirth;

            cout << endl;
        }

        cout << "Displaying Information: " << endl;

    
        for(int i = 0; i < 10; ++i)
        {
            cout << "Name: " << s[i].name << endl;
            cout << "age: " << s[i].age << endl;
            cout << "dateOfBirth: " << s[i].dateOfBirth << endl;
        }

        




/*
Question 3:
Write a series of C++ programs (or one single program) to output the following star patterns. You should
use basic control structures, such as if, while and/or for statements to output these patterns, rather
than using fully expanded output statements. 
 */
/*
Q3a:
*
**
***
****
*****
******
 */
    int i,j;
        for (int i = 1; i <= 6; i++)
        {
            for(int j = 1;j <= i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }


/*
Q3b:
     *
    **
   ***
  ****
 *****
******
 */
    int i,j,k;
	    for(i = 1;i <= 6;i++ )
        {  
		    for(j = 1;j <= 6-i;j++)
            {  
			    cout<<" "; 
		    }
		    for(k = 1;k <= i;k++)
            { 
			    cout<<"*";
		    }
		    cout<<endl; 
	    }
/*
Q3c:
        *
       ***
      *****
     *******
    *********
   ***********
 */
    int i,j,k;
	    for(i = 1;i <= 6;i++ )
        {  
		    for(j = 1;j <= 6-i;j++)
            {  
			    cout<<" "; 
		    }
		    for(k = 1;k <= i*2-1;k++)
            { 
			    cout<<"*";
		    }
		    cout<<endl; 
	    }

/*
Q3d:

        *
       ***
      *****
     *******
    *********
   ***********
    *********
     *******
      *****
       ***
        *
 */
    int i,j,k;
	
	    for(i = 1;i <= 6;i++ )
        {  
		    for(j = 1;j <= 6-i;j++)
            {  
			    cout<<" "; 
		    }
		    for(k = 1;k <= i*2-1;k++)
            { 
			    cout<<"*";
		    }
		    cout<<endl; 
	    }
	    for (i = 6 - 2; i >= 0; i--)
	    {
		    for (j = 1; j < 6 - i; j++)
		    {
			    cout<<" "; 
		    }
		    for (j = 0; j < 2 * i + 1; j++)
		    {
			    cout<<"*";
		    }
		    cout<<endl;
	    }   
/*Q4:
Write a C++ program, that reads from the user a radius for a circle and prints out the area of the circle
This program should:
(a) Read in the radius as a float or double
(b) Use a function to compute the area of the circle. You should define the parameters and return value
of the function as you see fit. You should use a #define for the value of Pi (π).
(c) Use a function prototype to declare the function.

 */

    float radius, area;
			
        cout<<" Input the radius of a circle : ";
    	cin>>radius;
	
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        	
        cout << endl;


/*
Q6：
. Write a C++ program that does the following in order:
(a) reads in 10 integers
(b) stores the integers in an array
(c) sums the array
(d) prints out the result.
 */
    int numbers[10], sum = 0;
    cout << "Enter 10 numbers: ";
    
    
    for (int i = 0; i < 10; ++i) 
    {
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    cout << "Sum = " << sum << endl;  
    
    



}
