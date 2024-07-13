import java.util.*;
import java.math.BigInteger; //import BigInteger math module

class Factorial {
    
    public static void factorial(int num) {
        BigInteger fact = BigInteger.ONE; //using BigInteger data type to store larger values
    
        for(int i=num; i>=2; i--) {
            fact = fact.multiply(BigInteger.valueOf(i));
        }
        System.out.print("\nFactorial of entered number is: " + fact);
    }
    
    
    public static void main(String args[]) {
        factorial(150);
    }
}
