#include "Main.h"
#include "ErrorObject.h"
#include "CException.h"
#include <stdlib.h>

int shouldFail=1;

void doThings(){
  // ErrorObject *err;
  doSomething ();
  
  // Try{
    // doSomething();
    
  // }Catch(err){
    // printf("Error:%s\n",err->errorMsg);
    // freeError(err);
  // }
}

int doSomething(){
  
  if (shouldFail){
    ThrowError("Hey!something wrong is really wrong here!!!!!!!!!", ERR_DUNNO_WHAT_HAPPEN);
  }
  
  
  
  
  
  return 1;
}

/**
 *Add two numbers. The first number must be negative.
 *The second number must be positive no more than 50.
 */
int specialAdd(int negVal,int posVal){
  if(negVal>0){
    ThrowError("The First number must be a negative number!!!", ERR_NUMBER_NOT_NEGATIVE);
  }
  else if (posVal<0){
    ThrowError("The Second number must be a positive number!!!", ERR_NUMBER_NOT_POSITIVE);
  }
  
  else if(posVal>50){
    ThrowError("The Second number must be less than 50!!! ", ERR_NUMBER_TOO_LARGE);
  }
  else {
    return (negVal+posVal);
  }
  
}