#include<stdio.h>
#include<math.h>
/*
int main(){
    int num;
    printf("enter the number;");
    scanf("%d",&num);
    int prime=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
           prime=0;
           
        
        }
    }
    if(prime){
        printf("prime num");
    }
    else{
        printf("not prime");
    }
    return 0;
}
*/


/*
int main(){
    int num;
    printf("enter the number;");
    scanf("%d",&num);
    int copy=num;
    int count=0;
    int summ=0;
    while(copy>0){
        copy=copy/10;
        count+=1;
        
    }
    copy=num;
    while(copy>0){
        summ+=pow(copy%10,count);
        copy=copy/10;
    }
    
    if(summ==num){
        printf("armstrong number");
    }else{
        printf("not armstrong");
    }

}

*/
/*
#include<stdlib.h>
#define elements 6

void setarray(int arr[]){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}

void printarray(int arr[]){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}


void findodd(int arr[]){
    for(int i=0;i<elements;i++){
        if(arr[i]%2!=0){
            printf("%d",arr[i]);
            
        }
    }
}

int main(){
     int arr[]={0};
     setarray(arr);
     printarray(arr);
     puts("\n");
     findodd(arr);

}
*/
#include<stdlib.h>
#define elements 6


/*
void setarray(int arr[]){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}

void printarray(int arr[]){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}

void findmin(int arr[]){
    int min=0;
    for(int i=0;i<elements;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    printf("%d",arr[min]);
}

int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    findmin(arr);

}

*/


//task2
/*
#define elements 6
void setarray(int arr[]){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}

void printarray(int arr[]){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}

void reverse(int arr[]){
    for(int i=elements-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}


int main(){
    int arr[]={0};
    setarray(arr);
    printarray(arr);
    puts("\n");
    reverse(arr);
}

*/


/*
#define elements 6
void setarray(int arr[]){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}

void printarray(int arr[]){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}

void selection(int arr[]){
    for(int i=0;i<elements;i++){
        int max=i;
        for(int j=i+1;j<elements;j++){
            if(arr[j]>arr[max]){
                max=j;}

        }
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
}

int main(){
    int arr[]={0};
    setarray(arr);
    printarray(arr);
    selection(arr);
    puts("\n");
    printarray(arr);
}


*/
/*
#define elements 6

void setarray(int arr[]){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}

void printarray(int arr[]){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}

void findmax(int arr[]){
    int max=0;
    for(int i=0;i<elements;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
        
    }
    printf("%d",arr[max]);
    int max2=0;
    for(int i=0;i<elements;i++){
        if(arr[i]>arr[max2]&&arr[i]!=arr[max]){
            max2=i;
        }
    }
    printf("%d",arr[max2]);
}

int main(){
    int arr[]={0};
    setarray(arr);
    printarray(arr);
    findmax(arr);

}
*/
/*
#include<time.h>
#define n 3
#define m 3


void setarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
}

void printarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}





void summ(int col,int row,int arr[row][col],int arr2[row][col],int arr3[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }

}

int main(){
    srand(time(NULL));
    int arr[n][m];
    int arr2[n][m];
    int arr3[n][m];
    setarray(n,m,arr);
    printarray(n,m,arr);
    puts("\n");
    setarray(n,m,arr2);
    printarray(n,m,arr2);
    puts("\n");

    summ(n,m,arr,arr2,arr3);
    printarray(n,m,arr3);
}

*/


/*
#define n 3
#define m 3


void setarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
}

void printarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int summ(int row,int col,int arr[row][col]){
    int summ=0;
     for(int i=0;i<row;i++){
       
        summ+=arr[i][i];
         
    }
     printf("%d",summ);
}


int main(){
    int arr[n][m];
    setarray(n,m,arr);
    printarray(n,m,arr);
    summ(n,m,arr);
    
}
*/


#define n 3
#define m 3
/*
void setarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
}

void printarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int summ(int row,int col,int arr[row][col]){
    int summ=0;
     for(int i=0;i<row;i++){
       
        summ+=arr[i][row-1-i];
         
    }
     printf("%d",summ);
}


int main(){
    int arr[n][m];
    setarray(n,m,arr);
    printarray(n,m,arr);
    summ(n,m,arr);
    
}*/

/*
void setarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
}

void printarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int summ(int row,int col,int arr[row][col]){
    int summ=0;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            summ+=arr[i][j];
        }
        printf("%d",summ);
        summ=0;   
    }
    
}




int summ2(int row,int col,int arr[row][col]){
    int summ=0;
     for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            summ+=arr[i][j];
        }
        printf("%d",summ);
        summ=0;   
    }
    
}


int main(){
    int arr[n][m];
    setarray(n,m,arr);
    printarray(n,m,arr);
    summ(n,m,arr);

    puts("\n");
    summ2(n,m,arr);
    
}

*/


/*
void setarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }
    }
}

void printarray(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}



void zero(int col,int row,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                arr[i][j]=0;
            
            }
        }
        ;
    }
}

int main(){
    int arr[n][m];
    setarray(n,m,arr);
    printarray(n,m,arr);
    zero(n,m,arr);
    puts("\n");
    printarray(n,m,arr);
}
*/
#include<string.h>
/*
int main(){
    char str[100];
    fgets(str,100,stdin);
    int l=strlen(str);
    for(int i=l;i>=0;i--){
        printf("%c",str[i]);
    }
}
*/

/*
int main(){
    char str1[20];
    char str2[20];
    printf("enter the string 1 ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("enter the string 2 ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    int test=strcmp(str1,str2);
    if(test==0){
        printf("same");

    }else{
        printf("not same");
    }



}

*/


#include<ctype.h>
/*
int main(){
    char str[20];
    printf("enter the string");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int counta=0;
    int countd=0;
    int counts=0;
    for(int i=0;i<strlen(str);i++){
        if(isalpha(str[i])){
            counta++;
        }if(isdigit(str[i])){
            countd++;

        }if(isspace(str[i])){
            counts++;
        }
    }
    printf("%d %d %d",counta,countd,counts);

}
*/

/*
int main(){
    char str1[50];
    printf("enter the string");
    fgets(str1,100,stdin);
    for(int i=0;i<strlen(str1)-1;i++){
        int min=i;
        for(int j=i+1;j<strlen(str1);j++){
            if(str1[min]>str1[j]){
                min=j;
            }
        }
        char temp=str1[i];
        str1[i]=str1[min];
        str1[min]=temp;

    }
    printf("%s",str1);
}
*/


/*
int main(){
    char str1[50];
    printf("enter the string");
    fgets(str1,100,stdin);
    for(int i=0;i<strlen(str1);i++){
        if(islower(str1[i])){
            str1[i]=toupper(str1[i]);

        }

        else if (isupper(str1[i])){
            str1[i]=tolower(str1[i]);
        }
    }
    printf("%s",str1);
}

*/

/*
int function(char *sentence,char *word){
    int count=0;
    int lengths=strlen(sentence);
    int lengthw=strlen(word);
    for(int i=0;i<lengths;i++){
        if(strncmp(&sentence[i],word,strlen(word))==0){
            count++;
        }
        
        
    }
    return count;
}

int main(){
    char str1[50];
    printf("enter the string");
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    char word[20];
    printf("enter the word");
    fgets(word,100,stdin);
    word[strcspn(word,"\n")]='\0';
   int count= function(str1,word);
   printf("%d",count);



}

*/


/*
int main(){
    char str1[50];
    printf("enter the string");
    fgets(str1,100,stdin);
    int count=0;
    str1[strcspn(str1,"\n")]='\0';
    for(int i=0;i<strlen(str1);i++){
        if(ispunct(str1[i])){
            count++;
        }
    
    }
    printf("%d",count);
}
*/



/*
void removeSpacesBetweenWords(FILE *inputFile, FILE *outputFile) {
    char *line=NULL;
    
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        char *token = strtok(line, " ");
        
        while (token != NULL) {
            fprintf(outputFile, "%s", token);
            token = strtok(NULL, " ");
            
            if (token != NULL) {
                fprintf(outputFile, " ");
            }
        }
    }
}

int main() {
    FILE *inputFile, *outputFile;
    
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    removeSpacesBetweenWords(inputFile, outputFile);

    printf("Spaces between words removed successfully.\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
*/ 


/*
void check(char *sentence,FILE *outputfile){
    char *token;
    token=strtok(sentence," ");
    while(token!=NULL){
        fprintf(outputfile,"%s",token);
        token=strtok(NULL," ,");
}
    }
    


int main(){
    char sentence[100];
    FILE *outputfile;
    printf("enter the sentence");
    fgets(sentence,sizeof(sentence),stdin);
    outputfile=fopen("output.txt","r+");
    check(sentence,outputfile);
    fclose(outputfile);
}
*/

/*
int main(){
    char str[100];
    char str1[10][10];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    int j=0;
    int st=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ' || str[i]=='\n'){
            str1[st][j]='\0';
            st++;
            j=0;
            
        }else{
            str1[st][j]=str[i];
            j++;
        
        }
    }


    for(int i=0;i<st;i++){
        printf("%s\n",str1[i]);
    }
}
*/

/*
void repeatedch(char *str){
    char st[256]={0};
    for(int i=0;i<strlen(str);i++){
        st[(int)(str[i])]++;
    }
    for(int i=0;i<256;i++){
        if(st[i]>1){
            printf("repeated chare %c ",(char)(i));
        }
    }
}



int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    repeatedch(str);
}
*/


/*
int vowel(char c){
    return (c=='a'||c=='e'||c=='o'||c=='u'||c=='i');
}

void reverse(char *str){
    int start=0;
    int end=strlen(str)-1;
    while(start<end){
        while(start<end&&!vowel(str[start])){
            start++;
        }

        while(start<end &&!vowel(str[end])){
            end--;
        }

        if(start<end){
            char temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
    }
}


int main(){
    char str[100];
    fgets(str,100,stdin);
    reverse(str);
    printf("%s",str);

}

*/

//malloc calloc
/*
int main(){
    int num;
    int sum=0;
    
    printf("enter the number");
    scanf("%d",&num);
    int *ptr=(int*)(calloc(n,sizeof(int)));
    for(int i=0;i<num;i++){
        ptr[i]=rand()%10;
        printf("%d",ptr[i]);
        sum+=ptr[i];

    }
    printf("%d",sum);
    free(ptr);
    return 0;
}
*/

/*
int *setarray(int size){
    int *ptr=(int*)(calloc(size,sizeof(int)));
    for(int i=0;i<size;i++){
        ptr[i]=rand()%10;

    }
    return ptr;
}

int main(){
    int *vector1=setarray(5);
    int *vector2=setarray(10);
    for(int i=0;i<5;i++){
        printf("%d",vector1[i]);
    }
    puts("----");

    for(int i=0;i<10;i++){
        printf("%d",vector2[i]);
    }

    puts("-----");
    vector2=realloc(vector2,15);
    for(int i=10;i<=15;i++){
        vector2[i]=vector1[i-10];
      
    }



    for(int i=0;i<15;i++){
        printf("%d",vector2[i]);
    }
}
*/


/*
int *setarray(int size){
    int *arr=(int*)(malloc(size*sizeof(int)));
    for(int i=0;i<size;i++){
        arr[i]=rand()%10;
    }
    return arr;

}

int main(){
   int *vector1=setarray(5);
   FILE *file=NULL;
   file=fopen("file.txt","w+");
    int min=0;
    for(int i=0;i<5;i++){
        if(vector1[i]<vector1[min]){
            min=i;
        }
    }

    for(int i=0;i<5;i++){
        fprintf(file,"%d ",vector1[i]);
    }

    fprintf(file,"%d",vector1[min]);
    fclose(file);
    free(vector1);
}


*/
/*
void reverse(char *word ,int start,int stop){
    while(start<stop){
        char temp=word[start];
        word[start]=word[stop];
        word[stop]=temp;
        start++;
        stop--;
    }
}

void eachword(char *str){
   int  start=0;
    int stop;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '||str[i]=='\0'||str[i]=='\n'){
            stop=i-1;
            reverse(str,start,stop);
            start=i+1;
        }
    }
}

int main(){
    char str[100];
    printf("enter the str");
    fgets(str,100,stdin);
    eachword(str);
    printf("%s",str);
}
*/

/*
int main(){
    char str[20];
    int count=0;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            if(count>0){
                str[i]=' ';
                count=0;
            }else{
                count++;
            }
        }
    }
   
    printf("%s",str);
}
*/



/*
#define n 3

typedef struct Person{
    char name[50];
    int cityno;
    float salary;
}person;

void swap(person *a,person *b){
    person temp=*a;
    *a = *b;
    *b = temp;


}





void bubble(person arr[],int n){
    for(int i=0;i<n-1;i++){
       
        for(int j=0;j<n-i-1;j++){
            if(arr[j].salary<arr[j+1].salary){
                swap(&arr[j],&arr[j+1]);
                
            }
        }
       
    }
    
}





int main(){
    person p[n];
    
   
    strcpy(p[0].name,"george owrel");
    strcpy(p[1].name,"ggg jjj");
    p[0].cityno=1432;
    p[1].salary=54.9;
    p[0].cityno=1876;
    p[1].salary=245.4;
    for(int i=0;i<2;i++){
        printf("name %s salary %lf cityno %d",p[i].name,p[i].salary,p[i].cityno);
    }
    bubble(p,n);
    printf("after sorting");
    for(int i=0;i<2;i++){
        printf("name %s salary %lf cityno %d",p[i].name,p[i].salary,p[i].cityno);
    }
    return 0;
}
*/


/*
#define ARRAY_SIZE 3

typedef struct Person {
    char name[50];
    int cityno;
    float salary;
} person;

void swap(person *a, person *b) {
    person temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(person arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size- i - 1; j++) {
            if (arr[j].salary < arr[j + 1].salary) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    person p[ARRAY_SIZE];  // Use n as the size of the array
    
    strcpy(p[0].name, "george owrel");
    p[0].cityno = 1432;
    p[0].salary = 54.9;

    strcpy(p[1].name, "ggg jjj");
    p[1].cityno = 1876;
    p[1].salary = 245.4;

    printf("Before sorting:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Name: %s, City No: %d, Salary: %lf\n", p[i].name, p[i].cityno, p[i].salary);
    }

    bubble(p, ARRAY_SIZE);

    printf("\nAfter sorting based on salary:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Name: %s, City No: %d, Salary: %lf\n", p[i].name, p[i].cityno, p[i].salary);
    }

    return 0;
}
*/


/*
int main(){
    char str[50]="salam  sevinc necesen.";
    char word[50];
    int j=0;
    for(int i=0;i<strlen(str)-1;i++){
        if(isblank(str[i])&& isalpha(str[i+1])){
            word[j]=str[i];
            j++;
        }else if(isalpha(str[i])){
            word[j]=str[i];
            j++;

        }else if(str[i]=='.'&& isblank(str[i+1])){
            word[j]=str[i];
            j++;
        }
        
    
    }
    
    word[j]='\0';
    printf("%s",word);

}
*/


/*
int main(){
    char name[50]="salam sevinc  necesen";
    char *token=strtok(name," ");
    
    char sentence[4][20];
    
    int i=0;
    
    while(token!=NULL){
        strcpy(sentence[i],token);
        token=strtok(NULL," ");
        i++;
    }
    for(int i=0;i<4;i++){
        printf("%s ",sentence[i]);
    }
}
*/

/*
void selection(char *str[]){
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
            if(strcmp(str[j],str[min])<0){
                min=j;
            }
        }
        char *temp=str[i];
        str[i]=str[min];
        str[min]=temp;

    }
}


int main(){
    char *str[30]={"lenkeran","baki","agcabedi","hovsan","turkan","berde"};
    selection(str);
    for(int i=0;i<6;i++){
        printf("%s\n",str[i]);
    }
}
*/

/*
#define elements 6
void selection(int arr[]){
    for(int i=0;i<elements-1;i++){
        int min=i;
        for(int j=i+1;j<elements;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}


void setarray(int *arr){
    for(int i=0;i<elements;i++){
        arr[i]=rand()%10;
    }
}


void printarray(int *arr){
    for(int i=0;i<elements;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[elements]={0};
    setarray(arr);
    printarray(arr);
    selection(arr);
    printarray(arr);



}


*/







/*
int maxx(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
       if(arr[i]>max){
        max=arr[i];}
    
    }
    return max;
}


int minn(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
       if(arr[i]<min){
        min=arr[i];}
        
        
    }
    return min;
}





int main(){
    int col,row;
    printf("enter the row and col");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%10;
        }

    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    FILE *file=NULL;
    file=fopen("test.c","w+");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            fprintf(file,"%d",arr[i][j]);
        }
    }


    for(int i=0;i<row;i++){
        int arr2[col];
        int summ=0;
        for(int j=0;j<col;j++){
            arr2[j]=arr[i][j];
            summ+=arr[i][j];
        }
        summ=summ-minn(arr2,col)-maxx(arr2,col);
        printf("Sum for row %d: %d\n", i+1, summ);
        fprintf(file,"Sum for row %d: %d\n", i+1, summ);
      
    }
    
}
*/

/*

typedef struct Person{
    int ID;
    char name[50];
    char surname[50];

}person;



int main(){
   person p1[2];
   strcpy(p1[0].name,"hhh");
   strcpy(p1[1].name,"jjjj");
   strcpy(p1[2].name,"sss");
   strcpy(p1[0].surname,"ismayilov");
   strcpy(p1[1].surname,"hesenov");
   strcpy(p1[2].surname,"jafarov");
   for(int i=0;i<2;i++){
    printf("%s %s\n",p1[i].name,p1[i].surname);
   }


}

*/


/*
void display(unsigned int value){
    unsigned int display=1<<31;
    for(size_t i=1;i<=32;i++){
        putchar(value&display ?'1':'0');
        value<<=1;
        if(i%8==0){
            putchar(' ');
        }
    }
    puts("");
}


int main(){
    char s[5]="abcd";
    unsigned int num=s[0];
    for(size_t i=0;i<4;i++){
        display(num);
        num<<=8;
        num=num|s[i];
        printf("%c",s[i]);
    }
    char s2[5];
    unsigned int mask=4278190080;
    for(size_t i=0;i<5;i++){
        s2[i]=(num&mask)>>(24-8*i);
        mask>>=8;
    }
    for(size_t i=0;i<5;i++){
        printf("%c",s2[i]);
    }
    
}

*/



int ispalindrom(char *str){
    int len=strlen(str);

    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    char line[25],digits[25]="";
    printf("enter the str");
    fgets(line,100,stdin);
    line[strcspn(line,"\n")]='\0';
    for(int i=0;i<strlen(line);i++){
        if(isdigit(line[i])){
            char temp[2];
            temp[0]=line[i];
            strcat(digits,temp);
        }
    }
    printf("digits %s\n",digits);
    if(ispalindrom(digits)==1){
        printf("not palindrom");
    }else{
        printf("palindrom");
    }
    return 0;

}















