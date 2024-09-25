import java.util.*;

class FindNum {
    static void missingNum() {
        int size;
        int actualSum = 0, totalSum = 0, res;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        size = sc.nextInt();
        
        int arr[] = new int[size];
        
        System.out.print("Enter the array elements: ");
        for(int i=0; i<size; i++) {
            arr[i] = sc.nextInt();
        }
    
        actualSum = (size * (size + 1)) / 2;
        
        for(int i=0; i<size; i++) {
            totalSum += arr[i];
        }
        res = actualSum - totalSum;
        System.out.print("\nMissing number is: " + res);
    }
    
    public static void main(String args[]) {
        missingNum();
    }
}
