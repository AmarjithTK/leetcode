class Solution {
    public boolean isValid(String s) {

        Stack<Character> stark = new Stack<>();


        for(char sa:s.toCharArray()){

            if(sa=='[' | sa=='{' | sa=='('){
                stark.push(sa);
            }else{
                if(stark.isEmpty())return false;

                char a = stark.pop();

                if(sa==']' && a!='[') return false;
                if(sa=='}' && a!='{') return false;
                if(sa==')' && a!='(') return false;


            }


        }

        return stark.isEmpty();



        
    }
}