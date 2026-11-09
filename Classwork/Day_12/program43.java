import java.util.Scanner;

public class program43
{
    
    public static int minimum(int iNo1, int iNo2) 
    {
        if (iNo1 < iNo2) {
            return iNo1;
        } else {
            return iNo2;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();
            
        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        iResult = minimum(iValue1, iValue2);

        System.out.println("Minimum number is : " + iResult);
        
        scanner.close();
    }
}
