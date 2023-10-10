import java.util.Scanner;
public class Solution{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int x=0;
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }  
        for(int i=0;i<n;i++){
            if(arr[i]>=arr[k-1]&&arr[i]>0){
                x++;
            }
        }
        System.out.println(x);   
    }
}
