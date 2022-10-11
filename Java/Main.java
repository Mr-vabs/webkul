import java.io.*;
class Main {
    public static void main(String[] args) {
        System.out.println("It is a symbol like a diode.\n");
        System.out.print("Number of lines 'only odd number' :: ");
        int n = input();
        diode(n);
    }
    private static int input()
    {
        try
        {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
          int n = Integer.parseInt(br.readLine().trim());
          if(n%2==0||n<=1)
          {
              System.out.print("Enter only odd numbers and not 1 :: ");
              return input();
          }
          else
             return n;
        }
        catch(Exception e){
         System.out.print("Enter a valid odd Integer ::");
         return input();
        }
    }
    private static void diode(int n)
    {
        for(int i=1;i<n+3;i++)
        {
            for(int j=0;j<((n/2)+2);j++)
            {
                if(i<=((n/2)+2) && j<i)
                   System.out.print("@");
                else if(i>((n/2)+2)&&j<(2*((n/2)+2)-i))
                   System.out.print("@");
                else System.out.print(" ");
            }
            for(int j=0;j<n+2;j++)
            {
                if(i==((n/2)+2)) System.out.print("*");
                else System.out.print(" ");
            }
            for(int j=0;j<n;j++)
                if(i>1 && i<n+2) System.out.print("@");
            System.out.print("\n");
        }
        System.out.println("\n");
        System.out.print("\nNumber of lines 'only odd number' :: ");
        diode(input());
    }
}
