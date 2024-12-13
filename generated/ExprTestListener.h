
// Generated from ./ExprTest.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprTestParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprTestParser.
 */
class  ExprTestListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCal(ExprTestParser::CalContext *ctx) = 0;
  virtual void exitCal(ExprTestParser::CalContext *ctx) = 0;

  virtual void enterAdd(ExprTestParser::AddContext *ctx) = 0;
  virtual void exitAdd(ExprTestParser::AddContext *ctx) = 0;

  virtual void enterMul(ExprTestParser::MulContext *ctx) = 0;
  virtual void exitMul(ExprTestParser::MulContext *ctx) = 0;

  virtual void enterInt(ExprTestParser::IntContext *ctx) = 0;
  virtual void exitInt(ExprTestParser::IntContext *ctx) = 0;


};

