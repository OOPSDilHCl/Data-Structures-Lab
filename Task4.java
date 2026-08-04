import java.util.Arrays;
public class Task4{
  public static void reverse(int arr[],int lt,int rt){
    for(int i=lt;i<(lt+rt)/2;i++){
      int temp=arr[i];
      arr[i]=arr[lt+rt-i-1];
      arr[lt+rt-i-1]=temp;
    }
  }
  public static void main(String[] args){
    int arr[]={1,2,3,4,5,6,7,8},k=20,len=arr.length;
    k=k%len;
    reverse(arr,0,k);
   reverse(arr,k,len);
   reverse(arr,0,len);
    System.out.println(Arrays.toString(arr));
  }
}