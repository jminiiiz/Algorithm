int solution(int number, int n, int m) {
	return !(number % n) & !(number % m);
}