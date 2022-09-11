#include <stdio.h>

int main() {
	 char h;
                printf("veuillez entrer un caractere");
                scanf ("%c",&h);
                if(h<='a'&& h>'z');
                printf("%c est une alphabet en miniscule",h);
                if(h<='A'&& h>'Z')
                printf("%c est une alphabet en majuscule",h);
	return 0;
}
