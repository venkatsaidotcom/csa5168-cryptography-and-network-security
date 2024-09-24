#include<stdio.h>
#include<ctype.h>
void CC(char *text,int k){
	char ch;
	int i;
	for(i=0;text[i]!=0;i++){
		ch=text[i];
		if(isupper(ch)){
			ch=((ch-'A'+k)%26)+'A';
		}else if(islower(ch)){
			ch=((ch-'a'+k)%26)+'a';
		}
		text[i]=ch;
	}
}
int main(){
	int k;
	char text[100];
	printf("enter the string");
	fgets(text,sizeof(text),stdin);
	printf("enter k :");
	scanf("%d",&k);
	CC(text,k);
	printf("encrpted text is:%s\n",text);
	return 0;
}
