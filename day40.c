 


 #include <stdio.h>

 void diatraverse(int row, int col, int matrix[row][col]){
  int start, end;
  for(int i=0; i<row+col-1; i++){
       if(i%2 == 0){
             start = (i<row)? i : row-1;
           end = i-start; 
             while (start >= 0 && end<col){
                printf("%d ", matrix[start][end]);
                 start--;
                 end++;
           }
        }
    else{
          end = (i<col)? i: col-1;
          start = i-end;

          while(end>=0 && start<row){
            printf("%d ", matrix[start][end]);
               start++;
               end--;
          }
         }
    }
 }
 int main(){
    int row, col;
    printf("Enter row and column: ");
    scanf("%d %d", &row, &col);

     int matrix[row][col];
     printf("Enter the elements of matrix: ");
   for(int i=0; i<row; i++){
         for(int j=0; j<col; j++){
             scanf("%d", &matrix[i][j]);
         }
   }

   diatraverse(row, col, matrix);

    return 0;
 }





