#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){

    int i, j, l, c;
    int LA, CA, LB, CB;
       
	while(1){

		setlocale(LC_ALL, "Portuguese");
	    printf("\n - MULTIPLICA��O DE MATRIZES - \n \n");
	    
	    system("pause");

	    cout << "\n - MATRIZ A - \n";
	    cout << "\n * LINHA A: ";
	    cin >> LA;
	    cout << "\n * COLUNA A: ";
	    cin >> CA;

	    cout << "\n - MATRIZ B - \n";
	    cout << "\n * LINHA B: ";
	    cin >> LB;
	    cout << "\n * COLUNA B: ";
	    cin >> CB;
	
		float A[LA][CA];
	    float B[LB][CB];
	    float C[LA][CB];
	    float aloc;

		    if(CA!=LB)
		    {
   				setlocale(LC_ALL, "Portuguese");
		        cout << "\n\n\"COLUNA A\" não condiz com o valor \"LINHA B\". Para a multiplicação de matrizes ser realizada, esses valores devem ser iguais.";
				cout << "\n\n - DIGITE NOVAMENTE -\n\n";
		    }
		    
		    else
		    {
				cout << "\n - VALORES MATRIZ A \n \n";
			    	for(i=0; i<LA; i++)
			    	{
			    	    for(j=0; j<CA; j++)
			    	    {
			    			cout << " A [%d][%d] = ",i+1, j+1;
			            	cin >> A[i][j];
			        	}
			    	}
			    
				cout << " \n - VALORES MATRIZ B - \n \n";
			    	for(i=0; i<LB; i++)
			    	{
			    	    for(j=0; j<CB; j++)
			    	    {
			    	        cout << " B [%d][%d] = ", i+1, j+1;
			    	        cin >> B[i][j];
			    	    }
			    	}
				
				system("pause");
				
//--------------------------------------------------------------------

				cout << "\n - MATRIZ A - \n \n";
				    for(i=0; i<LA; i++)
				    {
				        for(j=0; j<CA; j++)
				        {
				            if(j != (CA-1))
				                cout << " %.2f \t" << A[i][j];
				
				            else
				                cout << " %.2f \n" << A[i][j];
				        }
				    }
				
				cout << "\n - MATRIZ B - \n \n";
				    for(i=0; i<LB; i++)
				    {
				        for(j=0; j<CB; j++)
				        {
				            if(j != (CB-1))
				                cout << " %.2f \t" << B[i][j];
				
				            else
				                cout << " %.2f \n" << B[i][j];
				        }
				    }
				
				system("pause");

//--------------------------------------------------------------------

				    for(l=0; l<LA; l++)
				    {
				        for(c=0; c<CB; c++)
				        {
				            aloc = 0.0;
				            for(i=0; i<CA; i++)
				            {
				                aloc = aloc + A[l][i]*B[i][c];
				            }
				            C[l][c] = aloc;
				        }
				    }
								
				setlocale(LC_ALL, "Portuguese");
		    	cout << "\n - MULTIPLICA��O DE A x B - \n \n";
				
			    cout << "\n - RESULTADO - \n \n";

			    for(i=0; i<LA; i++)
			    {
			        for(j=0; j<CB; j++)
			        {
			            if(j != (CB-1))
			                cout << " %.2f \t", C[i][j];
			            
			            else
			        	    cout << " %.2f \n", C[i][j];
			        }
			    }
			}
			   
		system("pause");
		system("cls");
	}
}