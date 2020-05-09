class Binary {
	public static void main(String[] args) {
		Binary main = new Binary();
		
		int n = 78;
		System.out.println(main.solution(n));
	}

	public int solution(int n) {
        int cnt = Integer.bitCount(n);
        for(int i = n + 1; ; i++) {
            if(cnt == Integer.bitCount(i)) 
                return i;
        }
    }
}