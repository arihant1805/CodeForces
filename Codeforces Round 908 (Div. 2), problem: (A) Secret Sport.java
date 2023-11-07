import java.util.Scanner;
public class sol2{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int q=sc.nextInt();
        while(q--!=0){
          int x=sc.nextInt();
          String s=sc.next();
          int A=0;
          int B=0;
          for(int i=0;i<x;i++){
            if(s.charAt(i)=='A'){
              A++;
            }
            if(s.charAt(i)=='B'){
              B++;
            }
          }
          int aw=0;
          for(int X=1;X<=A;X++){
            if(A%X!=0){
              continue;
            }
            int y=A/X;
            int Y=0;
            int a=0,b=0;
            int c=1;
            for(int i=0;i<x;i++){
              if(s.charAt(i)=='A'){
                a++;
              }else{
                b++;
              }
              if(a==X){
              a=0;
              b=0;
              Y++;
            }
            if(Y==y){
              c=i;
              break;
            }
            }
            if(Y==y&&c==x-1){
              aw=1;
              break;
            }
          } 
          if(aw==1){
            System.out.println("A");
          }else{
            System.out.println("B");
          }
          
        }    
    }
}
