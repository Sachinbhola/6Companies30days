
void matchPairs(char nuts[], char bolts[], int n) {
    
    char nutascii[256]={0};
    char boltsascii[256]={0};
    
    for(int i=0;i<n;i++) {
        nutascii[(int)nuts[i]%256] = nuts[i];
        boltsascii[(int)bolts[i]%256] = bolts[i];
    }
    
    char resultset[9] = {0};
   
   for(int i=0;i<256;i++){
       if(nutascii[i]!=0){
           if(boltsascii[i]!=0)
            {
                char original = nutascii[i];
                int finalposition = returnPosition(original);
                resultset[finalposition] = original;
               
            }
           
       }
   }
   
   memset(nuts,0,n);
   memset(bolts,0,n);
   
  int arraycounter1 = 0;
  int arraycounter2 = 0;
  for(int i=0;i<9;i++)
  {
      if(resultset[i]!=0)
      {
          nuts[arraycounter1++] = resultset[i];
          bolts[arraycounter2++] = resultset[i];
      }
  }
   
}

int returnPosition(char ch) {
    
    switch(ch)
    {
        case '!': return 0;
        case '#': return 1;
        case '$': return 2;
        case '%': return 3;
        case '&': return 4;
        case '*': return 5;
        case '@': return 6;
        case '^': return 7;
        case '~': return 8;
    }
}
