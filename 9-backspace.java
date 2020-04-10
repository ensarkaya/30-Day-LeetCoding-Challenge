/**
**@author: Ensar Kaya
*/
import java.util.ArrayList;
import java.util.List;
class Solution {
    public boolean backspaceCompare(String S, String T) {
        int size1=S.length();
        int size2=T.length();
        //System.out.println(size1);System.out.println(size2);
        int cnt=0;
        int cnt2=0;
        List<Character> temp1 = new ArrayList<Character>();
        List<Character> temp2 = new ArrayList<Character>();
        for(int i = size1-1; i>=0;i--){
            if(S.charAt(i) != '#'){
                if(cnt == 0)
                    temp1.add(0,S.charAt(i));
                else if(cnt>0)   
                    cnt--;
                
            }
            else{
                cnt++;
            }
        }
        for(int j = size2-1; j>=0;j--){
            if(T.charAt(j) != '#'){
                if(cnt2 == 0)
                    temp2.add(0,T.charAt(j));
                else if(cnt2>0)  
                    cnt2--;
                
            }
            else{
                cnt2++;
            }
        }
        System.out.println(temp1);
        System.out.println(temp2);
        if(temp1.size() != temp2.size())
            return false;
        for(int k=0;k<temp1.size();k++){
            if(temp1.get(k)!=temp2.get(k))
                return false;
        }
        return true;
    }
}
