import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        String str3 = sc.nextLine();
        
        String arr1[] = str1.split(" ");
        String arr2[] = str2.split(" ");
        String arr3[] = str3.split(" ");
        
        Set<String> frag1 = fragments(arr1);
        Set<String> frag2 = fragments(arr2);
        Set<String> frag3 = fragments(arr3);
        
        frag1.retainAll(frag2);
        frag1.retainAll(frag3);
        
        String common = frag1.iterator().next();
        
        String res1 = removeCons(str1, common);
        String res2 = removeCons(str2, common);
        String res3 = removeCons(str3, common);
        
        System.out.println(res1);
        System.out.println(res2);
        System.out.println(res3);
        System.out.println(common);
    }
    
    private static Set<String> fragments(String arr[]) {
        Set<String> set = new HashSet<>();
        for(int i=0; i<=arr.length-3; i++) {
            set.add(arr[i] + " " + arr[i+1] + " " + arr[i+2]);
        }
        return set;
    }
    
    private static String removeCons(String sentence, String common) {
        return sentence.replaceFirst("\\b" + common + "\\b", "").replaceAll(" +", " ").trim();
    }
}
