import java.util.*;

class Sample {
    public static int twoIndices(int arr[], int sum) {
        int size = arr.length;
        
        System.out.print("\nThe Indices are ");
        
        for(int i=0; i<size; i++) {
            for(int j=i+1; j<size; j++) {
                
                if((arr[i] + arr[j]) == sum) {
                    System.out.print(i + " and ");
                    System.out.print(j);
                }
            }
        }
        return sum;
    }
    
    public static void main(String args[]) {
        int arr[] = {2, 7, 11, 15};
        int sum = 9;
        
        twoIndices(arr, sum);
    }
}
