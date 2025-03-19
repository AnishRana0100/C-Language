/*#include<stdio.h>

int main() {
  
    float P = 1, R = 1, T = 1;
    float SI = (P * T * R) / 100;
    printf("Simple Interest = %f\n", SI);

    return 0;
}
  

#include <stdio.h>
unsigned int factorial(unsigned int N) {
    int fact = 1, i;
    for (i = 1; i <= N; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int N = 5;
    int fact = factorial(N);
    printf("Factorial of %d is %d", N, fact);
    return 0;
}

/*
    Entry Check --> For,While
    Exit Check --> Do while

    input is 10;
             55


#include<stdio.h>
int main(){
    int i;

    for(i=1;i<=5;i++){
        printf("Today\n");
    }
    return 0;
}


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int itr;
    int sum = 0;
    for(itr=1;itr<=num;itr++){
        if(itr<num){
        printf("%d+",itr);
        sum = sum+itr;
        }
        else{
            printf("%d=",itr);
            sum = sum+itr;
        }
    }
    //printf("\n");
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
int main(){
    int fact = 1;
    int num;
    scanf("%d",&num);
    int itr;
    for(itr=1;itr<=num;itr++){
        fact = fact*itr;
    }
    printf("%d",fact);
    return 0;
}



#include<stdio.h>
int main(){
    int num = 144;
    int rev = 0;
    while(num!=0){
        rev = rev*10+num%10;
        num = num/10;
    }
    printf("%d",rev);
    return 0;
}

// Adam Number

// 12 --> 144
// 21 --> 441 -->144

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int copy = num;
    int sqr = num*num;
    int rev_num = 0;

    while(copy!=0){
        rev_num = rev_num*10+copy%10;
        copy/=10;
    }
    int sqr_rev_num = rev_num*rev_num;

    int copy1= sqr_rev_num;

    int rev_sqr =0;

    while(copy1!=0){
        rev_sqr = rev_sqr*10+copy1%10;
        copy1/=10;
    }

    if(sqr == rev_sqr){
        printf("ADAM NUMBER");
    }
    else{
        printf("NOT ADAM NUMBER");
    }
    return 0;
}


//Prefect Number

//6 --> 1 2 3 ==>6


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int itr;
    int sum =0;
    for(itr=1;itr<num;itr++){
        if(num%itr==0){
            //printf("%d ",itr);
            sum = sum+itr;
        }
    }
   // printf("\n");
    // printf("%d ",sum);
    if(num == sum){
        printf("Prefect Number");
    }
    else{
        printf("Not A prefect Number");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=1;row<=num;row++){
        printf("\n");
        for(col=1;col<=num;col++){
        printf("*");
        }
    }
    return 0;
}
/*
*
*	*			1 - 15
*	*	*
*	*	*	*
*	*	*	*	*


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=1;row<=num;row++){
        printf("\n");
        for(col=1;col<=row;col++){
        printf("*");
        }
    }
    return 0;
}

				* spc 4 star 1
			*	* spc 3 star 2
		*	*	* spc 2 star 3
	*	*	*	* spc 1 star 4
*	*	*	*	* spc 0 star 5


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col,spc;
    for(row=1;row<=num;row++){
        printf("\n");
        for(spc=1;spc<=num-row;spc++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("*");
        }
    }
    return 0;
}

1
2	3
4	5	6
7	8	9	10
11	12	13	14	15




#include<stdio.h>
int main(){
    int num;
    int k = 1;
    scanf("%d",&num);
    int row,col;
    for(row=1;row<=num;row++){
        printf("\n");
        for(col=1;col<=row;col++){
        printf("%d ",k++);
        }
    }
    return 0;
}

0	0	0	0	0
0	1	1	1	0
0	1	1	1	0
0	1	1	1	0
0	0	0	0	0



#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=1;row<=num;row++){
        printf("\n");
        for(col=1;col<=num;col++){
            if(row == 1 || col == 1 || col == num || row == num){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    }

}

1	1	1	1	1
2	2	2	2	2
3	3	3	3	3
4	4	4	4	4
5	5	5	5	5


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=1;row<=num;row++){
        printf("\n");
        for(col=1;col<=num;col++){
            printf("%d",row);
        }
    }
    return 0;
}

12345 --> 5 15  3
123456678 -- 8


#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num); //12345   count = 5 sum = 15 avg = 12345 12345% 10 = 5
    int count = 0;
    int sum = 0;
    float avg;
    while(num!=0){
        int val = num%10;
        sum  = sum + val;
        count++;
        num = num/10;
    }
    avg = sum/count;
    printf("%d\n",count);
    printf("%d\n",sum);
    printf("%f",avg);
}
000006
00005
0004
003
02
1

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=num;row>=1;row--){
        printf("\n");
        for(col=1;col<=row;col++){
            printf("*");
        }
    }
    return 0;
}

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=num;row>=1;row--){
        printf("\n");
        for(col=1;col<=row;col++){
            printf("%d",row);
        }
    }
    return 0;
}
/*
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int row,col;
    for(row=num;row>=1;row--){
        printf("\n");
        for(col=1;col<=row;col++){
            if(row==col){
            printf("%d",row);
            }
            else{
                printf("0");
            }
        }
    }
    return 0;
}

Amicable Pairs

6 --> 1 2 3 - sum1 = 6  inp1 == sum2
                     8 --> 1 2 4 - sum2 = 7  inp2 == sum1

#include<stdio.h>
int main() {
	int input1;
	int input2;
	scanf("%d",&input1);
	scanf("%d",&input2);
	int sum1=0;
	int sum2=0;
	int itr;
	for(itr=1; itr<input1; itr++) {
		if(input1%itr==0) {
	  sum1 = sum1+itr;
		}
	}
	printf("\n");
	for(itr=1; itr<input2;itr++) {
		if(input2%itr==0){
		sum2 = sum2 + itr;
		}
	}
	
	if(input1==sum2 && input2 == sum1){
	    printf("Amicable Pairs");
	}
	else{
	    printf("Not Amicanble Pairs");
	}
	return 0;
}
*/
