/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    //looks for input from user
    //figures out how many numbers they would like to input
    int user = 0;
    cin >> user;
    while(user--)
    {
        int input = 0;
        //counter for position you are currently
        int count = 0;
        //top and bottom numbers
        int top = 1;
        int bot = 1;
        cin >> input;
        while(count < input)
        {
            bot++,count++;
            //checks if count equals position your at
            if(count == input)
            {
                break;
            }
            
            //keeps loop going if havent found number yet
            while(bot > 1 && count < input)
            {
                top++; 
                bot--;
                count++;
            }
            if(count == input) 
            {
                break;
            }
            
            top++;
            count++;
            
            if( count == input) 
            {
                break;
            }
            
            //keeps loop going while count is still lower than input and if top num bigger than 1
            while(top > 1 && count < input)
            {
                top--;
                bot++; 
                count++;
            }
            
        }
        cout << "TERM " << input << " " <<  "IS " << top << "/" << bot << "\n";
    }
    return 0;
}



