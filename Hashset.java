import java.util.HashSet;

class Hashset{
    static boolean isSubset(int arr[], int arr1[]){
        HashSet<Integer> hs = new HashSet<>();
        for(int i =0; i<arr.length ;i++){
            if(!hs.contains(arr[i])){
                hs.add(arr[i]);
            }
        }
        for(int i =0; i<arr1.length;i++){
            if(!hs.contains(arr1[i]))
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        int arr[] = {3, 64, 32, 22, 32, 2} ;
        int arr1[] = {3, 4};
        if(isSubset(arr, arr1))
            System.out.println("It is a subset");
        else
            System.out.println("It is not");
    }
}