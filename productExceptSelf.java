import java.util.*;

class ProductExceptSelf {
    static public void result() {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.print("\nEnter number of array elements: ");
        size = sc.nextInt();
        
        int arr[] = new int[size];
        
        System.out.print("\nEnter the array elements: ");
        for(int i=0; i<size; i++) {
            arr[i] = sc.nextInt();
        }
        
        int leftProduct[] = new int[arr.length];
        leftProduct[0] = 1;
        for(int i=1; i<arr.length; i++) {
            leftProduct[i] = leftProduct[i-1] * arr[i-1];
        }
        
        int rightProduct[] = new int[arr.length];
        rightProduct[arr.length - 1] = 1;
        for(int i=arr.length-2; i>-1; i--) {
            rightProduct[i] = rightProduct[i+1] * arr[i+1];
        }
        
        System.out.print("\n\nThe required array is: ");
        int answer[] = new int[arr.length];
        for(int i=0; i<arr.length; i++) {
            answer[i] = leftProduct[i] * rightProduct[i];
            System.out.print(answer[i] + " ");
        }
    }
    
    public static void main(String args[]) {
        result();
    }
}
