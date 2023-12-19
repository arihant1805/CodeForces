import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        while(T-->0){
            int n=sc.nextInt(),k=sc.nextInt();
            int A[]=new int[n];
            int B[]=new int[n];
            for(int i=0;i<n;i++){
                A[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++){
                B[i]=sc.nextInt();
            }
            int sum=0;
            int mx=0;
            int ans=0;
            for(int i=0;i<Math.min(n,k);i++){
                sum+=A[i];
                mx=Math.max(mx,B[i]);
                ans=Math.max(ans,(sum+(k-i-1)*mx));
            }
            System.out.println(ans);
        }
    }
}
