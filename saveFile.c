#include<stdio.h>
#include "customers.h"
void save(customers* head){
        FILE* fp=NULL;
        if(head==NULL){
                printf("nothing to save on file\n");
                return;
        }
        fp=fopen("readme.txt","wb");
        while(head!=NULL){
                fwrite(head,sizeof(customers)-8,1,fp);
                head=head->next;
        }
        fclose(fp);

}

