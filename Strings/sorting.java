class sorting
{
    public static void main(String[] args) {
        
        int arr[] = {5,30,10,10,11,15,11,2,20,20,30,5,3,45,45};
        
        int arr1[] = new int[3];

        for(int i=0; i<arr.length; i++)
        {
              for(int j=i+1; j<arr.length; j++)
               {
                  if(arr[i]==arr[j])
                   {
                    arr[i]=-1;
                    arr[j]=-1;
                   }                    
               }    
        }
        
        for(int i=0,k=0;i<arr.length;i++){
            if(arr[i]!=-1){
                arr1[k]=arr[i];
            

                System.out.print(arr1[k]+" ");
                k++;
               }
        }
System.out.println();
        for(int i=0; i<arr1.length; i++)
        {
            // System.err.println(arr1[i]);
            // System.out.println(arr1[i]%(arr1[i]/2));

            // System.out.println(arr1[i]%(arr1[i]/2));

              if(arr1[i]%(arr1[i]/2)  == 0)
                {

                    System.out.println("Prime Number : " + arr1[i]); 
                }

            
            
            
        }

    }
}