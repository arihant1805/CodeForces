import java.util.*;
public class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        while(T-->0){
            String s=sc.next();
            int o=0;
            int z=0;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)=='0'){
                    z++;
                }else{
                    o++;
                }
            }
            String t="";
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)=='0'){
                    if(o-->0){
                        t+="1";
                    }else{
                        break;
                    }
                }else{
                    if(z-->0){
                        t+="0";
                    }else{
                        break;
                    }
                }
                
            }
            System.out.println(s.length()-t.length());
        }
    }
}
