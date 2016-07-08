#include<stdio.h>
#include<string.h>
void subs(int[],int *);
char * con2bin(char [],char *);
char * con2bin2(char [] ,char *);
char * con2bin3(char [] ,char *);
char key[16][48],input[17],keyP[56],keyb[64];
char inpb[65];
FILE *fp2;
void diffpair(void);
void  keyPermutation()
      {
                      
                      
                      
    
   keyP[0] = keyb[57-1];
	keyP[1] = keyb[49-1];
	keyP[2] = keyb[41-1];
	keyP[3] = keyb[33-1];
	keyP[4] = keyb[25-1];
	keyP[5] = keyb[17-1];
	keyP[6] = keyb[9-1];
	keyP[7] = keyb[1-1];
	keyP[8] = keyb[58-1];
	keyP[9] = keyb[50-1];
	keyP[10] = keyb[42-1];
	keyP[11] = keyb[34-1];
	keyP[12] = keyb[26-1];
	keyP[13] = keyb[18-1];
	keyP[14] = keyb[10-1];
	keyP[15] = keyb[2-1];
	keyP[16] = keyb[59-1];
	keyP[17] = keyb[51-1];
	keyP[18] = keyb[43-1];
	keyP[19] = keyb[35-1];
	keyP[20] = keyb[27-1];
	keyP[21] = keyb[19-1];
	keyP[22] = keyb[11-1];
	keyP[23] = keyb[3-1];
	keyP[24] = keyb[60-1];
	keyP[25] = keyb[52-1];
	keyP[26] = keyb[44-1];
	keyP[27] = keyb[36-1];
	keyP[28] = keyb[63-1];
	keyP[29] = keyb[55-1];
	keyP[30] = keyb[47-1];
	keyP[31] = keyb[39-1];
	keyP[32] = keyb[31-1];
	keyP[33] = keyb[23-1];
	keyP[34] = keyb[15-1];
	keyP[35] = keyb[7-1];
	keyP[36] = keyb[62-1];
	keyP[37] = keyb[54-1];
	keyP[38] = keyb[46-1];
	keyP[39] = keyb[38-1];
	keyP[40] = keyb[30-1];
	keyP[41] = keyb[22-1];
	keyP[42] = keyb[14-1];
	keyP[43] = keyb[6-1];
	keyP[44] = keyb[61-1];
	keyP[45] = keyb[53-1];
	keyP[46] = keyb[45-1];
	keyP[47] = keyb[37-1];
	keyP[48] = keyb[29-1];
	keyP[49] = keyb[21-1];
	keyP[50] = keyb[13-1];
	keyP[51] = keyb[5-1];
	keyP[52] = keyb[28-1];
	keyP[53] = keyb[20-1];
	keyP[54] = keyb[12-1];
	keyP[55] = keyb[4-1];                  
                      int i;
               printf("\n");
                        for(i=0;i<56;i++)
                        printf("%c",keyP[i]);   
                      
      }
      
      void keyGeneration()
      {
      
int subkeyRt[16],i,rot,k,f;
char l[28],r[28],lr[28],rr[28],keyJoined[56],newk[56];

subkeyRt[0]= 1;
subkeyRt[1]= 1;
subkeyRt[2]= 2;
subkeyRt[3]= 2;
subkeyRt[4]= 2;
subkeyRt[5]= 2;
subkeyRt[6]= 2;
subkeyRt[7]= 2;
subkeyRt[8]= 1;
subkeyRt[9]= 2;
subkeyRt[10]= 2;
subkeyRt[11]= 2;
subkeyRt[12]= 2;
subkeyRt[13]= 2;
subkeyRt[14]= 2;
subkeyRt[15]= 1;


                
               for(i=0;i<56;i++)
              {
              newk[i]=keyP[i];
              } 
              
             
          
              
              
        for(k=0;k<16;k++)
        {
              
                for(i=0;i<28;i++)
              {
              l[i]=newk[i];
              }
               for(i=28;i<56;i++)
              {
              r[i-28]=newk[i];
              }
              

              
              
              rot=subkeyRt[k];
              
            /*  printf("\n");
              printf("\nleft sub key is\n");
              for(i=0;i<28;i++)
              printf("%c",l[i]);
              printf("\n");
              printf("\nright sub key is\n");
              for(i=0;i<28;i++)
              printf("%c",r[i]);
              
          */
           
              
              for(f=rot;f<28;f++)
              {
              lr[f-rot]=l[f];                  
                                
              }
              
                  for(f=0;f<rot;f++)
              {
              lr[28-rot+f]=l[f];                  
                                
              }
              
              
                   
            
           
              for(f=rot;f<28;f++)
              {
              rr[f-rot]=r[f];                  
                                
              }
                for(f=0;f<rot;f++)
              {
              rr[28-rot+f]=r[f];                  
                                
              }
                /* printf("\n");
              printf("\nleft sub key is\n");
              for(i=0;i<28;i++)
              printf("%c",lr[i]);
              printf("\n");
              printf("\nright sub key is\n");
              for(i=0;i<28;i++)
              printf("%c",rr[i]);
              
            */
             for(i=0;i<28;i++)
              {
              keyJoined[i]=lr[i];
              }
               for(i=28;i<56;i++)
              {
              keyJoined[i]=rr[i-28];
              }
            /*  printf("\n\n\n\n\n");
             for(i=0;i<56;i++)
                printf("%c",keyJoined[i]);*/
              
                     
               for(i=0;i<56;i++)
              {
              newk[i]=keyJoined[i];
              } 
              
             
   
   
   
 key[k][0] = keyJoined[14-1];
	key[k][1] = keyJoined[17-1];
	key[k][2] = keyJoined[11-1];
	key[k][3] = keyJoined[24-1];
	key[k][4] = keyJoined[1-1];
	key[k][5] = keyJoined[5-1];
	key[k][6] = keyJoined[3-1];
	key[k][7] = keyJoined[28-1];
	key[k][8] = keyJoined[15-1];
	key[k][9] = keyJoined[6-1];
	key[k][10] = keyJoined[21-1];
	key[k][11] = keyJoined[10-1];
	key[k][12] = keyJoined[23-1];
	key[k][13] = keyJoined[19-1];
	key[k][14] = keyJoined[12-1];
	key[k][15] = keyJoined[4-1];
	key[k][16] = keyJoined[26-1];
	key[k][17] = keyJoined[8-1];
	key[k][18] = keyJoined[16-1];
	key[k][19] = keyJoined[7-1];
	key[k][20] = keyJoined[27-1];
	key[k][21] = keyJoined[20-1];
	key[k][22] = keyJoined[13-1];
	key[k][23] = keyJoined[2-1];
	key[k][24] = keyJoined[41-1];
	key[k][25] = keyJoined[52-1];
	key[k][26] = keyJoined[31-1];
	key[k][27] = keyJoined[37-1];
	key[k][28] = keyJoined[47-1];
	key[k][29] = keyJoined[55-1];
	key[k][30] = keyJoined[30-1];
	key[k][31] = keyJoined[40-1];
	key[k][32] = keyJoined[51-1];
	key[k][33] = keyJoined[45-1];
	key[k][34] = keyJoined[33-1];
	key[k][35] = keyJoined[48-1];
	key[k][36] = keyJoined[44-1];
	key[k][37] = keyJoined[49-1];
	key[k][38] = keyJoined[39-1];
	key[k][39] = keyJoined[56-1];
	key[k][40] = keyJoined[34-1];
	key[k][41] = keyJoined[53-1];
	key[k][42] = keyJoined[46-1];
	key[k][43] = keyJoined[42-1];
	key[k][44] = keyJoined[50-1];
	key[k][45] = keyJoined[36-1];
	key[k][46] = keyJoined[29-1];
	key[k][47] = keyJoined[32-1];
              
    

    }
   int j;
              for(i=0;i<16;i++)
              {
                                 printf("\nkey number is %d\n",i);
                for(j=0;j<48;j++)
                printf("%c",key[i][j]);
                }
}

void dataIP_DES(char data[],char *dataIP)
{

	dataIP[0] = data[58-1];
	dataIP[1] = data[50-1];
	dataIP[2] = data[42-1];
	dataIP[3] = data[34-1];
	dataIP[4] = data[26-1];
	dataIP[5] = data[18-1];
	dataIP[6] = data[10-1];
	dataIP[7] = data[2-1];
	dataIP[8] = data[60-1];
	dataIP[9] = data[52-1];
	dataIP[10] = data[44-1];
	dataIP[11] = data[36-1];
	dataIP[12] = data[28-1];
	dataIP[13] = data[20-1];
	dataIP[14] = data[12-1];
	dataIP[15] = data[4-1];
	dataIP[16] = data[62-1];
	dataIP[17] = data[54-1];
	dataIP[18] = data[46-1];
	dataIP[19] = data[38-1];
	dataIP[20] = data[30-1];
	dataIP[21] = data[22-1];
	dataIP[22] = data[14-1];
	dataIP[23] = data[6-1];
	dataIP[24] = data[64-1];
	dataIP[25] = data[56-1];
	dataIP[26] = data[48-1];
	dataIP[27] = data[40-1];
	dataIP[28] = data[32-1];
	dataIP[29] = data[24-1];
	dataIP[30] = data[16-1];
	dataIP[31] = data[8-1];
	dataIP[32] = data[57-1];
	dataIP[33] = data[49-1];
	dataIP[34] = data[41-1];
	dataIP[35] = data[33-1];
	dataIP[36] = data[25-1];
	dataIP[37] = data[17-1];
	dataIP[38] = data[9-1];
	dataIP[39] = data[1-1];
	dataIP[40] = data[59-1];
	dataIP[41] = data[51-1];
	dataIP[42] = data[43-1];
	dataIP[43] = data[35-1];
	dataIP[44] = data[27-1];
	dataIP[45] = data[19-1];
	dataIP[46] = data[11-1];
	dataIP[47] = data[3-1];
	dataIP[48] = data[61-1];
	dataIP[49] = data[53-1];
	dataIP[50] = data[45-1];
	dataIP[51] = data[37-1];
	dataIP[52] = data[29-1];
	dataIP[53] = data[21-1];
	dataIP[54] = data[13-1];
	dataIP[55] = data[5-1];
	dataIP[56] = data[63-1];
	dataIP[57] = data[55-1];
	dataIP[58] = data[47-1];
	dataIP[59] = data[39-1];
	dataIP[60] = data[31-1];
	dataIP[61] = data[23-1];
	dataIP[62] = data[15-1];
	dataIP[63] = data[7-1];

	//return dataIP;
}
void IPInverse(char *r,char *res)
{
	res[0] = r[40-1];
	res[1] = r[8-1];
	res[2] = r[48-1];
	res[3] = r[16-1];
	res[4] = r[56-1];
	res[5] = r[24-1];
	res[6] = r[64-1];
	res[7] = r[32-1];
	res[8] = r[39-1];
	res[9] = r[7-1];
	res[10] = r[47-1];
	res[11] = r[15-1];
	res[12] = r[55-1];
	res[13] = r[23-1];
	res[14] = r[63-1];
	res[15] = r[31-1];
	res[16] = r[38-1];
	res[17] = r[6-1];
	res[18] = r[46-1];
	res[19] = r[14-1];
	res[20] = r[54-1];
	res[21] = r[22-1];
	res[22] = r[62-1];
	res[23] = r[30-1];
	res[24] = r[37-1];
	res[25] = r[5-1];
	res[26] = r[45-1];
	res[27] = r[13-1];
	res[28] = r[53-1];
	res[29] = r[21-1];
	res[30] = r[61-1];
	res[31] = r[29-1];
	res[32] = r[36-1];
	res[33] = r[4-1];
	res[34] = r[44-1];
	res[35] = r[12-1];
	res[36] = r[52-1];
	res[37] = r[20-1];
	res[38] = r[60-1];
	res[39] = r[28-1];
	res[40] = r[35-1];
	res[41] = r[3-1];
	res[42] = r[43-1];
	res[43] = r[11-1];
	res[44] = r[51-1];
	res[45] = r[19-1];
	res[46] = r[59-1];
	res[47] = r[27-1];
	res[48] = r[34-1];
	res[49] = r[2-1];
	res[50] = r[42-1];
	res[51] = r[10-1];
	res[52] = r[50-1];
	res[53] = r[18-1];
	res[54] = r[58-1];
	res[55] = r[26-1];
	res[56] = r[33-1];
	res[57] = r[1-1];
	res[58] = r[41-1];
	res[59] = r[9-1];
	res[60] = r[49-1];
	res[61] = r[17-1];
	res[62] = r[57-1];
	res[63] = r[25-1];
//#endif

	//return res;
}

void extendedpermutation(char *right,char *ep)
{
	//char* ep = new char[KEY_P_LENGTH];
	int i = 64/2;

	ep[0] = right[i+32-1];
	ep[1] = right[i+1-1];
	ep[2] = right[i+2-1];
	ep[3] = right[i+3-1];
	ep[4] = right[i+4-1];
	ep[5] = right[i+5-1];
	ep[6] = right[i+4-1];
	ep[7] = right[i+5-1];
	ep[8] = right[i+6-1];
	ep[9] = right[i+7-1];
	ep[10] = right[i+8-1];
	ep[11] = right[i+9-1];
	ep[12] = right[i+8-1];
	ep[13] = right[i+9-1];
	ep[14] = right[i+10-1];
	ep[15] = right[i+11-1];
	ep[16] = right[i+12-1];
	ep[17] = right[i+13-1];
	ep[18] = right[i+12-1];
	ep[19] = right[i+13-1];
	ep[20] = right[i+14-1];
	ep[21] = right[i+15-1];
	ep[22] = right[i+16-1];
	ep[23] = right[i+17-1];
	ep[24] = right[i+16-1];
	ep[25] = right[i+17-1];
	ep[26] = right[i+18-1];
	ep[27] = right[i+19-1];
	ep[28] = right[i+20-1];
	ep[29] = right[i+21-1];
	ep[30] = right[i+20-1];
	ep[31] = right[i+21-1];
	ep[32] = right[i+22-1];
	ep[33] = right[i+23-1];
	ep[34] = right[i+24-1];
	ep[35] = right[i+25-1];
	ep[36] = right[i+24-1];
	ep[37] = right[i+25-1];
	ep[38] = right[i+26-1];
	ep[39] = right[i+27-1];
	ep[40] = right[i+28-1];
	ep[41] = right[i+29-1];
	ep[42] = right[i+28-1];
	ep[43] = right[i+29-1];
	ep[44] = right[i+30-1];
	ep[45] = right[i+31-1];
	ep[46] = right[i+32-1];
	ep[47] = right[i+1-1];

//#endif

//	return ep;
}
char XOR(char a, char b)
{
	if (a == b)
		return '0';
	else
		return '1';
}


void Convert2Hex(char* out, char *put)
{
	int i,j,count,d;
	char hexchar;
	char temp=0;

	for (i = 0, j = 0 ; i < 64 ; j++, i += 4)
	{
		count=3,d=1;
		while(count>=0)
		{
			temp+=(out[i+count]-48)*d;
			d*=2;
			count--;	
		}
		if(temp<=9)
		 		put[j] = temp+48;
		else
		 		put[j] = temp-10+'A'; 
				 
		temp=0;		
	}

	put[j] = '\0';
}


void PermuteSres_DES(int *r,char *res)
{
	

	res[0] = r[16-1];
	res[1] = r[7-1];
	res[2] = r[20-1];
	res[3] = r[21-1];
	res[4] = r[29-1];
	res[5] = r[12-1];
	res[6] = r[28-1];
	res[7] = r[17-1];
	res[8] = r[1-1];
	res[9] = r[15-1];
	res[10] = r[23-1];
	res[11] = r[26-1];
	res[12] = r[5-1];
	res[13] = r[18-1];
	res[14] = r[31-1];
	res[15] = r[10-1];
	res[16] = r[2-1];
	res[17] = r[8-1];
	res[18] = r[24-1];
	res[19] = r[14-1];
	res[20] = r[32-1];
	res[21] = r[27-1];
	res[22] = r[3-1];
	res[23] = r[9-1];
	res[24] = r[19-1];
	res[25] = r[13-1];
	res[26] = r[30-1];
	res[27] = r[6-1];
	res[28] = r[22-1];
	res[29] = r[11-1];
	res[30] = r[4-1];
	res[31] = r[25-1];

//	return res;
}

main(int argc, char **argv)
{
      int flag=1,j,i,ep1[48],num,x;
      int a[32];
      char put[17]="",res[65],mid[65]="",text[17],c,bintext[65]="",strtkey[17],binstrtkey[65]="",dataIP[65]="",ep[49]="";
      FILE *fp,*fp1;
      char ch;
     
    // diffpair();
      printf("Give the name of the file to be encrypted in the parameters section\n");     
      printf("\nEnter key\n");
      fp=fopen(argv[1],"r");
      fp1=fopen(argv[2],"w");
      fp2=fopen("decext.txt","w");
      //scanf("%s",strtkey);
      strcpy(strtkey,argv[3]);
      printf("%s\n",argv[1]);
      con2bin(strtkey,keyb);
      keyPermutation();
       keyGeneration();
    
   num=5;
      while(flag==1)
      {
                  strcpy(put,"");
                  strcpy(mid,"");
                  strcpy(binstrtkey,"");
                  strcpy(bintext,"");
 i=0;
      while(i<8 && fscanf(fp,"%c",&text[i])!=EOF){ 
      printf("%c",text[i]);
      i++;
      }
       while(i<8 ){ 
      text[i]=' ';
      i++;
      flag=0;
      }
      text[i]='\0';
      
      con2bin2(text,bintext);
      
     // printf("%s\n",bintext);
       
       
       dataIP_DES(bintext,dataIP);
      dataIP[64]='\0';
      extendedpermutation(dataIP,ep);
      ep[48]='\0';
     // printf("\ndataIP%s\nEP %s\n",dataIP,ep);
      for(i=0;i<16;i++)
      {
      extendedpermutation(dataIP,ep);
      for(j=0;j<48;j++)
      ep1[j]=XOR(ep[j],key[i][j])-'0';
      
      //for(j=0;j<48;j++)
      //printf("%d",ep1[j]);
      //printf("asfs\n");
      for(j=32;j<64;j++)
      mid[j-32]=dataIP[j];
      
      subs(ep1,a);
      //for(j=0;j<32;j++)
     // printf("%d",a[j]);
      //printf("sbox\n");
      PermuteSres_DES(a,res); 
      //for(j=0;j<32;j++)
      //printf("%c",res[j]+'0');
      //printf("permssbox\n");
      for(j=0;j<32;j++)
      mid[32+j]=XOR(dataIP[j],res[j]+'0');
      
      for(j=0;j<64;j++)
      dataIP[j]=mid[j];                       
      }
      
      for(i=0;i<48;i++)
      {
           ;//   scanf("%d",&key[i]);
      }
      for(j=32;j<64;j++)
      mid[j-32]=dataIP[j];
      for(j=0;j<32;j++)
      mid[32+j]=dataIP[j];
      
      
     // subs(key);
     IPInverse(mid,res);
     res[64]='\0';
     //printf("%s\n",res);
     Convert2Hex(res,put);
     
   
     fprintf(fp1,"%s\n",put);  
     printf("%s\n",put);
     strcpy(bintext,"");
     con2bin(put,bintext);
     
     //  printf("bin%s\n",bintext);
       dataIP_DES(bintext,dataIP);
      dataIP[64]='\0';
      //extendedpermutation(dataIP,ep);
     // ep[48]='\0';
     // printf("\ndataIP%s\nEP %s\n",dataIP,ep);
      for(i=15;i>=0;i--)
      {
      extendedpermutation(dataIP,ep);
      for(j=0;j<48;j++)
      ep1[j]=XOR(ep[j],key[i][j])-'0';
      
      //for(j=0;j<48;j++)
      //printf("%d",ep1[j]);
      //printf("asfs\n");
      for(j=32;j<64;j++)
      mid[j-32]=dataIP[j];
      
      subs(ep1,a);
      //for(j=0;j<32;j++)
      //printf("%d",a[j]);
      //printf("sbox\n");
      PermuteSres_DES(a,res); 
    //  for(j=0;j<32;j++)
     // printf("%c",res[j]+'0');
     // printf("permssbox\n");
      for(j=0;j<32;j++)
      mid[32+j]=XOR(dataIP[j],res[j]+'0');
      
      for(j=0;j<64;j++)
      dataIP[j]=mid[j];                       
      }
      
      for(i=0;i<48;i++)
      {
           ;//   scanf("%d",&key[i]);
      }
      for(j=32;j<64;j++)
      mid[j-32]=dataIP[j];
      for(j=0;j<32;j++)
      mid[32+j]=dataIP[j];
      
      
     // subs(key);
     IPInverse(mid,res);
     res[64]='\0';
     //printf("%s\n",res);
     con2bin3(res,put);
     //fp2=fopen("numout.txt","w")
    
     }         
         printf("\n\n\nEncrypted text is saved in the file named enctext.txt\n");
     
     printf("\nDecrypted text is saved in the file named dectext.txt\n");
   
    
   //  scanf("%c%c",&c,&c);
     

     
     
     
}
//void key generation

char * con2bin(char  text[],char *bins)
{
     int i,k;
     char temp,rem;
     char a[10];
 
 for(i=0;i<strlen(text);i++)
 {
 		if(text[i]<='9')
  			temp=text[i]-'0';
  		else
  			temp=text[i]-'A'+10;
		 		
 		for(k=0;k<4;k++)
 		{
 			if(temp%2==0)	
 				a[3-k]='0';
 			else
			 	a[3-k]='1';
			temp/=2;	 	
 		}
		 a[4]='\0';	
		strcat(bins,a); 
 }
 //printf("%s %d\n",bins,strlen(bins));
return bins;

}

char * con2bin3(char  text[],char *bins)
{
     int i,j,t,su;
 //char bins[65]="";
 for(i=0;i<8;i++)
 {
               
 /*switch(text[i])
                 	         {
                             	case '0':
                   	         	strcat(bins, "0000");
                   	         	break;
                        	case '1':
                	      	     strcat(bins, "0001");
                        	      	break;
                            case '2':
                        	  	strcat(bins, "0010");
                        	 	break;
                            case '3':
                        	  	strcat(bins, "0011");
                        	 	break;
                            case '4':
                        		  	strcat(bins, "0100");
                        	 	break;
                            case '5':
                        	  	strcat(bins, "0101");
                        	 	break;
                            case '6':
                        		  	strcat(bins, "0110");
                        	 	break;
                            case '7':
                        	  	strcat(bins, "0111");
                        	 	break;
                            case '8':
                        	  	strcat(bins, "1000");
                        	 	break;
                            case '9':
                        		  	strcat(bins, "1001");
                        	 	break;
                            case 'A':
                        	  	strcat(bins, "1010");
                        	 	break;
                            case 'B':
                        		  	strcat(bins, "1011");
                        	 	break;
                            case 'C':
                        	  	strcat(bins, "1100");
                        	 	break;
                            case 'D':
                        	  	strcat(bins, "1101");
                        	 	break;
                            case 'E':
                        		  	strcat(bins, "1110");
                        	 	break;
                            case 'F':
                        	  	strcat(bins, "1111");
                            }
 
 */
 t=1;su=0;
 for(j=8*i;j<8*i+8;j++)
  {
     su+=t*(text[j]-'0');                  
  //if(t%2==0) strcat(bins,"0");
  //else strcat(bins,"1");
  t*=2;
  }
  fprintf(fp2,"%c",su);
  printf("%c",su);
 }
 //printf("%s %d\n",bins,strlen(bins));
return bins;

}
char * con2bin2(char  text[],char *bins)
{
     int i,j,t;
 //char bins[65]="";
 for(i=0;i<8;i++)
 {
  t=text[i];               
 /*switch(text[i])
                 	         {
                             	case '0':
                   	         	strcat(bins, "0000");
                   	         	break;
                        	case '1':
                	      	     strcat(bins, "0001");
                        	      	break;
                            case '2':
                        	  	strcat(bins, "0010");
                        	 	break;
                            case '3':
                        	  	strcat(bins, "0011");
                        	 	break;
                            case '4':
                        		  	strcat(bins, "0100");
                        	 	break;
                            case '5':
                        	  	strcat(bins, "0101");
                        	 	break;
                            case '6':
                        		  	strcat(bins, "0110");
                        	 	break;
                            case '7':
                        	  	strcat(bins, "0111");
                        	 	break;
                            case '8':
                        	  	strcat(bins, "1000");
                        	 	break;
                            case '9':
                        		  	strcat(bins, "1001");
                        	 	break;
                            case 'A':
                        	  	strcat(bins, "1010");
                        	 	break;
                            case 'B':
                        		  	strcat(bins, "1011");
                        	 	break;
                            case 'C':
                        	  	strcat(bins, "1100");
                        	 	break;
                            case 'D':
                        	  	strcat(bins, "1101");
                        	 	break;
                            case 'E':
                        		  	strcat(bins, "1110");
                        	 	break;
                            case 'F':
                        	  	strcat(bins, "1111");
                            }
 
 */
 for(j=0;j<8;j++)
  {
  if(t%2==0) strcat(bins,"0");
  else strcat(bins,"1");
  t/=2;
  }
 }
 //printf("%s %d\n",bins,strlen(bins));
return bins;

}
 
 
        
void subs(int key[],int *a)
{
      int i=0,j,k=0,x[8][6],p=0,q=0,temp,rem;
      for(i=0;i<8;i++)
      {
               for(j=0;j<6;j++)
               {
                       x[i][j]=key[k];
                       k++;                    
               }
      }
      
    int sbox1[4][16]={
		14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
        0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,
		4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,
		15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13
	  };

	int sbox2[4][16]={
		15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,
		3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,
		0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,
		13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9
	   };

	int sbox3[4][16]={
		10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,
		13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,
		13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,
		1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12
	   };

	int sbox4[4][16]={
		7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,
		13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,
		10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,
		3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14
	   };

	int sbox5[4][16]={
		2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,
		14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,
		4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,
		11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3
	   };

	int sbox6[4][16]={
		12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,
		10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,
		9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,
		4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13
	   };

	int sbox7[4][16]={
		4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,
		13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,
		1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,
		6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12
	   };

	int sbox8[4][16]={
        13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,
        1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,
		7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,
		2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11
	   };       
	   
     for(i=0;i<8;i++)
	 {
 		 p=(x[i][0]*2)+(x[i][5]*1);
 		 q=(x[i][1]*8)+(x[i][2]*4)+(x[i][3]*2)+(x[i][4]*1);
//         printf("%d %d\n",p,q);
 		 switch(i)
 		 {
 		 	case 0:	temp=sbox1[p][q]; break;
 		 	case 1:	temp=sbox2[p][q]; break;
 		 	case 2:	temp=sbox3[p][q]; break;
 		 	case 3:	temp=sbox4[p][q]; break;
 		 	case 4:	temp=sbox5[p][q]; break;
 		 	case 5:	temp=sbox6[p][q]; break;
 		 	case 6:	temp=sbox7[p][q]; break;
 		 	case 7:	temp=sbox8[p][q]; 
 		 }
     	 k=(4*i)+3;	 
         while(temp>0)
         {
		    rem=temp%2;
		    a[k--]=rem;
		    temp=temp/2;
  		  }
          while(k>=4*i)
	      {
  	        a[k--]=0;
          }
  	  	
  	  //a[i]=temp;
}
	     for(i=0;i<32;i++)
		  {
  		;//	printf("%d ",a[i]);
		  }
  		 
	 }
	 
	
int  SIO(int col,int i){
int  value,temp;
int p,q;
 int sbox1[4][16]={
		14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
        0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,
		4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,
		15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13
	  };

	int sbox2[4][16]={
		15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,
		3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,
		0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,
		13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9
	   };

	int sbox3[4][16]={
		10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,
		13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,
		13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,
		1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12
	   };

	int sbox4[4][16]={
		7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,
		13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,
		10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,
		3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14
	   };

	int sbox5[4][16]={
		2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,
		14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,
		4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,
		11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3
	   };

	int sbox6[4][16]={
		12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,
		10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,
		9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,
		4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13
	   };

	int sbox7[4][16]={
		4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,
		13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,
		1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,
		6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12
	   };

	int sbox8[4][16]={
        13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,
        1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,
		7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,
		2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11
	   };       
	   
     
 		// p=(x[i][0]*2)+(x[i][5]*1);
 		// q=(x[i][1]*8)+(x[i][2]*4)+(x[i][3]*2)+(x[i][4]*1);
        p=((col&1)*1)+((col&32)*2);
        q=((col&2)*1)+((col&4)*2)+((col&8)*4)+((col&16)*8);
//         printf("%d %d\n",p,q);
 		 switch(i)
 		 {
 		 	case 0:	temp=sbox1[p][q]; break;
 		 	case 1:	temp=sbox2[p][q]; break;
 		 	case 2:	temp=sbox3[p][q]; break;
 		 	case 3:	temp=sbox4[p][q]; break;
 		 	case 4:	temp=sbox5[p][q]; break;
 		 	case 5:	temp=sbox6[p][q]; break;
 		 	case 6:	temp=sbox7[p][q]; break;
 		 	case 7:	temp=sbox8[p][q]; 
 		 }
      
return temp;
}
int count(int dx,int dy,int DS0[100][100]){
int i;
int cnt=0;
for(i=0;i<64;i++)
if((DS0[i][dx])==dy)
cnt++;
return cnt;
}
/**
* The difference distribution table
*/
void difTab(int DPS0[100][100]){
int dx=0;
int dy=0;
int DTS0[100][100];
for(dx=0;dx<64;dx++){
for(dy=0;dy<16;dy++){
DTS0[dx][dy]=count(dx,dy,DPS0);
//DT2S0[dx][dy]=count(dx,dy,DP2S0);
printf("%d ",DTS0[dx][dy]);
}
printf("\n");
}
}
void diffpair(){
     
     int x=0;
     int  dx=0;
int DPS0[100][100];
for(x=0;x<64;x++)
{for(dx=0;dx<64;dx++){
DPS0[x][dx]=((SIO(x,1))^(SIO(x^dx,1)));
//DP2S0[x][dx]=((SIO(x,S1))^(SIO(x^dx,S1)));
//if(dx==52)
 printf("%d ",DPS0[52][dx]);
}
printf("\n");
}
printf("------------\n");
difTab(DPS0);

     }                                    

