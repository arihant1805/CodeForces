import java.util.Scanner;
public class sol2{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int q=sc.nextInt();
        while(q--!=0){
          int x,y,k;
          x=sc.nextInt();
          y=sc.nextInt();
          k=sc.nextInt();
          if(x==0&&y==0){
            System.out.println("0");
          }
          else if(x==y){
            System.out.println(x);
          }
          else if(x<y){
            if(x+k>=y){
              System.out.println(y);
            }
            else{
            System.out.println(y+y-k-x);}
          }else{
            System.out.println(x);
          } 
        }    
    }
}
