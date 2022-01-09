package recursion;

// print name using recursion but using backtracking
public class printName {
    static int i=1;
    private static void print(int n,int i){
        if(i>n){
            return;
        }
        print(n,i+1);
        System.out.println(i);
    }

    public static void main(String[] args) {
        print(8,i);
    }
}
/*
 RECURSION TREE
  print(n,i)
           \
            \
            print(n,i+1)
                       \
                        \
                        print(n,i+1)
                                    .
                                    .
                                    i>n
                                     |
                                   return

 */

