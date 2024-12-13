#include "ExprTestVisitor.h"
#include <any>
#include <iostream>
namespace antlr_test {
class MyExprVisitor:ExprTestVisitor{
public:
    virtual std::any visitCal(ExprTestParser::CalContext *context) {
        std::cout<<"visit cal\n";
        for(auto child:context->children){
            child->accept(this);
        }
        return nullptr;
    }

    virtual std::any visitAdd(ExprTestParser::AddContext *context) {
        std::cout<<"visit add\n";
        for(auto child:context->children){
            child->accept(this);
        }
        return nullptr;
    }

    virtual std::any visitMul(ExprTestParser::MulContext *context) {
        std::cout<<"visit mul\n";
        for(auto child:context->children){
            child->accept(this);
        }
        return nullptr;
    }

    virtual std::any visitInt(ExprTestParser::IntContext *context) {
        std::cout<<"visit Int\n";
        for(auto child:context->children){
            child->accept(this);
        }
        return nullptr;
    }   
};
}