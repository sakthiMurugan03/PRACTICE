import java.math.BigInteger; //importing BigInteger class to represent exponentially large values

class Sample {
    public static int Factorial(int num) {
        BigInteger fact = BigInteger.ONE; 
        
        if(num == 0 || num == 1) { //base case
            return 1;
        }
        
        for(int i=num; i>=2; i--) { //traversal from number 
            fact = fact.multiply(BigInteger.valueOf(i)); //use of multiply func. for BigInteger product
        }
        System.out.print("\nFactorial of " + num + " is " + fact);
        
        return num;
    }
    
    public static void main(String args[]) {
        Factorial(25);
    }
}
