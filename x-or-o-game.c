
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void displayuser(char arr[3][3]){
	printf("USER:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}

void displaysys(char arr[3][3]){
	printf("COMPUTER:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}


int checkx(char arr[3][3]){
	if(arr[0][0]=='x' && arr[1][1]=='x' && arr[2][2]=='x'){
		return 1;
	}
	else if(arr[0][0]=='x' && arr[1][0]=='x' && arr[2][0]=='x'){
		return 1;
	}
	else if(arr[0][2]=='x' && arr[1][2]=='x' && arr[2][2]=='x'){
		return 1;
	}
	else if(arr[0][1]=='x' && arr[1][1]=='x' && arr[2][1]=='x'){
		return 1;
	}
	else if(arr[0][0]=='x' && arr[0][1]=='x' && arr[0][2]=='x'){
		return 1;
	}
	else if(arr[1][0]=='x' && arr[1][1]=='x' && arr[1][2]=='x'){
		return 1;
	}
	else if(arr[2][0]=='x' && arr[2][1]=='x' && arr[2][2]=='x'){
		return 1;
	}
	else if(arr[0][2]=='x' && arr[1][1]=='x' && arr[2][0]=='x'){
		return 1;
	}
	else if(arr[2][2]=='x' && arr[1][1]=='x' && arr[0][0]=='x'){
		return 1;
	}
	else if(arr[2][0]=='x' && arr[1][1]=='x' && arr[0][2]=='x'){
		return 1;
	}
	else{
		int count=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(arr[i][j]=='-')
					count++;
			}
		}
		if(count==0)
			return 0;
	}
}

int checko(char arr[3][3]){
	if(arr[0][0]=='o' && arr[1][1]=='o' && arr[2][2]=='o'){
		return 1;
	}
	else if(arr[0][0]=='o' && arr[1][0]=='o' && arr[2][0]=='o'){
		return 1;
	}
	else if(arr[0][2]=='o' && arr[1][2]=='o' && arr[2][2]=='o'){
		return 1;
	}
	else if(arr[0][1]=='o' && arr[1][1]=='o' && arr[2][1]=='o'){
		return 1;
	}
	else if(arr[0][0]=='o' && arr[0][1]=='o' && arr[0][2]=='o'){
		return 1;
	}
	else if(arr[1][0]=='o' && arr[1][1]=='o' && arr[1][2]=='o'){
		return 1;
	}
	else if(arr[2][0]=='o' && arr[2][1]=='o' && arr[2][2]=='o'){
		return 1;
	}
	else if(arr[0][2]=='o' && arr[1][1]=='o' && arr[2][0]=='o'){
		return 1;
	}
	else if(arr[2][2]=='o' && arr[1][1]=='o' && arr[0][0]=='o'){
		return 1;
	}
	else if(arr[2][0]=='o' && arr[1][1]=='o' && arr[0][2]=='o'){
		return 1;
	}
	else{
		int count=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(arr[i][j]=='-')
					count++;
			}
		}
		if(count==0)
			return 0;
	}
}

int smartx(char arr[3][3]){
	if(arr[0][0]=='x' && arr[1][1]=='x' && arr[2][2]=='-'){
		return 1;
	}
	else if(arr[0][0]=='x' && arr[2][2]=='x' && arr[1][1]=='-'){
		return 2;
	}
	else if(arr[1][1]=='x' && arr[2][2]=='x' && arr[0][0]=='-'){
		return 3;
	}
	else if(arr[0][2]=='x' && arr[1][1]=='x' && arr[2][0]=='-'){
		return 4;
	}
	else if(arr[0][2]=='x' && arr[2][0]=='x' && arr[1][1]=='-'){
		return 5;
	}
	else if(arr[1][1]=='x' && arr[2][0]=='x' && arr[0][2]=='-'){
		return 6;
	}
	else if(arr[0][0]=='x' && arr[0][1]=='x' && arr[0][2]=='-'){
		return 7;
	}
	else if(arr[0][0]=='x' && arr[0][2]=='x' && arr[0][1]=='-'){
		return 8;
	}
	else if(arr[0][1]=='x' && arr[0][2]=='x' && arr[0][0]=='-'){
		return 9;
	}
	else if(arr[1][0]=='x' && arr[1][1]=='x' && arr[1][2]=='-'){
		return 10;
	}
	else if(arr[1][1]=='x' && arr[1][2]=='x' && arr[1][0]=='-'){
		return 11;
	}
	else if(arr[1][0]=='x' && arr[1][2]=='x' && arr[1][1]=='-'){
		return 12;
	}
	else if(arr[2][0]=='x' && arr[2][1]=='x' && arr[2][2]=='-'){
		return 13;
	}
	else if(arr[2][1]=='x' && arr[2][2]=='x' && arr[2][0]=='-'){
		return 14;
	}
	else if(arr[2][0]=='x' && arr[2][2]=='x' && arr[2][1]=='-'){
		return 15;
	}
	else if(arr[0][0]=='x' && arr[1][0]=='x' && arr[2][0]=='-'){
		return 16;
	}
	else if(arr[1][0]=='x' && arr[2][0]=='x' && arr[0][0]=='-'){
		return 17;
	}
	else if(arr[0][0]=='x' && arr[2][0]=='x' && arr[1][0]=='-'){
		return 18;
	}
	else if(arr[0][1]=='x' && arr[1][1]=='x' && arr[2][1]=='-'){
		return 19;
	}
	else if(arr[1][1]=='x' && arr[2][1]=='x' && arr[0][1]=='-'){
		return 20;
	}
	else if(arr[0][1]=='x' && arr[2][1]=='x' && arr[1][1]=='-'){
		return 21;
	}
	else if(arr[0][2]=='x' && arr[1][2]=='x' && arr[2][2]=='-'){
		return 22;
	}
	else if(arr[1][2]=='x' && arr[2][2]=='x' && arr[0][2]=='-'){
		return 23;
	}
	else if(arr[0][2]=='x' && arr[2][2]=='x' && arr[1][2]=='-'){
		return 24;
	}
	else{
		return 0;
	}
}

int smarto(char arr[3][3]){
	if(arr[0][0]=='o' && arr[1][1]=='o' && arr[2][2]=='-'){
		return 1;
	}
	else if(arr[0][0]=='o' && arr[2][2]=='o' && arr[1][1]=='-'){
		return 2;
	}
	else if(arr[1][1]=='o' && arr[2][2]=='o' && arr[0][0]=='-'){
		return 3;
	}
	else if(arr[0][2]=='o' && arr[1][1]=='o' && arr[2][0]=='-'){
		return 4;
	}
	else if(arr[0][2]=='o' && arr[2][0]=='o' && arr[1][1]=='-'){
		return 5;
	}
	else if(arr[1][1]=='o' && arr[2][0]=='o' && arr[0][2]=='-'){
		return 6;
	}
	else if(arr[0][0]=='o' && arr[0][1]=='o' && arr[0][2]=='-'){
		return 7;
	}
	else if(arr[0][0]=='o' && arr[0][2]=='o' && arr[0][1]=='-'){
		return 8;
	}
	else if(arr[0][1]=='o' && arr[0][2]=='o' && arr[0][0]=='-'){
		return 9;
	}
	else if(arr[1][0]=='o' && arr[1][1]=='o' && arr[1][2]=='-'){
		return 10;
	}
	else if(arr[1][1]=='o' && arr[1][2]=='o' && arr[1][0]=='-'){
		return 11;
	}
	else if(arr[1][0]=='o' && arr[1][2]=='o' && arr[1][1]=='-'){
		return 12;
	}
	else if(arr[2][0]=='o' && arr[2][1]=='o' && arr[2][2]=='-'){
		return 13;
	}
	else if(arr[2][1]=='o' && arr[2][2]=='o' && arr[2][0]=='-'){
		return 14;
	}
	else if(arr[2][0]=='o' && arr[2][2]=='o' && arr[2][1]=='-'){
		return 15;
	}
	else if(arr[0][0]=='o' && arr[1][0]=='o' && arr[2][0]=='-'){
		return 16;
	}
	else if(arr[1][0]=='o' && arr[2][0]=='o' && arr[0][0]=='-'){
		return 17;
	}
	else if(arr[0][0]=='o' && arr[2][0]=='o' && arr[1][0]=='-'){
		return 18;
	}
	else if(arr[0][1]=='o' && arr[1][1]=='o' && arr[2][1]=='-'){
		return 19;
	}
	else if(arr[1][1]=='o' && arr[2][1]=='o' && arr[0][1]=='-'){
		return 20;
	}
	else if(arr[0][1]=='o' && arr[2][1]=='o' && arr[1][1]=='-'){
		return 21;
	}
	else if(arr[0][2]=='o' && arr[1][2]=='o' && arr[2][2]=='-'){
		return 22;
	}
	else if(arr[1][2]=='o' && arr[2][2]=='o' && arr[0][2]=='-'){
		return 23;
	}
	else if(arr[0][2]=='o' && arr[2][2]=='o' && arr[1][2]=='-'){
		return 24;
	}
	else{
		return 0;
	}

}


int randomcompx(){
	int x;
	x=rand()%3;
	return x;
}

int randomcompy(){
	int y;
	y=rand()%3;
	return y;
}

char scanuser(){
	char user;
	printf("PLEASE MAKE YOUR MOVE PRESS 'X' OR 'O'\n");
	scanf("%c",&user);
	return user;
}
int scanx(){
	int x;
	printf("CHOOSE YOUR DESIRED ROW\n");
	scanf("%d",&x);
	return x;
}
int scany(){
	int y;
	printf("CHOOSE YOUR DESIRED COLUMN\n");
	scanf("%d",&y);
	return y;	
}

int main(){
	char arr[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c ",arr[i][j]);		
		}
		printf("\n");
	}
	srand((unsigned)time(NULL));
	int x,y,z,k,j,i,compx,compy;
	char user;
	user=scanuser();
	x=scanx();
	y=scany();
	if(x!=0)
		x=x-1;
	if(y!=0)
		y=y-1;
	arr[x][y]=user;
	displayuser(arr);
	if(user=='x'){
		while(1){
			compx=rand()%3;
			compy=rand()%3;
			if(arr[compx][compy]=='-'){
				arr[compx][compy]='o';
				break;
			}
		}		
		displaysys(arr);
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		k=smartx(arr);
		switch(k){
			case 0:
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		

				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);

				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		i=smarto(arr);
		switch(i){
			case 0:
				break;
			case 1:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 2:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 3:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 4:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 5:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 6:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 7:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 8:
				arr[0][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 9:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 10:
				arr[1][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 11:
				arr[1][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 12:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 13:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 14:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 15:
				arr[2][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 16:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 17:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 18:
				arr[1][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 19:
				arr[2][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 20:
				arr[0][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 21:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 22:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 23:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 24:
				arr[1][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;														
		}
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}	
		k=smartx(arr);
		switch(k){
			case 0:
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		

				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);

				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		i=smarto(arr);
		switch(i){
			case 0:
				break;
			case 1:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 2:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 3:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 4:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 5:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 6:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 7:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 8:
				arr[0][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 9:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 10:
				arr[1][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 11:
				arr[1][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 12:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 13:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 14:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 15:
				arr[2][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 16:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 17:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 18:
				arr[1][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 19:
				arr[2][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 20:
				arr[0][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 21:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 22:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 23:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 24:
				arr[1][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;														
		}
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		displayuser(arr);
		k=smartx(arr);
		switch(k){
			case 0:
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		

				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);

				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		i=smarto(arr);
		switch(i){
			case 0:
				break;
			case 1:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 2:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 3:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 4:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 5:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 6:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 7:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 8:
				arr[0][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 9:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 10:
				arr[1][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 11:
				arr[1][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 12:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 13:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 14:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 15:
				arr[2][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 16:
				arr[2][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 17:
				arr[0][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 18:
				arr[1][0]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 19:
				arr[2][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 20:
				arr[0][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 21:
				arr[1][1]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 22:
				arr[2][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 23:
				arr[0][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 24:
				arr[1][2]='o';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;														
		}
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		k=smartx(arr);
		switch(k){
			case 0:
				z=checkx(arr);
				j=checko(arr);
				if(z==0 && j==0){
					printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
					exit(-1);
				}
				else{
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);

				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='o';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='o';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		z=checkx(arr);
		j=checko(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
	}
	else if(user=='o'){
		while(1){
			compx=rand()%3;
			compy=rand()%3;
			if(arr[compx][compy]=='-'){
				arr[compx][compy]='x';
				break;
			}
		}		
		displaysys(arr);
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		k=smarto(arr);
		switch(k){
			case 0:
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		

				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		i=smartx(arr);
		switch(i){
			case 0:
				break;
			case 1:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 2:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 3:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 4:
				arr[2][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 5:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 6:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 7:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 8:
				arr[0][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 9:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 10:
				arr[1][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 11:
				arr[1][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 12:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 13:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 14:
				arr[2][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 15:
				arr[2][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 16:
				arr[2][0]='x';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 17:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 18:
				arr[1][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 19:
				arr[2][1]='x';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 20:
				arr[0][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 21:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 22:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 23:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 24:
				arr[1][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;														
		}
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		k=smarto(arr);
		switch(k){
			case 0:
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		

				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		i=smartx(arr);
		switch(i){
			case 0:
				break;
			case 1:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 2:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 3:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 4:
				arr[2][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 5:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 6:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 7:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 8:
				arr[0][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 9:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 10:
				arr[1][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 11:
				arr[1][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 12:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 13:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 14:
				arr[2][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 15:
				arr[2][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 16:
				arr[2][0]='x';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 17:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 18:
				arr[1][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 19:
				arr[2][1]='x';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 20:
				arr[0][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 21:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 22:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 23:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 24:
				arr[1][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;														
		}
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(k==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		k=smarto(arr);
		switch(k){
			case 0:
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		

				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}
		x=scanx();
		y=scany();
		if(x!=0)
			x=x-1;
		if(y!=0)
			y=y-1;
		if(arr[x][y]=='-')
			arr[x][y]=user;
		else{
			printf("YOU ENTRY IS INVALID\n");
			x=scanx();
			y=scany();
			if(x!=0)
				x=x-1;
			if(y!=0)
				y=y-1;
			arr[x][y]=user;
		}
		displayuser(arr);
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		i=smartx(arr);
		switch(i){
			case 0:
				break;
			case 1:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 2:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 3:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 4:
				arr[2][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 5:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 6:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 7:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 8:
				arr[0][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 9:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 10:
				arr[1][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 11:
				arr[1][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 12:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 13:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 14:
				arr[2][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 15:
				arr[2][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 16:
				arr[2][0]='x';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 17:
				arr[0][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 18:
				arr[1][0]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 19:
				arr[2][1]='x';
				displaysys(arr);
				j=checko(arr);
				if(j==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 20:
				arr[0][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 21:
				arr[1][1]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 22:
				arr[2][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 23:
				arr[0][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;
			case 24:
				arr[1][2]='x';
				displaysys(arr);
				z=checkx(arr);
				if(z==1){
					printf("BETTER LUCK NEXT TIME KID :)\n");
					exit(-1);
				}
				break;														
		}
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}
		k=smarto(arr);
		switch(k){
			case 0:
				z=checko(arr);
				j=checkx(arr);
				if(z==0 && j==0){
					printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
					exit(-1);
				}
				else{
				while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}
				}		
				displaysys(arr);
				break;
			case 1:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 2:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 3:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 4:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 5:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 6:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
	
				}
				displaysys(arr);
				break;
			case 7:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 8:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 9:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 10:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 11:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 12:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 13:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 14:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 15:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 16:
				if(arr[2][0]=='-')
					arr[2][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 17:
				if(arr[0][0]=='-')
					arr[0][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 18:
				if(arr[1][0]=='-')
					arr[1][0]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 19:
				if(arr[2][1]=='-')
					arr[2][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 20:
				if(arr[0][1]=='-')
					arr[0][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 21:
				if(arr[1][1]=='-')
					arr[1][1]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 22:
				if(arr[2][2]=='-')
					arr[2][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 23:
				if(arr[0][2]=='-')
					arr[0][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
			case 24:
				if(arr[1][2]=='-')
					arr[1][2]='x';
				else{
					while(1){
						compx=rand()%3;
						compy=rand()%3;
						if(arr[compx][compy]=='-'){
							arr[compx][compy]='x';
							break;
						}
					}		
				}
				displaysys(arr);
				break;
		}		
		z=checko(arr);
		j=checkx(arr);
		if(z==1){
			printf("CONGO!! YOU WON THE GAME SMARTIE\n");
			exit(-1);
		}
		else if(j==1){
			printf("BETTER LUCK NEXT TIME KID :)\n");
			exit(-1);
		}
		else if(z==0 && j==0){
			printf("YOUR INTELLIGENCE MATCH TO OUR SYSTEM :(\n");
			exit(-1);
		}

	}
}		   
