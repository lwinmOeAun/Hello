#include <stdio.h>

void replace(int pInt[8]);

int indexnumber(int i);

int main(){
    int num[]={1,2,3,4,5,6,7,8};int conntrol=0;
    printf(" if you want to replace numbers with an index then press 1 or other to delete");
    scanf("%d",&conntrol);
    if(conntrol==1){
        replace(num);
    }
    if(conntrol!=1){
        int delete[]={};int dele=0;int nindex[]={};
        printf(" we have an array with length  8\n");
        printf("How many index you want to delete \n ");
        scanf("%d",&dele);
        int d=dele;
        for(int u=0;u<d;u++){

//            int delind=0;
//            printf("Enter the index of the number to delete \n");
//            scanf("%d",&delind);
//            nindex[u]=delind;

            int numb=0;
            printf("Enter  the index number you want to delete and replace\n ");
            scanf("%d",&numb);
            nindex[u]=numb;

        }


        for(int j=0;j<8;j++){
            int conn=0;
            for(int h=0;h<d;h++){
                if(j==nindex[h]){
                    printf("you deleted %d\n",num[j]);
                    conn=1;
                }
            }
            if(conn==0){
                printf("the original value is %d\n",num[j]);
            }


        }
    }



}

void replace(int pInt[8]) {
    int index=0;
    int c=sizeof(pInt);
    printf("we have an array with the length of %d\n", c);
    printf("How many index you want to  replace\n ");
    scanf("%d",&index);int i=0;
    int indexnum[index];int addnum[index];
        for(int n=0;n<index;n++){

            int number=0;
            printf("Enter  the index number you want to delete and replace\n ");
            scanf("%d",&number);
            indexnum[n]=number;
        }
        for(int y=0;y<index;y++){
            int add=0;
            printf("Enter the number that you want to add in replacement \n");
            scanf("%d",&add);
            addnum[y]=add;
        }
        for(int o=0;o<index;o++){
            printf("index number is %d\n",indexnum[o]);
        }
        for(int i=0;i<c;i++){
            int control=0;
            for(int j=0;j<index;j++) {
                if (i == indexnum[j]) {

                    pInt[i] = addnum[i];
                    printf(" the replacement number in index %d is %d \n", i, pInt[i]);
                    control=1;
                }
            }
            if(control==0){
                printf("The original number  in index %d is %d \n",i,pInt[i]);
            }

            }
        }


