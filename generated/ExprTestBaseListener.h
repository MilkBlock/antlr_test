
// Generated from ./ExprTest.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprTestListener.h"


/**
 * This class provides an empty implementation of ExprTestListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprTestBaseListener : public ExprTestListener {
public:

  virtual void enterCal(ExprTestParser::CalContext * /*ctx*/) override { }
  virtual void exitCal(ExprTestParser::CalContext * /*ctx*/) override { }

  virtual void enterAdd(ExprTestParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(ExprTestParser::AddContext * /*ctx*/) override { }

  virtual void enterMul(ExprTestParser::MulContext * /*ctx*/) override { }
  virtual void exitMul(ExprTestParser::MulContext * /*ctx*/) override { }

  virtual void enterInt(ExprTestParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(ExprTestParser::IntContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

