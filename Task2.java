class Task2{
  //Missing value.
  public static void main(String[] args){
    int arr[]={1,2,3,4,6},len=arr.length,n=len+1;
    int tsum=n*(n+1)/2,esum=0;
    for(int num : arr){
      esum+=num;
    }
    int missing=tsum-esum;
    System.out.println(missing);
  }
}