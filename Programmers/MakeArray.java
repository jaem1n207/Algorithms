import java.util.ArrayList;
import java.util.Arrays;

class MakeArray {
    public static void main(String[] args) {
    	MakeArray main = new MakeArray();
        System.out.println(Arrays.toString(main.solution(12345)));
    }
  public int[] solution(long n) {
      int[] answer = {};
      ArrayList<Integer> tempAns = new ArrayList<>();
      
      while (n > 0) {
          tempAns.add((int)(n % 10));
          n /= 10;
      }
      answer = new int[tempAns.size()]; 
      for(int j = 0; j < tempAns.size(); j++) {
          answer[j] = tempAns.get(j);
      }
      return answer;
  }
}