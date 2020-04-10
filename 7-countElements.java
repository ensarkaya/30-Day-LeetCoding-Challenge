/**
**@author: Ensar Kaya
*/
class Solution {
    public int countElements(int[] arr) {     
        int cnt = 0;
        HashSet<Integer> h = new HashSet<Integer>();
        for(int i=0; i<arr.length;i++){
            h.add(arr[i]);
        }
        for(int i=0; i<arr.length;i++){
            if(h.contains(arr[i]+1))
                cnt++;
        }
        return cnt;
    }
}
