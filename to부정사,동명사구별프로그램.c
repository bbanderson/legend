#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	printf("%90s","============================================================\n");
	printf("%90s","������ ����� to���������� �����(~ing)���� test�غ��ô�.\n");
	printf("%90s","============================================================\n");
	printf("%90s","2019 �� https://an-onymous.tistory.com/\n");
	int a,b;
	char *arrs[] = {"agree","need","wish","hope","want","expect","afford","deserve","refuse","intend","ask","fail","manage","pretend","learn","promise","offer","tend","attempt","hesitate","decide","plan","enjoy","suggest","recommend","consider","finish","quit","discontinue","give up","postpone","dislike","deny","mind","avoid","include","disclose","anticipate","recall","mention","admit","prevent"};
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
		a = rand()%42+0;
		printf("\n[%s]�� �ڿ� to�����縦 �����մϱ�? �ƴϸ� �����(~ing)�� �����մϱ�?\n to������� \'1\'��, ������ \'2\'�� �Է��ϼ���.", arrs[a]);
		scanf("%d", &b);
		while (getchar() != '\n');
		if(b != 1 && b != 2){
			printf("\n �߸� �Է��ϼ̽��ϴ�.\n \"1\" (�ڿ� to�����簡 �� ���) �Ǵ� \"2\" (�ڿ� �����(~ing)�� �� ���)�� �Է��Ͻʽÿ�.\n\n\n");
			continue; 
		}
		/*
		else if (isdigit(b) == 0){
			printf("\n �߸� �Է��ϼ̽��ϴ�.\n \"1\" (�ڿ� to�����簡 �� ���) �Ǵ� \"2\" (�ڿ� �����(~ing)�� �� ���)�� �Է��Ͻʽÿ�.\n\n\n");
			continue; 
		}
		*/
		if(a >=0 && a <= 21 && b == 1)
			printf("\n�����Դϴ�!\n\n");	
		else if (a >=0 && a <= 21 && b != 1)
			printf("\nƲ�Ƚ��ϴ�! [%s]�� �ڿ� to�����縦 �����մϴ�!\n\n", arrs[a]);
		else if (a > 21 && a <= 41 && b == 2)
			printf("\n�����Դϴ�!\n\n");
		else if (a > 21 && a <= 41 && b != 2)
		printf("\nƲ�Ƚ��ϴ�! [%s]�� �ڿ� �����(~ing)�� �����մϴ�!\n\n", arrs[a]);
		}
	return 0;
}
