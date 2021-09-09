/*
개발자 : 김완중, 윤영웅 
개발자 : 2021.09.09 
문의 : wanjung5017@gmail.com 
*/

#include <stdio.h>
#include <windows.h>
int main(void)
{
	int num;
	int key = 1;
	int key1 = 1;
	int key2 = 1;
	int dkagh = 921;
	int a;
	
	//아이템 
	int ham = 1;
	
	printf("\n=================================================\n");
	printf("\n\n              방탈출(?) 게임               \n\n");
	printf("\n=================================================\n");
	printf("\n\n                                        \n\n");
	printf("\n\n     [1] 시작하기      [2] 종료하기     \n\n");
	printf("\n\n                                        \n\n");
	printf("\n=================================================\n");
	scanf("%d", &num);
	switch(num)
	{
		case 1:
				printf("\n *시작하기전에 주의 사항* \n");
				printf("1. 저의 방탈출 게임은  영상강의의 도움을 받아 만들었습니다. \n");
				printf("영상 링크 : https://www.youtube.com/watch?v=GE2EJbMhAYY&ab_channel=%ED%95%99%EC%83%9D%EC%BD%94%EB%94%A9 \n");
				printf("2. 이 방 탈출은 while문 과 switch문으로 만들어 졌습니다. \n");
				Sleep (5000);
				printf("그럼 시작하겠습니다. \n");
				Sleep(3000);
				system("cls");
				break;
		case 2:
				printf("\n 아쉽지만 다음을 기약하며... 게임이 종료됩니다. \n");
				Sleep(2000);
				exit(0);
				break;
	}
	
	while(key)
	{
		printf("=========== 집 밖================ \n");
		printf("[1] 문 [2] 서랍 \n");
		scanf("%d", &num);
		system("cls");
		switch(num)
		{
			case 1:
				printf("어!? \n");
				Sleep(2000);
				system("cls");
				printf("문이 안 열리는거 같다..^^ \n");
				Sleep(2000);
				printf("ㅎ.... \n"); 
				Sleep(3000);
				system("pause");
				system("cls");
				break;
			case 2:
				printf("아닛!!!? \n");
				Sleep(2000);
				printf("아무것도 없잖아!? \n");
				Sleep(5000);
				printf("-라고 말하자 마자 열쇠를 찾았다- \n");
				Sleep(3000);
				printf("역시 평소에 집중을 해봤어야지 말이야 ㅎㅎ \n");
				Sleep(3000);
				system("pause");
				system("cls");
				key = 0;
				break;
		}
	} 
	while(key1)
	{
		printf("============집 밖================ \n");
		printf("[1] 문 [2] 서랍 \n");
		scanf("%d", &num);
		system("cls");
		switch(num)
		{
			case 1:
				printf("큭윽 \n");
				Sleep(2000);
				system("cls");
				printf("역시 나야 ^^ \n");
				Sleep(2000);
				printf("역시 항상 아무곳에나 놓으니까 우리집 열쇠를 잃어버리지 ㅎㅎ \n"); 
				Sleep(3000);
				printf("근데... 난 이런곳에 둔적이 없는데...? \n");
				Sleep(3000);
				printf("뭐 어때~ \n");
				Sleep(2000);
				printf("이제 들어가 보실까~^^ \n");
				Sleep(3000);
				system("pause");
				system("cls");
				key1 = 0;
				break;
			case 2:
				printf("뭔가 더 있을거 같은데... \n");
				Sleep(5000);
				printf("이번엔 집중해서 더 찾아보자 \n");
				Sleep(3000);
				printf("열심히 찾는 나머지 10초가 지났다. \n");
				Sleep(2000);
				printf("생각해보니 서랍은 열쇠말고 아무것도 없는 빈 서랍이었다 \n");
				Sleep(3000);
				printf("젠장...!! \n");
				Sleep(2000);
				printf("더 중요한 서랍은은 없는거냐구..!!!!! \n");
				Sleep(3000); 
				system("pause");
				system("cls");
				break;
		}
	}
	printf("휴 이제 들어왔....?? \n");
	Sleep(3000);
	printf("?!?!?!?!? \n");
	Sleep(2000);
	printf("우리집에 무슨 일이....?? \n");
	Sleep(3000); 
	printf("-집 안은 방과 창문이 없는 밀폐된 모습이였다.- \n");
	Sleep(2000);
	printf("-나는 일단 집으로 들어왔다.- \n");
	Sleep(4000);
	printf("-그럼과 동시에 열고 들어왔던 문은 다시 잠겼다.- \n");
	Sleep(2000);
	printf("뭐야!? 문이 안열리네...? \n");
	Sleep(5000);
	system("cls");
	printf("-방(?)에 있는 TV에서 영상이 나온다.- \n");
	Sleep(2000);
	printf("치지ㅣㅣㅣ직.. \n");
	Sleep(2000);
	printf("???: 만나서 반갑다.. 내 이름 정좌우... \n");
	Sleep(2000);
	printf("정좌우: 너의 집의 구조를 바꾼 사람이다. \n");
	Sleep(2000); 
	printf("나: ??? 잠ㄲㅏ.. \n");	
	Sleep(2000);
	printf("정좌우: 그럼 게임을 시작하지 \n");
	Sleep(2000); 
	system("cls");
	
	printf("다음 시간에 계속");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");	
	Sleep(1000);
	printf(".");
	system("cls");
	printf("-라고할뻔^^- \n");
	Sleep(3000);
	printf("-이제부터 시작입니다 조금 더 집중해주시길 바랍니다-\n");
	Sleep(3000); 
	printf("정신나간 어떤 남자를 피해 탈출을 시도하자.\n");
	Sleep(3000); 
	system("pause");
	system("cls");
	
		while(key2)
	{
		printf("============집 안================ \n");
		printf("[1] 장식장 [2] 화장실 [3] 신발장 [4] 출구 \n");
		scanf("%d", &num);
		system("cls");
		switch(num) 
		{
			case 1: //장식장 
			printf("앞에 장식장이 보인다.\n");
			printf("[1] 살펴본다 [2] 돌아간다 \n");
			system("cls");
			switch(num){
				case 1:
					printf("음 이게 무슨 소리지? \n");
					Sleep(2000);
					printf("-장식장에 알파벳 노래 소리가 라디오 나오고 있다.- \n");
					Sleep(2000);
					printf("A...B...C...D...... \n");
					Sleep(2000);
					printf("알파벳 노래..? 무슨 관련이 있는건가? \n");
					Sleep(2000);
					printf("-생각하며 장식장을 뒤지던 나는 망치를 찾았다.- \n");
					Sleep(2000);
					printf("-망치의 상태가 좋지 않아 한번밖에 사용을 못할 것 같다.- \n");
					Sleep(2000);
					printf("망치를 사용은 신중하게 생각해야겠어");
					Sleep(1000);
					ham = 0;
					system("pause");
					system("cls");
					break; 
				case 2:
					printf("노래만 좋네 \n");
					system("pause");
					system("cls");
					break;
			} 
				break; 
			case 2: //화장실 
			printf("-문이 얄리지 않는다- \n");
			Sleep(2000);
			printf("망치로 화장실문을 부수시겠습니까?");
			printf("[1] 부순다. [2] 돌아온다. \n");
			switch(num){
				
				case 1:
					printf("-화장실 문이 부서졌다.- \n");
					Sleep(2000);
					printf("-화장실을 들어가자 긴 머리카락과 어떤 쪽지가 보인다.-");
					Sleep(2000);
					printf("이거... 여자 머리카락인가...?");
					Sleep(2000);
					printf("-나는 잠깐의 두통을 느꼈다.다-");
					Sleep(2000);
					printf("윽..뭐지..");
					Sleep(2000);
					printf("-나는 정신 차리고 옆에 있는 쪽지의 내용을 확인했다.- \n");
					printf("-쪽지에는 921 1215225 \n");
					system("pause");
					printf("이 쪽지는 중요한 단서가 될것 같다.");
					Sleep(2000);
					system("pause");
					system("cls");
					break;
				case 2:
					printf("-화장실 앞에 있으니 괜히 배만 아픈거 같다.-");
					Sleep(2000);
					system("pause");
					system("cls");
					break;
					
			}
				break;
			case 3: //신발장 
				printf("신발장을 조사해보자");
				Sleep(2000);
				printf("신발장에는 풀풀 풍기는 발냄새와 [나는 아이유를 좋아한다]라고 쓰인 잡지가 놓여있다.- \n");
				Sleep(2000);
				printf("이 잡지는 힌트가 될것 같다. \n");
				system("pause");
				break;
			case 4: //출구 
				printf("비밀번호를 입력하세요.\n");
				Sleep(2000);
				scanf("%d", &a);
				if(a == dkagh){
					printf("뭐지 이 싸늘한 느낌 탈출이다.\n");
					key2 = 0;
				break;	
				}
				else {
					printf("틀렸습니다. \n");
					printf("다시 입력하세요. \n");
					system("pause");
					system("cls"); 
				}
				break;		
		}
	}
	
	
	Sleep(1000);
	
	
	return 0; 
}
