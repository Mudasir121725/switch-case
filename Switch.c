main()
{
	int choice,a,b,c;
	printf("\n 1. Addition");
	printf("\n 2. odd - Even");
	printf("\n 3. printing N numbers");
	printf("\n\n Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter two Numbers: ");
			scanf("%d %d", &a,&b);
			c=a+b;
			printf("\n sum is %d",c);
			break;

	case 2:
		printf("Enter a number: ");
		scanf("%d",&a);
		if(a%2==0)
		 printf("Even number: ");
		 else
		 printf("odd number: ");
		 break;
	
	case 3:
		printf("Enter a number: ");
		scanf("%d",&a);
		for(b=1;b<=a;b++)
		printf("%d ",b);
		break;
	default:
		printf("invalid Choice: ");
	}
}
