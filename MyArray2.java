import java.util.Scanner;
import java.util.Arrays;
public class MyArray2{
  public static void main(String[] args){
    Scanner input=new Scanner(System.in);
    System.out.println("Enter the rows and columns of @ 2-D matrix.");
 int m=input.nextInt(),n=input.nextInt(),count=0;
    int[][] sparse=new int[m][n];
    System.out.println("Enter the elements.");
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
      sparse[i][j]=input.nextInt();
      if(sparse[i][j]!=0){
        count++;
       }
      }
    }
    int[][] tuple_3=new int[3][count];
     int k=0,c=0;
    for(int i=0;i<m;i++){
      k=0;
      for(int j=0;j<n;j++){
        if(sparse[i][j]!=0){
          tuple_3[k++][c]=i;
          tuple_3[k++][c]=j;
          tuple_3[k][c]=sparse[i][j];
          c++;
        }
      }
    }
    System.out.println("---------");
    for(int i=0;i<3;i++){
      for(int j=0;j<count;j++){
   System.out.print(tuple_3[i][j]+" ");
      }
      System.out.println();
    }
    input.close();
  }
}