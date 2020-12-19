////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    printf("Hello world!\n");
////    return 0;
////}
////#include<stdio.h>
////int main()
////{
////    int a=2;
////    int b=1;
////    int c=0;
////    printf("%d,%d,%d",b+=1,a+b,a+=1);
////    return 0;
////}
//#include<stdio.h>
//#include<stdlib.h>
//char c;
//struct Student
//{
//	int num;
//	char name[20];
//	int score;
//	struct Student* next;
//};
//struct Student* createList(struct Student* head)
//{
//	struct Student* rear;
//	struct Student* p;
//	if ((head = (struct Student*)malloc(sizeof(struct Student))) == NULL)
//	{
//		printf("不能建立新的节点!\n");
//		exit(0);
//	}
//	rear=head;
//	rear->next=NULL;
//	printf("链表生成(按#输入结束)\n");
//	do
//	{
//		if ((p = (struct Student*)malloc(sizeof(struct Student))) == NULL)
//		{
//			printf("不能建立新的节点!\n");
//			exit(0);
//		}
//		p->next=NULL;
//		printf("学号\n");
//		scanf_s("%d", &(p->num));
//		printf("姓名\n");
//		scanf(_s"%s", p->name,20);
//		printf("成绩\n");
//		scanf_s("%d", &(p->score));
//		printf("是否结束:");
//		getchar();
//		while(rear->next!=NULL)
//            rear=rear->next;
//        rear->next=p;
//	   }while ((c=getchar())!='#');
//
//	return head;
//}
//void display(struct Student* head)
//{
//	struct Student* p = head->next;
//	printf("           学生信息表\n");
//	printf("================================\n");
//	for (; p; p=p->next)
//	{
//		printf("学号\t%d\n", p->num);
//		printf("姓名\t%s\n", p->name);
//		printf("成绩\t%d\n", p->score);
//		printf("================================\n");
//	}
//}
//int main()
//{
//	struct Student* head=NULL;
//	head=createList(head);
//	display(head);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    while((scanf("%d",&a)!=EOF)&&(scanf("%d",&b)!=EOF)&&(scanf("%d",&c)!=EOF))
//    {
//        if(((a+b)>c)&&((a+c)>b)&&((c+b)>a))
//        {
//            if(a==b&&b==c)
//                printf("Equilateral triangle!\n");
//            else if((a==b&&b!=c)||(a==c&&a!=b)||(b==c&&b!=a))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float a,b;
//    while(scanf("%f %f",&a,&b)!=EOF)
//    {
//        if(((a)/(b*b/10000))>27.9)
//            printf("Obese\n");
//        else if(((a)/(b*b/10000))>23.9&&((a)/(b*b/10000))<=27.9)
//            printf("Overweight\n");
//        else if(((a)/(b*b/10000))>=18.5&&((a)/(b*b/10000))<=23.9)
//            printf("Normal\n");
//        else
//            printf("Underweight\n");
//    }
//    return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//    float a,b,c,e,f,g,h;
//    while(scanf("%f %f %f",&a,&b,&c)!=EOF)
//    {
//        if(a==0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            e=b*b;
//            f=4*a*c;
//            g=sqrt(e-f);
//            h=sqrt(f-e);
//            if(e-f==0)
//                printf("x1=x2=%.2f\n",(-b/(2*a)));
//            else if(e-f>0)
//                printf("x1=%.2f;x2=%.2f\n",(-b-g)/(2*a),(-b+g)/(2*a));
//            else
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",-b/(2*a),h/(2*a),-b/(2*a),h/(2*a));
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b;
//    while(scanf("%d %d",&a,&b)!=EOF)
//    {
//        if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
//            printf("31\n");
//        else if(b==2)
//        {
//            if(a/400==0||(a/4==0&&a/100!=0))
//                printf("29\n");
//            else
//                printf("28\n");
//         }
//        else
//            printf("30\n");
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    if(a/4==0)
//        printf("1");
//    else
//        printf("2");
//}
//#include<stdio.h>
//int main()
//{
//    double a,b;
//    char c;
//    while(scanf("%lf%c%lf",&a,&c,&b)!=EOF)
//    {
//        switch(c)
//        {
//            case '+':
//                printf("%.4lf+%.4lf=%.4lf\n",a,b,a+b);
//                break;
//            case '*':
//                printf("%.4lf*%.4lf=%.4lf\n",a,b,a*b);
//                break;
//            case '/':
//                if(b==0)
//                    printf("Wrong!Division by zero!\n");
//                else
//                    printf("%.4lf/%.4f=%.4lf\n",a,b,a/b);
//                break;
//            case '-':
//                printf("%.4f-%.4lf=%.4lf\n",a,b,a-b);
//                break;
//            default:
//                printf("Invalid operation!\n");
//                break;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,i;
//    while(~scanf("%d",&a))
//    {
//        for(i=0;i<a;i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<n;j++)
//                printf("*");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<=i;j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=n;i>0;i--)
//        {
//            for(j=i;j>0;j--)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j,h;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            for(j=n-i-1;j>0;j--)
//            {
//                printf("  ");
//            }
//            for(h=0;h<=i;h++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
