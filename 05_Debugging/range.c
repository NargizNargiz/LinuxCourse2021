#include <stdio.h>              
                                
int main(int argc, char* argv[])
{                               
	int i; 
	int res;
	int step;
	int m;
	int n;
    if (argc == 1){
    	printf("Программа range - генератор арифметической прогрессии\n");
    	printf("С одним параметром N — выводит в столбик последовательность [0, 1, … N-1] \n");	
    	printf("С двумя — M, N — последовательность [M, M+1, … N-1] \n" );
    	printf("С тремя — M, N, S — последовательность [M, M+S, M+2S, … N-1] \n" );
    }else{
    	int m,n, s;
    	if (argc == 2){
    		for (i =0; i < atoi(argv[1]); i++){
    			printf("%d ", i);
    		}
    	}else{
    		if (argc == 3){
    			m = atoi(argv[1]);
    			n = atoi(argv[2]);
    			if (m > n){
    				printf("M должно быть меньше N\n");
    				return 0;
    			}else{
    				// начало m
    				// текущее значение i
    				// n - end
    				// шаг - step
    				i = m;
    				step = 1;
    				while (i < n){
    					printf("%d ", i);    					
    					i+=step;
    				}
    			}
    		}else{
    			if (argc == 4){
					m = atoi(argv[1]);
    				n = atoi(argv[2]);
    				s = atoi(argv[3]);
    				i = 0;
    				res = 0;
    				step = 0;
    				while( res < n ){
    					step = i*s;
    					res = m + step;
    					printf("%d ", res);
    					i++;
    				}
    			}
    		}
    	}
    }

    printf("\n");  
    return 0;                   
}                               
