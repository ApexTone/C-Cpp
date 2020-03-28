#include<stdio.h>
struct coord{
  int x=0,y=0;
};
int main() {
  char area[12][12]={},copyArea[12][12]={};
  int xSize,ySize;
  int min_i=15,max_i=0,min_j=15,max_j=0;

  //input
  scanf(" %d %d",&xSize,&ySize);
  for(int i=1;i<=xSize;i++){
    for(int j=1;j<=ySize;j++){
        scanf(" %c",&area[i][j]);
        copyArea[i][j]=area[i][j];
    }
  }

  //Logic for area
  int stat=0;
  for(int i=1;i<=xSize;i++){
    for(int j=1;j<=ySize;j++){
        if(area[i][j]=='X'){
          if(area[i][j-1]=='.'){
            stat++;
          }
          if(area[i][j+1]=='.'){
            stat++;
          }
          if(area[i-1][j]=='.'){
            stat++;
          }
          if(area[i+1][j]=='.'){
            stat++;
          }

          if(stat>2){
            copyArea[i][j]='.';
          }
          else{ //copyArea[i][j]=='X'
          //get range to print
          if(i<min_i){min_i=i;}
          if(i>max_i){max_i=i;}
          if(j<min_j){min_j=j;}
          if(j>max_j){max_j=j;}
          }
        }
        stat=0;

    }
  }

      for(int i=min_i;i<=max_i;i++){
        for(int j=min_j;j<=max_j;j++){
            printf("%c",copyArea[i][j]);
      }
      printf("\n");
    }
  return 0;
}
