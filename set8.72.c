nt main(void) 
{
char s[50];
int i=0,c=0,flag=0;
scanf("%s",s);
while(s[i]!='\0')
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
flag=1;
i++;
}
if(flag==1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
