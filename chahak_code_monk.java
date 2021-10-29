class Codechef

{

              public static void main (String[] args) throws java.lang.Exception

              {

                           // your code goes here

                          

                           Scanner sc=new Scanner(System.in);

                           int T=sc.nextInt();

                           while(T>0)

                           {

                           //System.out.println("Enter size of array");

                           int n=sc.nextInt();//size of array

                           int k=sc.nextInt();// number u have to shift

                           int a[]=new int[n];

                           for(int i=0;i<n;i++)

                           {

                                         a[i]=sc.nextInt();//input elements of array

                           }

                          

                           righshift(a,a.length,k);

              //          System.out.println(Arrays.toString(a));

              for(int i=0;i<a.length;i++)

              {

                  System.out.print(a[i]+" ");

              }

                           T--;

}

              }

              static void righshift(int arr[],int n,int k)

              {

                           int temp[]=new int[k];

                           int count=0,last=n-1;

                           int i;

                           for(i=n-k;i<n;i++)

                           {

                                         temp[count]=arr[i];

                                         count++;

                           }

                           for(i=n-1-k;i>=0;i--)

                           {

                                         arr[last]=arr[i];

                                         last--;

                           }

                           for(i=0;i<k;i++)

                           {

                                         arr[i]=temp[i];

                           }

              }

 

}