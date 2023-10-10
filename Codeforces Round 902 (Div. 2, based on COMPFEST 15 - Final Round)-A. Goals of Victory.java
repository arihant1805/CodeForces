import java.util.Scanner;
public class Solution{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        for(int q=0;q<x;q++){
            int n=sc.nextInt();
            int sum=0;
            for(int i=0;i<n-1;i++){
                sum+=sc.nextInt();  
            }
            System.out.println(-sum);
        }
        
    }
}
