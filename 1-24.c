# include<stdio.h>

int brace,brack,paren;

void inquote(int c);
void incomment(void);
void search(int c);

main()
{
	int c;
	extern int brace,brack,paren;
	while((c=getchar())!=EOF)
	{
		if(c=='/')
		{
			if((c=getchar())=='*')
			incomment();
			else
				search(c);
		}
		else if(c=='\' || c=='"')
			inquote(c);
		else
			search(c);
		if(brace<0)
		{
			printf("unbalanced braces\n")
			brace=0;
		}
		else if(brack<0)
		{
			printf("unbalanced bracket\n");
			brack=0;
		}
		else if(paren<0)
		{
			printf("unbalanced paranthesis")
			paren=0;
		}
		if(brace>0)
			printf("unbalanced braces\n")
		else if(brack>0)
			printf("unbalanced bracket\n");
		else if(paren>0)
			printf("unbalanced paranthesis");

	}
}

void search(int c)
{
	extern int brace,brack,paren;
	if (c=='{')
		++brace;
	else if(c=='}')
		--brace;
	else if(c=='[')
		++brack;
	else if(c==']')
		--brack;
	else if(c=='(')
		++paren;
	else if(c==')')
		--paren;
}

void incomment(void)
{
	int c,d;
	c=getchar();
	d=getchar();
	while(c!='*' || d!='/')
	{
		c=d;
		d=getchar()
	}
}

void inquote(int c)
{
	int d;
	while((d=getchar())!=c)
		if(d=='\\')
			getchar();
}
