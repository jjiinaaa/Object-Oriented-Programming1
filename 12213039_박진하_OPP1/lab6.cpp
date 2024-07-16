#include <iostream>
#include <ctime>
using namespace std;

//int main() {
//	long elapsedSeconds = time(0); // 경과된 초
//	cout << time(0) << endl;
//	int currentSecond = elapsedSeconds % 60;
//	cout << currentSecond << endl;
//
//	long elapsedMinutes = elapsedSeconds / 60;
//	int currentMinute = elapsedMinutes % 60;
//	cout << currentMinute << endl;
//
//	long elapsedHours = elapsedMinutes / 60;
//	int currentHour = elapsedHours % 24; // 2시
//	cout << currentHour << endl;
//
//	cout << currentHour << "시 " << currentMinute << "분 " << currentSecond << " 초";
//}

// Program1
//int maximum(int num1, int num2, int num3)
// 
//int main() {
//	int a, b, c;
//	cout << "입력 숫자: ";
//	cin >> a >> b >> c;
//	
//	cout << "가장 큰 숫자: " << maximum(a, b, c);
//}
//
//int maximum(int num1, int num2, int num3) {
//	int max = 0;
//
//	if (num1 >= num2 && num1 >= num3)
//		max = num1;
//	else if (num2 >= num1 && num2 >= num3)
//		max = num2;
//	else
//		max = num3;
//	return max;
//}

// Program2
//int getFace();
//
//int main() {
//	srand(time(0)); // rand 시작점 지정
//	unsigned int num1 = 0 , num2 = 0, num3 = 0, num4 =0, num5=0, num6=0;
//	for (unsigned int i = 0; i < 6'000'000; i++) {
//		int randomnum = getFace();
//		switch (randomnum) {
//		case 1: 
//			num1++;
//			break;
//		case 2:
//			num2++;
//			break;
//		case 3:
//			num3++;
//			break;
//		case 4:
//			num4++;
//			break;
//		case 5:
//			num5++;
//			break;
//		case 6:
//			num6++;
//			break;
//		}
//	}
//	cout << "1: " << num1 << endl;
//	cout << "2: " << num2 << endl;
//	cout << "3: " << num3 << endl;
//	cout << "4: " << num4 << endl;
//	cout << "5: " << num5 << endl;
//	cout << "6: " << num6;
//}
//
//int getFace() {
//	return rand() % 6 + 1; // srand(time(0)) 으로 rand가 프로그램 시작마다 변화
//}


// Program3
//int rollDice();
//
//int main() {
//	srand(time(0));
//	int roll1 = 0, roll2 = 0, temp = 0;
//	temp = rollDice();
//	if (temp == 7 || temp == 11) {
//		cout << endl << "Player wins";
//	}
//	else if (temp == 2 || temp == 3 || temp == 12) {
//		cout << endl << "Player loses";
//	}
//	else {
//		cout << "Point is " << temp << endl;
//		int temp2 = 0;
//		do {
//			temp2 = rollDice();
//			if (temp2 == 7) {
//				cout << "\nPlayer loses";
//				break;
//			}
//		} while (temp != temp2);
//		if (temp2 != 7) {
//			cout << "Player win";
//		}
//	}
//}
//
//int rollDice() {
//	int num1 = rand() % 6 + 1;
//	int num2 = rand() % 6 + 1;
//	int sum = num1 + num2;
//	cout << "Player rolled " << num1 << " + " << num2 << " = " << sum << endl;
//	return sum;
//}

//#include <iostream> 
//#include <ctime>
//using namespace std;

int behavior(int a);
int count(int a, int b);

int main() {
	int point = 0; // point - 승점
	int score1 = 0, score2 = 0; // score1 - 나희도 점수 / score2 - 고유림 점수
	cout << "<1999년 경주 아시안 게임 여자 펜싱 사브르 결승전>" << endl << "승점을 입력하세요: ";
	cin >> point;
	srand(time(0)); // 반복문 내에 있으면 동일한 수가 계속 반복.
	for (int counter = 0; counter < point;) { // counter로 반복문 돌리기 - 아래에 if문으로 상대적으로 큰 score를 저장
		int move1 = 0, move2 = 0; // move1 - 나희도 행동 / move2 - 고유림 행동
		cout << "\n동작을 선택하세요." << endl << "1. 막기 2. 베기 3. 찌르기\n? ";
		cin >> move1; // 나희도 행동 입력
		switch (move1) {
		case 1:
			move2 = behavior(1); // 1을 인자로 block parameter 전달 - 무승부일 시 사용
			if (move2 == 1) { // 무승부 시 나희도, 고유림 동시에 score 증가
				score1++;
				score2++;
			}
			else if (move2 == 3) {
				score2++;;
			}
			else if (move2 == 2) {
				score1++;
			}
			break;
		case 2:
			move2 = behavior(2);
			if (move2 == 2) {
				score1++;
				score2++;
			}
			else if (move2 == 1) {
				score2++;
			}
			else if (move2 == 3) {
				score1++;
			}
			break;
		case 3:
			move2 = behavior(3);
			if (move2 == 3) {
				score1++;
				score2++;
			}
			else if (move2 == 2) {
				score2++;
			}
			else if (move2 == 1) {
				score1++;
			}
			break;
		default:
			break;
		}

		// for문 구조의 조건 counter를 count 함수로 저장
		counter = count(score1, score2);

		cout << "나희도 행동: " << move1 << " , 고유림 행동: " << move2;
		cout << "\n나희도 점수: " << score1 << " , 고유림 점수: " << score2 << endl;
	}
	if (score1 > score2) {
		cout << "\n나희도 금메달!!";
	}
	else if (score1 < score2) {
		cout << "\n고유림 금메달!!";
	}
	else if (score1 == score2) {
		cout << "나희도, 고유림 공동금메달!!";
	}
}

// score 중 큰 값을 return;
int count(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

// 나희도 행동에 따라 고유림 행동 return
int behavior(int a) {
	int num = 0;
	num = rand() % 3 + 1;
	if (num == a) {
		return a;
	}
	else if (num == 1) {
		return 1;
	}
	else if (num == 2) {
		return 2;
	}
	else if (num == 3) {
		return 3;
	}
}
