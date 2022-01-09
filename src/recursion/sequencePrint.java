package recursion;
import java.util.ArrayList;

public class sequencePrint {

    protected  static void printSequence(int[] arr,int i,ArrayList<Integer> list){
        if(i>=arr.length){
            System.out.println(list);
            return;
        }
        list.add(arr[i]);
        printSequence(arr,i+1,list);
        int n = list.size();
        list.remove(n-1);
        printSequence(arr,i+1,list);
    }


    public static void main(String[] args) {
        int[] arr = {1,2};
        ArrayList<Integer> list =new ArrayList<>();
        printSequence(arr,0,list);
    }
}
