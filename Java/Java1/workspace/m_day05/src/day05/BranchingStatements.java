package day05;

public class BranchingStatements {

	public static void main(String[] args) {

		// break문
		
//		for (int i = 0; i < 5; i++) {
//			
//			System.out.println(i);
//			
//			if(i == 3) {
//				break;
//			}
//		}
//		
//		// i = 3 일때 가장 먼저 만나는 코드가
//		// 조건문의 break 이므로 출력하지 않고 반복이 종료된다
//		for (int i = 0; i < 5; i++) {
//			
//			if(i == 3) {
//				break;
//			}
//			System.out.println(i);
//			
//		}
		
		// continue문
		
//		for(int i = 0; i < 5; i++) {
//			
//			System.out.println(i);
//			if(i == 3) {
//				continue;
//			}
//		}
		
		
		for(int i = 0; i < 5; i++) {
			
			if(i == 3) {
				continue;
			}
			System.out.println(i);
		}
		
		// 주어진 문자열에서 !를 찾고 몇번째에 있는지 출력하기
					//0123456 
		String msg = "abcd!efgzx";
		
		// 문자열의 길이 : 문자열.length()
		System.out.println(msg.length()); //7
		
//		System.out.println(msg.charAt(0));
//		System.out.println(msg.charAt(1));
//		System.out.println(msg.charAt(2));
//		System.out.println(msg.charAt(3));
		
		for(int i = 0; i < msg.length(); i++) {
//			System.out.println(msg.charAt(i));
			char spell = msg.charAt(i);
			if(spell == '!') {
				System.out.println(i + "번째에 존재합니다");
				break;
			}
		}
		
		
	
		
		
		
		
		
		
		
	}

}
