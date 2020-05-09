import java.util.Arrays;

public class Stocks {
	public static void main(String[] args) {
		Stocks main = new Stocks();
		int[] prices = {1, 2, 3, 2, 3};
		
		System.out.println(main.solution(prices));
	}
	
	public int[] solution(int[] prices) {
		int[] answer = new int[prices.length];
		for(int i = 0; i < prices.length; i++) {
			for(int j = i + 1; j < prices.length; j++) {
				if(prices[i] > prices[j]) {
					answer[i] = j - i;
					break;
				} 
				else
					answer[i] = j - i;
			}
		}
		
		System.out.println(Arrays.toString(answer));
		
		return answer;
	}
}
