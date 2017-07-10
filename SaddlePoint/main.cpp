#include <iostream>
#include <vector>

int main() {

    int i,j,n,number,max,min,x,flag = 0;
    /*
     * For now, assuming a matrix of maximum size 10X10
     */
    std::vector<std::vector<int>> matrix(10);

    std::cout<<"Enter the order of the matrix:";
    std::cin>>n;

    std::cout<<"Enter your entries for the input matrix:";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cin>>number;
          matrix[i].push_back(number);
        }
    }

    for(int i=0;i<n;i++)
    {
        min = matrix[i][0];
        x = 0;
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]<min)
            {
                min = matrix[i][j];
                x = j;
            }
        }


        max = matrix[0][x];
        for(int k=0;k<n;k++)
        {
            if(matrix[k][x]>max)
            {
                max = matrix[k][x];
            }
        }

       /*
        * If minimum in row is same as maximum in the column, that position is the saddle point
        */
        if(max==min)
        {
            std::cout<<"Saddle point exists = "<<max;
            flag=1;
        }
    }

    if(flag==0)
    {
        std::cout<<"There is no saddle point for the matrix";
    }
}



