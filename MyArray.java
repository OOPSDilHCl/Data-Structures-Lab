import java.util.Scanner;
import java.util.Arrays;
public class MyArray{
  public static void main(String[] args){
    Scanner input=new Scanner(System.in);
   //Task 1----→
    System.out.println("Enter the size of first array");
    int size1=input.nextInt();
    int[] arr1=new int[size1];
    for(int i=0;i<size1;i++){
      arr1[i]=input.nextInt();
    }
    System.out.println("Enter the size of second array");
    int size2=input.nextInt();
    int[] arr2=new int[size2];
    for(int i=0;i<size2;i++){
      arr2[i]=input.nextInt();
    }
    int[] arr=new int[size1+size2+1];
    for(int i=0;i<size1;i++){
      arr[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
      arr[i+size1]=arr2[i];
    }
    int size=size1+size2;
    System.out.println("Your combined array-------→");
    System.out.println(Arrays.toString(Arrays.copyOfRange(arr,0,size-1)));
    System.out.println("Enter 1 to search an element in combined array, 2 to insert an element and 3 to delete an element.");
    int n=input.nextInt();
  //Task 2----→
    switch(n){
      case 1:{
        System.out.println("Enter the target element:");
        int key=input.nextInt(),flag=0;
        for(int i=0;i<size;i++){
          if(arr[i]==key){
            System.out.println("Key found at index:"+i);
            flag=1;
            break;
          }
        }
          if(flag==0)
          System.out.println("Key not found");
      }
      break;
      case 2:{
        System.out.println("Enter the element");
        int ele=input.nextInt();
        System.out.println("Enter the index");
        int index=input.nextInt();
        System.out.println("Enter 1 if insert in between or start, 2 if at end");
        int k=input.nextInt();
        if(k==1)
        {
        for(int i=size;i>index;i--){
          arr[i]=arr[i-1];
        }
        arr[index]=ele;
        size++;
       }
       else {
         arr[size++]=ele;
       }
       System.out.println(Arrays.toString(arr));
      }
      break;
      case 3:{
        System.out.println("Enter the index to delete");
        int index=input.nextInt();
        System.out.println("Enter 1 if delete in between or start, 2 if at end");
        int k=input.nextInt();
        if(k==1){
          for(int i=index;i<size;i++){
            arr[i]=arr[i+1];
          }
        }
        else size--;
        System.out.println(Arrays.toString(Arrays.copyOfRange(arr,0,size-2)));
      }
    break;
    }
    input.close();
  }
}