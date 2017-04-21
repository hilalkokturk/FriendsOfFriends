
#include <stdio.h>
#include <stdlib.h>

int main()
{
int people_number;
int edge_number;
int id_p;
int id_n;
int n_id;
int depth;
char query;
int query_id;

scanf("%d", &people_number);
scanf("%d", &edge_number);

int n_id_array[10];
int n_id_array2[10];
int graph[people_number][people_number];

for(int i=0;i<10;i++){
n_id_array[i]=15;
}

for(int i=0;i<10;i++){
n_id_array2[i]=15;
}

for(int i=0;i<people_number;i++){
	for(int j=0;j<people_number;j++){
	graph[i][j]=0;

}}
int people_number2 = people_number;

for(int i=0;i<edge_number;i++){
scanf("%d %d", &id_p, &id_n);
graph[id_p-1][id_n-1]=1;
graph[id_n-1][id_p-1]=1;
}


while(scanf("%s %d %d", &query, &query_id, &depth)!=EOF){
printf("%c %d %d\n", query, query_id, depth);
if(query =='Q'||query=='q'){
if(depth==0){
   for(int i = 0; i<people_number2; i++){ // ilk önce 1. dereceden komşuları bul.

            if(graph[query_id-1][i]==1){
                printf("%d\n" ,i+1);
                n_id=i+1;                 // n_id'yi komşu idsine eşitle.
                n_id_array[i]=i+1;


            }
        }
        for(int i =0;i<people_number2;i++){
            for(int j=0;j<people_number2;j++){
                if(graph[n_id_array[i]-1][j]==1){
                    if(j+1 != query_id){
                            if(j+1!=n_id_array[0]&&j+1!=n_id_array[1]&&j+1!=n_id_array[2]&&j+1!=n_id_array[3]&&j+1!=n_id_array[4]&&
                               j+1!=n_id_array[5]&&j+1!=n_id_array[6]&&j+1!=n_id_array[7]&&j+1!=n_id_array[8]&&j+1!=n_id_array[9]){
                                printf("%d\n", j+1);
                                n_id_array2[j]=j+1;}



                    }
                }
            }
        }

 for(int i=0;i<people_number2;i++){
        for(int j=0;j<people_number2;j++){
            if(graph[n_id_array2[i]-1][j]==1){
                if(j+1 != query_id){
                           if(j+1!=n_id_array2[0]&&j+1!=n_id_array2[1]&&j+1!=n_id_array2[2]&&j+1!=n_id_array2[3]&&
                              j+1!=n_id_array2[4]&&j+1!=n_id_array2[5]&&
                              j+1!=n_id_array2[6]&&j+1!=n_id_array2[7]&&j+1!=n_id_array2[8]&&j+1!=n_id_array2[9]&&
                              j+1!=n_id_array[0]&&j+1!=n_id_array[1]&&j+1!=n_id_array[2]&&j+1!=n_id_array[3]&&j+1!=n_id_array[4]&&
                               j+1!=n_id_array[5]&&j+1!=n_id_array[6]&&j+1!=n_id_array[7]&&j+1!=n_id_array[8]&&j+1!=n_id_array[9]){
                                printf("%d\n", j+1);
                                n_id_array2[j]=j+1;}

                }
            }
        }
    }


}
if(depth ==1){
for(int i =0; i<people_number2; i++){
if(graph[query_id-1][i]==1){
printf("%d\n", i+1);
}
}
}

if(depth ==2){
 for(int i = 0; i<people_number2; i++){ // ilk önce 1. dereceden komşuları bul.

            if(graph[query_id-1][i]==1){
                printf("%d\n" ,i+1);
                n_id=i+1;                 // n_id'yi komşu idsine eşitle.
                n_id_array[i]=i+1;


            }
        }
        for(int i =0;i<people_number2;i++){
            for(int j=0;j<people_number2;j++){
                if(graph[n_id_array[i]-1][j]==1){
                    if(j+1 != query_id){
                            if(j+1!=n_id_array[0]&&j+1!=n_id_array[1]&&j+1!=n_id_array[2]&&j+1!=n_id_array[3]&&j+1!=n_id_array[4]&&
                               j+1!=n_id_array[5]&&j+1!=n_id_array[6]&&j+1!=n_id_array[7]&&j+1!=n_id_array[8]&&j+1!=n_id_array[9]){
                        printf("%d\n", j+1);}



                    }
                }
            }
        }
}


}}
return 0;
}

