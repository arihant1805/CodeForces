import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        while(T-->0){
            int n=sc.nextInt();
            int x=0;
            String s=sc.next();
            int a[]=new int[26];
            for(int i=0;i<n;i++){
                char c=s.charAt(i);
                a[c-'A']+=1;
                if(a[c-'A']==(c-'A')+1){
                    x++;
                }
            }
            System.out.println(x);
        }
    }
}
