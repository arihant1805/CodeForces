import java.util.Scanner;
import java.util.HashMap;
public class sol2{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int q=sc.nextInt();
        while(q--!=0){
          int I=0;
          int f=0;
          int x=sc.nextInt();
          int a[]=new int[x];
          HashMap<Integer,Integer> set=new HashMap<>();
          for(int i=0;i<x;i++){
            int y=sc.nextInt();
            if(set.containsKey(y)){
              if(f==0&&set.get(y)==1){
                a[i]=2;
                f=1;
              }else if(f==1&&set.get(y)==1){
                I=1;
                a[i]=3;
              }
              set.put(y,set.get(y)+1);
            }else{
              set.put(y,1);
            }
          }
          
          if(I==1){ 
            for(int i=0;i<x;i++){
            if(a[i]==0){
              System.out.print("1 ");
            }else{
              System.out.print(a[i]+" ");
            }
          }
          System.out.println();
        }else{
          System.out.println("-1");
        }
        }    
    }
}
