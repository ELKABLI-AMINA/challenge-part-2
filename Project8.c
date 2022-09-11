#include <stdio.h>



int main() {
	 float moyenne;
        printf("veuillez entrer moyenne");
        scanf("%f",&moyenne);
        if (moyenne<10)
            printf("il est recalé");
            else if(moyenne>=10 && moyenne<12)
            printf("il obtient la mention passable");
            else if(moyenne>=12 && moyenne< 14)
            printf("il obtient la mention assez bien");
            else if(moyenne>=14 && moyenne<16)
            printf("il obtient la mention bien");
            else(moyenne>=16);
            printf("il obtient la mention tres bien");

                
	return 0;
}
