package day05;

public class DoWhileTest {

	public static void main(String[] args) {

		// while문
		boolean isTrue = false;
		
		// 조건식의 값이 거짓이므로 코드를 실행하지 않는다
		while(isTrue) {
			System.out.println("while문 안녕하세요");
		}
		
		
		// do-while문
		do {
			System.out.println("do-while문 안녕하세요");
		}while(isTrue);
	
		
		
	}

}
