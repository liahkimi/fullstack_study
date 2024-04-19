package day04;

import java.util.Scanner;

public class SwitchTest {

	public static void main(String[] args) {

		int num = -190;
		
		switch(num) {
		
		// num == 1 || num == 3
		case 1: case 3:
			System.out.println("num이 1이라면 실행할코드");
			break;
		
		// num == 2
		case 2:
			System.out.println("num이 2라면 실행할 코드");
			break;
		
		// num == 37
		case 37:
			System.out.println("num이 37이라면 실행할 코드");
			break;
		
		// if문의 else 키워드와 동일
		default:
			System.out.println("모두 일치하지 않습니다");
			
			
		}
		
		// 실습1.
		// 사용자에게 월을 입력받고 해당되는 계절을 출력하기
		// 12, 1, 2월 = 겨울
		// 3, 4, 5월 = 봄
		// 6, 7, 8월 = 여름
		// 9, 10, 11월 = 가을
		
//		Scanner sc = new Scanner(System.in);
//		// 사용자가 입력한 월을 저장할 변수
//		int month = 0;
//		// 계절을 저장할 변수
//		String season = null;
//		
//		// 사용자에게 월을 입력받는다 
//		System.out.println("월을 입력하세요 >>");
//		month = sc.nextInt();
//		
//		switch(month) {
//		
//		case 12: case 1: case 2:
//			season = "겨울";
//			break;
//		case 3: case 4: case 5:
//			season = "봄";
//			break;
//		case 6: case 7: case 8:
//			season = "여름";
//			break;
//		case 9: case 10: case 11:
//			season = "가을";
//			break;
//		default:
//			season = "잘못된 입력";
//			break;
//		}
//		
//		System.out.println(season);
//		
//		double doubleVar = 10.7;
//		boolean isTrue = true;
		
		// double, boolean 은 switch문을 사용할수 없다
//		switch(isTrue) {
//		
//		}
		
		// 실습2.
		// 사용자에게 주민번호 뒷자리 7자리를 입력받고 
		// 여성인지 남성인지 출력하기
		// 뒷자리의 첫글자 2, 4이면 여성
		// 뒷자리의 첫글자 1, 3이면 남성
		
		Scanner sc = new Scanner(System.in);
		// 입력한 주민번호를 저장할 변수
//		String socialNum = sc.next();
//		// 주민번호 뒷자리에서 첫글자를 저장할 변수
//		char first = socialNum.charAt(0);
		
		char first = sc.next().charAt(0);
		System.out.println(first);
		
		switch(first) {
		case '1': case '3':
			System.out.println("남성입니다");
			break;
		case '2': case '4':
			System.out.println("여성입니다");
			break;
		default:
			System.out.println("잘못된 입력입니다");
		}
		
		
		
		
		
		
		
		
		
		
		
		
	}

}
