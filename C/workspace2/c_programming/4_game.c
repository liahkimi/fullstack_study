#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//모르겠는 것 : 
//1. continue, break문의 흐름 헷갈림
//2. flag의 0, 1 ON, OFF 이해안됨
//3. 전체적인 흐름

int main() {
	int choice, c_answer, score;//choice:유저 선택, c_answer: 정답, score: 점수
	int level = 0;//게임 난이도
	int totalScore = 0;//총 점수
	int flag = 0;//?

	//rand() 쓰기전에 초기화
	srand(time(NULL));//매번 다른 랜덤숫자가 나오게 해주는 함수


	//while(1)은 언제나 참이라는 의미이며, break문이 포함된 조건이 만족할 때까지 무한으로 실행되게 됩니다.
	while (1) {
		//게임 안내
		printf("===== 난수 맞추기 게임 =====\n");
		printf("1. 난이도 설정   2. 게임하기   3. 내 점수 보기   4. 종료하기\n");
		printf("메뉴 선택 >>>>> ");

		//유저가 입력한 번호 scan
		scanf("%d", &choice);



		//[4.종료하기] 선택했을 때,
		if (choice == 4) {
			printf("4번 눌러서 종료.\n");
			break;//break문이 포함된 이 조건문이 만족했으므로 while문 무한루프 빠져나옴.= 종료
		} // 종료하기 if문 닫는 중괄호




	//[1.난이도 설정] 선택했을 때,
		else if (choice == 1) {
			while (flag == 0) {//flag == 0 ...????

				//난이도 설정 안내
				printf("1. 상 : 1 ~ 20까지 중 랜덤 숫자 맞추기\n보상 : 100점\n");
				printf("2. 중 : 1 ~ 10까지 중 랜덤 숫자 맞추기\n보상 : 50점\n");
				printf("3. 하 : 1 ~  5까지 중 랜덤 숫자 맞추기\n보상 : 25점\n");

				//유저가 입력한 번호 scan
				scanf("%d", &choice);
				switch (choice) {
				case 1:
					level = 3;//level은 [2.게임하기]에서 설정한 level (level.3 = 난이도 상)
					printf("난이도 상으로 설정되었습니다.\n");
					flag = 1;//flag == 1 ??????  flag==1이면 ON /flag==0이면 OFF (비트연산활용) 인가요? ==> 그럼, 여기 case문이 만족하면 break문 나오고 게임하기로 ON? => 어디로가는건지
					break;//choice = 1이면 해당 case 만족해서 switch반복문을 나감
				case 2:
					level = 2;
					printf("난이도 중으로 설정되었습니다.\n");
					flag = 1;
					break;
				case 3:
					level = 1;
					printf("난이도 하으로 설정되었습니다.\n");
					flag = 1;
					break;
				default:
					printf("잘못 입력하셨습니다.\n");//1,2,3 외의 숫자 입력시, switch문 벗어나서, 난이도 설정 안내 다시 나옴
				} // switch문 닫는 중괄호

			} // 난이도 설정 while문 닫는 중괄호

			flag = 0;//?????????
		} // 1번 난이도 설정 else if문 닫는 중괄호




		//[2.게임하기] 선택했을 때
		else if (choice == 2) {
			// 난이도를 설정하지 않고, [2.게임하기]를 먼저 선택했다면,(근데 왜 level이 0이면, 난이도를 설정하지 않은것처럼 나오지?)
			if (level == 0) { //level은 1,2,3만 게임하기 가능
				printf("난이도를 먼저 설정하세요\n");
				continue;//continue문 실행시, 어디로 이동??=> if문 나와서 while문의 무한루프로 이동?
			}
			// level 3 = 난이도 상
			else if (level == 3) {
				//랜덤숫자 1~20사이로 정답 나오게 설정
				c_answer = rand() % 20 + 1;
				//맞추면 줄 점수
				score = 100;
			}
			// level 2 = 난이도 중`
			else if (level == 2) {
				//랜덤숫자 1~10사이로 정답 나오게 설정
				c_answer = rand() % 10 + 1;
				score = 50;
			}
			//level 1 = 난이도 하 (level이 2,3이 아니니 나머지 1)
			else {
				//랜덤숫자 1~5사이로 정답 나오게 설정
				c_answer = rand() % 5 + 1;
				score = 25;
			}

			//<<<<<랜덤숫자(정답 c_answer) 맞추기 게임 시작>>>>>>
			//3번째까지 시도할 수 있게 하며, 시도에 실패할때마다 보상점수 깎아서 주기
			for (int i = 0; i < score / 10; i++) {
				//i < score / 10;  <=이 부분 이해 안됨!!!!!!!!!!!!!!!

				//시도할때마다 몇번째 시도인지 알려주며 입력하게 하기
				printf("%d번째 시도 정답 입력 >>>>> ", i + 1);

				//유저가 숫자 입력
				scanf("%d", &choice);

				//u_score 변수 선언&사용 <- 시도할때마다 생기는 득점
				int u_score = score - (i * 10);//실패시

				//맞췃을 때, 몇점 추가된건지 알려주기 & 총점수에 득점 넣어주기
				if (c_answer == choice) {
					printf("정답!, %d점이 추가됩니다!\n", u_score);
					totalScore += u_score;
					break;
				}
				//틀렸을 때, scroe/10번까지 끝났을 때, 정답 알려주기
				printf("%d번째 시도 땡!\n", i + 1);
				if ((i + 1) == (score / 10)) {
					printf("정답은 %d였습니다.\n", c_answer);
				}
			}
		} // 2번 게임하기 닫는 중괄호



		//[3.내 점수 보기] 선택했을 때
		else if (choice == 3) {
			printf("점수 총합 : %d\n", totalScore);
		}
		else {
			printf("다시 입력하세요!\n");
			//<===choice가 4,1,2,3 아닌것을 넣을때 나오는 문구! 다시 고르라고...
		}
	} // 큰 while문 닫는 중괄호 = while문 안의 실행문을 만족하지 않을 때 나온다.=> choice=4

	//[4.종료하기]로 "4번 눌러서 종료"문구 뜨게 한 뒤, 확실하게 종료함을 알리기 위해 "게임 정상 종료"문구 한번 더 띄움.
	printf("\n게임 정상 종료\n");

	return 0;
}