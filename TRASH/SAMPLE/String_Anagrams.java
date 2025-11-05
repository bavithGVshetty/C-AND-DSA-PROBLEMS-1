package SAMPLE;
import java.text.ListFormat.Style;
import java.util.Scanner;

// rules
// Two string should have same lenghth
public class String_Anagrams{
    static boolean areAnagrams(String s1,String s2){
        if(s1.length()!=s2.length()){
            return false;
        }
        int[] freq=new int[26];

        for(int i=0;i<s1.length();i++){
            freq[s1.charAt(i)-'a']++; //b-a=1=++
            freq[s2.charAt(i)-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }

    return true;
    
    
    }
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);

        String s1=sc.nextLine();
        String s2=sc.nextLine();

        if(areAnagrams(s1, s2)){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
       
        sc.close();


       
    }
}