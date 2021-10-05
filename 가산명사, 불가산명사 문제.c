#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	printf("%90s","================================================\n");
	printf("%90s","명사가 가산명사인지 불가산명사인지 test해봅시다.\n");
	printf("%90s","================================================\n");
	printf("%90s","2019 ⓒ https://an-onymous.tistory.com/\n");
	int a,b;
	char *arrs[] = {"teacher","instructor","representative","receptionist","attendee","employee","place","city","area","street","location","region",\
					"regulation","precaution","instruction","measure","procedure","rule","price","discount","refund","account","cost","fund","request",\
					"result","complaint","compliment","benefit","approach","detail","decision","presentation","reservation","mistake","arrangement",\
					"offer","contribution","error","resource","result","plan","acquaintance","circumstance","delay","approach","exchange","return",\
					"suggestion","belongings","rise","raise","increase","decline","drop","decrease"\
					"equipment","money","support","approval","advice","news","consent","work","access","merchandise","use","furniture","mail","certification","cash","luggage","baggage","manufacture","information"};
	srand(time(NULL));
	rand();
	rand();
	rand();
	

	/*
	int i;
    char *p = arrs[0];
    for(i=0; i < 295; i++){
        if (*p != '\0') {
            printf("%c", *p);
        } else {
            printf("\n");
        }
        p++;
    }
    */
    /*
    char toV[] = {"agree","need","wish","hope","want","expect","afford","deserve","refuse","intend","ask","fail","manage","pretend","learn","promise","offer","tend","attempt","hesitate","decide","plan"};
    char ing[] = {"enjoy","suggest","recommend","consider","finish","quit","discontinue","give up","postpone","dislike","deny","mind","avoid","include","disclose","anticipate","recall","mention","admit","prevent"};
	*/
	/*
	printf("mention\t hope\t recall\t include\t admit\t prevent\t want\n		\
			offer\t postpone\t dislike\t fail\t need\t refuse\t disclose\n		\
			give up\t quit\t enjoy\t promise\t avoid\t recommend\t decide\n		\
			attempt\t expect\t suggest\t consider\t plan\t hesitate\t agree\n	\
			wish\t afford\t discontinue\t deny\t learn\t ask\t anticipate\n		\
			tend\t pretend\t manage\t finish\t mind\t deserve\t intend\n");
			*/
	while(1){
		a = rand()%75+0;
		printf("\n[%s]는 가산명사입니까? 불가산명사입니까?\n 가산명사는 \'1\'을, 불가산명사는 \'2\'를 입력하세요.", arrs[a]);
		scanf("%d", &b);
		while (getchar() != '\n');
		if(b != 1 && b != 2){
			printf("\n 잘못 입력하셨습니다.\n \"1\" (가산명사일 경우) 또는 \"2\" (불가산명사일 경우)를 입력하십시오.\n\n\n");
			continue; 
		}
		/*
		else if (isdigit(b) == 0){
			printf("\n 잘못 입력하셨습니다.\n \"1\" (뒤에 to부정사가 올 경우) 또는 \"2\" (뒤에 동명사(~ing)가 올 경우)를 입력하십시오.\n\n\n");
			continue; 
		}
		*/
		if(a >=0 && a <= 55 && b == 1)
			printf("\n정답입니다!\n\n");	
		else if (a >=0 && a <= 55 && b != 1)
			printf("\n틀렸습니다! [%s]는 가산명사입니다!\n\n", arrs[a]);
		else if (a > 55 && a <= 74 && b == 2)
			printf("\n정답입니다!\n\n");
		else if (a > 55 && a <= 74 && b != 2)
		printf("\n틀렸습니다! [%s]는 불가산명사입니다!\n\n", arrs[a]);
		}
	return 0;
}
