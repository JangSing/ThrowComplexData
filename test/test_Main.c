#include "unity.h"
#include "Main.h"
#include "ErrorObject.h"
#include "CException.h"

void setUp(void)
{
}

void tearDown(void)
{
}


/**
 * doing silly things to test whether try catch is working. 
 */
void test_DoThings()
{
  ErrorObject *err;
  Try{
    doThings();
    
  }Catch(err){
    TEST_ASSERT_EQUAL_STRING("Hey!something wrong is really wrong here!!!!!!!!!",err->errorMsg);
    freeError(err);
  }
}

/**
 * The function will pass in two integer value and add together. 
 */
void test_specialAdd_given_minus_5_and_11_should_return_6(){
  int result = specialAdd(-5,11);
  TEST_ASSERT_EQUAL(6,result);
}

/**
 * If the first integer value is not negative,
 * it will throw error with msg "The First number must be a negative number!!!"
 */
void test_specialAdd_given_5_and_11_should_return_ERROR(){
  
  ErrorObject *err;
  
  int result ;
  
  Try{
    result= specialAdd(5,11);
    
  }Catch(err){
    TEST_ASSERT_EQUAL_STRING("The First number must be a negative number!!!",err->errorMsg);
    freeError(err);
  }
}

/**
 * If the second integer value is not positive,
 * it will throw error with msg "The Second number must be a positive number!!!"
 */
void test_specialAdd_given_minus_5_and_minus_11_should_return_ERROR(){
  
  ErrorObject *err;
  
  int result ;
  
  Try{
    result= specialAdd(-5,-11);
    
  }Catch(err){
    TEST_ASSERT_EQUAL_STRING("The Second number must be a positive number!!!",err->errorMsg);
    freeError(err);
  }
}

/**
 * If the second integer value is more than 50,
 * it will throw error with msg "The Second number must be less than 50!!!"
 */
void test_specialAdd_given_minus_5_and_90_should_return_ERROR(){
  
  ErrorObject *err;
  
  int result ;
  
  Try{
    result= specialAdd(-5,90);
    
  }Catch(err){
    TEST_ASSERT_EQUAL_STRING("The Second number must be less than 50!!! ",err->errorMsg);
    freeError(err);
  }
}






