
// Generated from ./ExprTest.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprTestParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprTestParser.
 */
class  ExprTestVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprTestParser.
   */
    virtual std::any visitCal(ExprTestParser::CalContext *context) = 0;

    virtual std::any visitAdd(ExprTestParser::AddContext *context) = 0;

    virtual std::any visitMul(ExprTestParser::MulContext *context) = 0;

    virtual std::any visitInt(ExprTestParser::IntContext *context) = 0;


};

