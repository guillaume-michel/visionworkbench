// __BEGIN_LICENSE__
// Copyright (C) 2006, 2007 United States Government as represented by
// the Administrator of the National Aeronautics and Space Administration.
// All Rights Reserved.
// __END_LICENSE__


// TestFunctors.h
#include <cxxtest/TestSuite.h>

#include <vw/Core/Functors.h>

using namespace vw;

class TestFunctors : public CxxTest::TestSuite
{
public:
  template <class T1, class T2>
  static bool is_of_type( T2 ) {
    return boost::is_same<T1,T2>::value;
  }

  void test_ArgNegationFunctor() {
    ArgNegationFunctor f;
    TS_ASSERT_EQUALS( f(1), -1 );
    TS_ASSERT( is_of_type<int>( f(int(1)) ) );
    TS_ASSERT( is_of_type<float>( f(float(1)) ) );
    TS_ASSERT( is_of_type<double>( f(double(1)) ) );
  }

  // We use the value 1 instead of the default-constructed value here so
  // that division by zero doesn't bite us when optimization is disabled.
#define TEST_BINARY_MATH_FUNCTOR(name,arg1,arg2,result)                 \
  do {                                                                  \
    ArgArg##name##Functor f1;                                           \
    TS_ASSERT_EQUALS( f1((arg1),(arg2)), (result) );                    \
    TS_ASSERT( is_of_type<int>( f1(int(1),int(1)) ) );                    \
    TS_ASSERT( is_of_type<float>( f1(int(1),float(1)) ) );                \
    TS_ASSERT( is_of_type<double>( f1(double(1),float(1)) ) );            \
    TS_ASSERT_EQUALS( ValArg##name##Functor<double>(arg1)(arg2), (result) ); \
    TS_ASSERT( is_of_type<int>( ValArg##name##Functor<int>(int(1))(int(1)) ) ); \
    TS_ASSERT( is_of_type<float>( ValArg##name##Functor<float>(float(1))(int(1)) ) ); \
    TS_ASSERT( is_of_type<float>( ValArg##name##Functor<int>(int(1))(float(1)) ) ); \
    TS_ASSERT( is_of_type<double>( ValArg##name##Functor<float>(float(1))(double(1)) ) ); \
    TS_ASSERT( is_of_type<double>( ValArg##name##Functor<double>(double(1))(float(1)) ) ); \
    TS_ASSERT_EQUALS( ArgVal##name##Functor<double>(arg2)(arg1), (result) ); \
    TS_ASSERT( is_of_type<int>( ArgVal##name##Functor<int>(int(1))(int(1)) ) ); \
    TS_ASSERT( is_of_type<float>( ArgVal##name##Functor<float>(float(1))(int(1)) ) ); \
    TS_ASSERT( is_of_type<float>( ArgVal##name##Functor<int>(int(1))(float(1)) ) ); \
    TS_ASSERT( is_of_type<double>( ArgVal##name##Functor<float>(float(1))(double(1)) ) ); \
    TS_ASSERT( is_of_type<double>( ArgVal##name##Functor<double>(double(1))(float(1)) ) ); \
  } while(false)

  void test_Sum() { TEST_BINARY_MATH_FUNCTOR(Sum,1,2,3); }
  void test_Difference() { TEST_BINARY_MATH_FUNCTOR(Difference,1,2,-1); }
  void test_Product() { TEST_BINARY_MATH_FUNCTOR(Product,2,3,6); }
  void test_Quotient() { TEST_BINARY_MATH_FUNCTOR(Quotient,6,3,2); }

#define TEST_BINARY_BOOL_FUNCTOR(name,arg1true,arg2true,arg1false,arg2false) \
  do {                                                                  \
    ArgArg##name##Functor f1;                                           \
    TS_ASSERT_EQUALS( f1((arg1true),(arg2true)), true );                \
    TS_ASSERT_EQUALS( f1((arg1false),(arg2false)), false );             \
    TS_ASSERT( is_of_type<bool>( f1(int(),int()) ) );                   \
    TS_ASSERT( is_of_type<bool>( f1(int(),float()) ) );                 \
    TS_ASSERT( is_of_type<bool>( f1(double(),float()) ) );              \
    TS_ASSERT_EQUALS( ValArg##name##Functor<double>(arg1true)(arg2true), true ); \
    TS_ASSERT_EQUALS( ValArg##name##Functor<double>(arg1false)(arg2false), false ); \
    TS_ASSERT( is_of_type<bool>( ValArg##name##Functor<int>(int())(int()) ) ); \
    TS_ASSERT( is_of_type<bool>( ValArg##name##Functor<float>(float())(int()) ) ); \
    TS_ASSERT( is_of_type<bool>( ValArg##name##Functor<int>(int())(float()) ) ); \
    TS_ASSERT( is_of_type<bool>( ValArg##name##Functor<float>(float())(double()) ) ); \
    TS_ASSERT( is_of_type<bool>( ValArg##name##Functor<double>(double())(float()) ) ); \
    TS_ASSERT_EQUALS( ArgVal##name##Functor<double>(arg2true)(arg1true), true ); \
    TS_ASSERT_EQUALS( ArgVal##name##Functor<double>(arg2false)(arg1false), false ); \
    TS_ASSERT( is_of_type<bool>( ArgVal##name##Functor<int>(int())(int()) ) ); \
    TS_ASSERT( is_of_type<bool>( ArgVal##name##Functor<float>(float())(int()) ) ); \
    TS_ASSERT( is_of_type<bool>( ArgVal##name##Functor<int>(int())(float()) ) ); \
    TS_ASSERT( is_of_type<bool>( ArgVal##name##Functor<float>(float())(double()) ) ); \
    TS_ASSERT( is_of_type<bool>( ArgVal##name##Functor<double>(double())(float()) ) ); \
  } while(false)

  void test_Equality() { TEST_BINARY_BOOL_FUNCTOR(Equality,3,3,2,4); }
  void test_Inequality() { TEST_BINARY_BOOL_FUNCTOR(Inequality,3,4,2,2); }
  void test_LessThan() { TEST_BINARY_BOOL_FUNCTOR(LessThan,3,4,2,1); }
  void test_LessThanOrEqual() { TEST_BINARY_BOOL_FUNCTOR(LessThanOrEqual,3,3,2,1); }
  void test_GreaterThan() { TEST_BINARY_BOOL_FUNCTOR(GreaterThan,4,3,2,4); }
  void test_GreaterThanOrEqual() { TEST_BINARY_BOOL_FUNCTOR(GreaterThanOrEqual,3,3,2,4); }

};
