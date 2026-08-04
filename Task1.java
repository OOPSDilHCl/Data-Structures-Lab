import java.util.Set;
import java.util.HashSet;
class Task1{
  public static void main(String args[]){
    int[] arr={1,2,3,2,4,5,1,6,6};
    Set<Integer> seen=new HashSet<>();
    Set<Integer> duplicates=new HashSet<>();
    for(int num:arr){
      if(!seen.add(num)){
        duplicates.add(num);
      }
    }
    System.out.println(duplicates);
  }
}