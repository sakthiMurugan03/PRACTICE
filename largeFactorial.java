import java.util.*;
import java.math.BigInteger;

class Sample {
    
    public static int Factorial(int num) {
        BigInteger fact = BigInteger.ONE;
        
        if(num == 0 || num == 1) {
            return 1;
        }
        
        for(int i=num; i>=2; i--) {
            fact = fact.multiply(BigInteger.valueOf(i));
        }
        
        System.out.print("\nFactorial of entered number is: " + fact);
        
        return -1;
    }
    
    public static void main(String args[]) {
        Factorial(150);
    }
}
