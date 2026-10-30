/*
    Step 1 :    Undesrtand the problem statement
    Step 2 :    Write the algithm
    Step 3 :    Decide the programming language
    Step 4 :    Write the program
    Step 5 :    Test the program
*/

///////////////////////////////////////////////////
//
//  Step 1 : Undesrtand the problem statement
//           User is going to enter any 2 integers
//           And we have to perfom addition
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 :    Write the algithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perform the addition and store into Ans
        Display the result from Ans
    END
*/
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//    Step 3 :    Decide the programming language
//                We select java programming
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//    Step 4 :    Write the program
//
///////////////////////////////////////////////////

import java.util.Scanner;

///////////////////////////////////////////////////
//
//  Function Name   :   Addition 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Performs addition
//  Date            :   04/10/2026
//  Author          :   Arvind Madhav Baile
//
///////////////////////////////////////////////////

public class Addition_Function_With_Documentation
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number :");
        iValue2 = sobj.nextInt();

        iResult = Addition(iValue1,iValue2);

        System.out.println("Addition is : "+iResult);
    }

}