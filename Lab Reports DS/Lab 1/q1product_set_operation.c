/*Write a program that takes two or more sets as input and produces set
operations like union, intersection, difference and symmetric difference as
its output.*/

#include<stdio.h>
int main()
{
  int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
    
    10], f[10], flag=1,l, m=0, n=0;
  printf("Enter number of  element of set A\n"); 
  scanf("%d",&n1);
  printf("Enter the element of set A \n");
  for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
  printf("Enter number of element of set B\n");
  scanf("%d",&n2);
  printf("Enter the element of set B \n");
  for(i=0;i<n2;i++)
  scanf("%d",&b[i]);

  for(i=0;i<n1;i++)
  {
    for(j=0;j<k;j++)
      {
        if(c[j]==a[i]) 
            break;
      }
      if(j==k) 
      {
          c[k]=a[i];
          k++;
      }
    }
    for(i=0;i<n2;i++)
  {
    for(j=0;j<k;j++)
      {
      if(c[j]==b[i])
        break;
      }
    if(j==k) 
    {
      c[k]=b[i];
      k++;
    }
  }
  printf("Union of set A and B is:-\n");
    printf("{ ");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
      printf("}");
      
      k=0;
      for(i=0;i<n1;i++)
      {
      for(j=0;j<n2;j++)
      {
        if(a[i]==b[j])
      {/*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      /*Write a program that takes two or more sets as input and produces set
      operations like union, intersection, difference and symmetric difference as
      its output.*/
      
      #include<stdio.h>
      int main()
      {
        int a[10],b[10],i,c[10],j,k=0,n1,n2, d[
          
          10], f[10], flag=1,l, m=0, n=0;
        printf("Enter number of  element of set A\n"); 
        scanf("%d",&n1);
        printf("Enter the element of set A \n");
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        printf("Enter number of element of set B\n");
        scanf("%d",&n2);
        printf("Enter the element of set B \n");
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
      
        for(i=0;i<n1;i++)
        {
          for(j=0;j<k;j++)
            {
              if(c[j]==a[i]) 
                  break;
            }
            if(j==k) 
            {
                c[k]=a[i];
                k++;
            }
          }
          for(i=0;i<n2;i++)
        {
          for(j=0;j<k;j++)
            {
            if(c[j]==b[i])
              break;
            }
          if(j==k) 
          {
            c[k]=b[i];
            k++;
          }
        }
        printf("Union of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            k=0;
            for(i=0;i<n1;i++)
            {
            for(j=0;j<n2;j++)
            {
              if(a[i]==b[j])
            {
              d[k]=b[j];
            k++;
            }
          }
        }
          printf("\nIntersection of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",d[i]);
            printf("}");
            
        for( i=0;i<n1;i++)
          {
              for(j=0;j<n2;j++)
              {
                  if(b[j]==a[i])
                  break;
              }
              if(j==n2)
              {
                  
                  for(l=0;l<k;l++)
                  {
                      if(c[l]==a[i])
                      break;
                  }
                  if(l==k)
                  {
                      c[k]=a[i];
                      k++;
                  }
              }
              
          }
        printf("\nDifference of set A and B is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d",c[i]);
            printf("}");
            
              for( i=0;i<n2;i++)
          {
              for(j=0;j<n1;j++)
              {
                  if(b[i]==a[j])
                  break;
              }
              if(j==n1)
              {
                  for(l=0;l<m;l++)
                  {
                      if(d[l]==b[i])
                      break;
                  }
                  if(l==m)
                  {
                      d[m]=b[i];
                      m++;
                  }
              }
              
          }
          printf("\nDifference of set B and A is:-\n");
          printf("{ ");
          for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("}");
            
            for(i=0;i<k;i++)
          {
              f[n]=c[i];
              n++;
          }
          for(i=0;i<m;i++)
          {
              f[n]=d[i];
              n++;
          }
          
          printf("\nsymmetric Difference of sets is:-\n");
          printf("{");
          for(i=0;i<n;i++)
          printf("%d ",f[i]);
          printf("}");
          return 0;
      }
      
      
        d[k]=b[j];
      k++;
			}
		}
	}
	  printf("\nIntersection of set A and B is:-\n");
    printf("{ ");
    for(i=0;i<k;i++)
      printf("%d ",d[i]);
      printf("}");
      
  for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
            break;
        }
        if(j==n2)
        {
            
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
	printf("\nDifference of set A and B is:-\n");
    printf("{ ");
    for(i=0;i<k;i++)
      printf("%d",c[i]);
      printf("}");
      
        for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            break;
        }
        if(j==n1)
        {
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
    printf("\nDifference of set B and A is:-\n");
    printf("{ ");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
      printf("}");
      
      for(i=0;i<k;i++)
    {
        f[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        f[n]=d[i];
        n++;
    }
    
    printf("\nsymmetric Difference of sets is:-\n");
    printf("{");
    for(i=0;i<n;i++)
    printf("%d ",f[i]);
    printf("}");
    return 0;
}
