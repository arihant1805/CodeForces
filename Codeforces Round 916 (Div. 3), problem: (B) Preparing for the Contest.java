import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        while(T-->0){
            int n=sc.nextInt(),k=sc.nextInt();
            for(int i=n-k;i>0;i--){
                System.out.print(i+" ");
            }
            for(int i=n-k+1;i<=n;i++){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}
