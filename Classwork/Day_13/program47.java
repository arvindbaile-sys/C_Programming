import java.util.Scanner;

public class program47 {

    public static int Maximum(int iNo1, int iNo2, int iNo3) {
        if ((iNo1 >= iNo2) && (iNo1 >= iNo3)) {
            return iNo1;
        } else if ((iNo2 >= iNo1) && (iNo2 >= iNo3)) {
            return iNo2;
        } else {
            return iNo3;
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iValue3 = 0;
        int iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        System.out.println("Enter third number : ");
        iValue3 = sobj.nextInt();

        iResult = Maximum(iValue1, iValue2, iValue3);

        System.out.println("Maximum is : " + iResult);

        sobj.close();
    }
}
