import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        while(T-->0){
           HashSet<Integer> A = new HashSet<>();
           HashSet<Integer> B=new HashSet<>();
           int n=sc.nextInt();
           n--;
           int[] arr=new int[n-1];
           for(int i=0;i<2*n;i++){
            int x=sc.nextInt();
            if(A.contains(x)){
                B.add(x);
            }
            A.add(x);
           }
           int count=n+1-B.size();
           count=count/2+count%2;
           System.out.println(count);
        }
    }
}
