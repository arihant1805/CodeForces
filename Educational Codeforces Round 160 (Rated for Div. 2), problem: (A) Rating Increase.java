import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        while(T-->0){
            String ab=sc.next();
            int var=0;
            for(int i=1;i<ab.length();i++){
                String a=ab.substring(0,i);
                String b=ab.substring(i);
                int A=Integer.parseInt(a);
                int B=Integer.parseInt(b);
                if(a.charAt(0)!='0'&&b.charAt(0)!='0'&&B>A){
                    System.out.println(A+" "+B);
                    var=1;
                    break;
                }
            }
            if(var==0){
                System.out.println("-1");
            }
        }
    }
}
