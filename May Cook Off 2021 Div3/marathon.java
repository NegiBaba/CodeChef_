/*input
3
1 1 1 2 3
10 1 1 2 3
10 3 1 2 3
*/
import java.util.*;

public class marathon {

    public static void main(String[] args){

        Scanner get = new Scanner(System.in);

        int tesetcases = get.nextInt();

        while(tesetcases-- > 0) {
            int D, d, a, b, c;
            D = get.nextInt();
            d = get.nextInt();
            a = get.nextInt();
            b = get.nextInt();
            c = get.nextInt();
            


            if(D * d >= 42)
                System.out.println(c);
            else if(D * d >= 21) 
                System.out.println(b);
            else if(D * d >= 10) 
                System.out.println(a);
            else
                System.out.println(0);
        }
    }
}