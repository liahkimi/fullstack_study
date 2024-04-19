package day05;

public class ArrayTest {

	public static void main(String[] args) {

		// 1. 자료형[] 배열명 = new 자료형[칸수];

		int[] ar = new int[3];

		System.out.println(ar);

		// 3개의 저장공간 나열중에 제일앞에 있는 저장공간
		System.out.println(ar[0]);
		System.out.println(ar[1]);
		System.out.println(ar[2]);

		// 2. 자료형[] 배열명 = {값1, 값2, 값3...};

		int[] ar2 = new int[] { 10, 20, 30 };

		System.out.println(ar2[0]);
		System.out.println(ar2[1]);
		System.out.println(ar2[2]);

		// 3. 자료형[] 배열명 = null;

		int[] ar3 = null;

		System.out.println(ar3);
//		System.out.println(ar3[0]);

		// 배열명[인덱스번호]
		// java.lang.ArrayIndexOutOfBoundsException
//		System.out.println(ar2[100]);

		ar3 = new int[2];
		System.out.println(ar3);
		System.out.println(ar3[0]);

		ar3 = new int[] { 50, 20 };
		System.out.println(ar3);
		System.out.println(ar3[0]);

		// 배열의 길이
		System.out.println(ar.length);
		System.out.println(ar2.length);
		System.out.println(ar3.length);

		for (int i = 0; i < ar.length; i++) {
			System.out.println(ar[i]);
		}

	}

}
