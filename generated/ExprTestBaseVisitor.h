
// Generated from ./ExprTest.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprTestVisitor.h"


/**
 * This class provides an empty implementation of ExprTestVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprTestBaseVisitor : public ExprTestVisitor {
public:

  virtual std::any visitCal(ExprTestParser::CalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(ExprTestParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMul(ExprTestParser::MulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(ExprTestParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};

