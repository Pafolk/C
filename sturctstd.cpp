#include<stdio.h>
#include<string.h>
struct student{
	char stdcode[15]; // 13 word if >13 cant enter name
	char name[61]; 
	float gpa;
};

int main(){
	struct student std[4];
//	get data student
	for(int i = 0; i < 4; i++){
		printf("Enter Studentcode : ");
		fgets(std[i].stdcode, sizeof(std[i].stdcode), stdin);
		
//		deleat newline from stdcode
		size_t len = strlen(std[i].stdcode);
		if(len > 0 && std[i].stdcode[len-1] == '\n'){
			std[i].stdcode[len-1] = '\0';
		
		}
		
		printf("Enter Name : ");
		fgets(std[i].name, sizeof(std[i].name), stdin);
		len = strlen(std[i].name);
        if (len > 0 && std[i].name[len - 1] == '\n') {
            std[i].name[len - 1] = '\0';
        }
		
		printf("Enter Gpa : ");
		scanf("%f",&std[i].gpa);
		printf("==============================\n");

		 while (getchar() != '\n');
	}
	
//	show data student
	for(int i = 0; i<4; i++){
		printf("Student %d:\n", i + 1);
		printf("Studentcode: %s\n", std[i].stdcode);
		printf("Name: %s\n",std[i].name);	
		printf("GPA: %.2f\n",std[i].gpa);
	}
	
	return 0;
}

