public class ReverseStr {

    public static void main (String[] lang)
    {
        System.out.print("Hello World\n"); 
        String sample1 = "Case1";
        String sample2 = "Another Case"; 
        
        //String Reverse;

        System.out.print(iterativeReverse(sample1) + "\n");
        System.out.print(iterativeReverse(sample2) + "\n");

        RecursiveReverse((sample1));
    }

    public static String iterativeReverse(String word)
    {
        String ReverseSample1 = new String(); 
        for (int i = word.length() - 1; i >= 0; i--)
        {
            ReverseSample1 += word.charAt(i); 
        }
        return ReverseSample1; 
    }

    public static void RecursiveReverse(String word)
    {
        if (word == null|| word.length() <= 1)
        {
            System.out.print(word + "\n"); 
        }        
        else 
        {
            System.out.print(word.charAt(word.length() - 1));
            RecursiveReverse(word.substring(0, word.length() - 1));
        }
    }

}