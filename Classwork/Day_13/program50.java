import java.util.Scanner;

public class program50 {

    public static int Minimum(int iNo1, int iNo2, int iNo3, int iNo4) {
        if ((iNo1 <= iNo2) && (iNo1 <= iNo3) && (iNo1 <= iNo4)) {
            return iNo1;
        } else if ((iNo2 <= iNo1) && (iNo2 <= iNo3) && (iNo2 <= iNo4)) {
            return iNo2;
        } else if ((iNo3 <= iNo1) && (iNo3 <= iNo2) && (iNo3 <= iNo4)) {
            return iNo3;
        } else {
            return iNo4;
        }
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iValue3 = 0, iValue4 = 0;
        int iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        System.out.println("Enter third number : ");
        iValue3 = sobj.nextInt();

        System.out.println("Enter fourth number : ");
        iValue4 = sobj.nextInt();

        iResult = Minimum(iValue1, iValue2, iValue3, iValue4);

        System.out.println("Minimum is : " + iResult);

        sobj.close();
    }
}
