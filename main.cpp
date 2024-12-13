#include <fstream>
#include <string>
#include <vector>
//#include "passDriver.h"
#include "ExprTestLexer.h"
#include "ExprTestParser.h"

#include "antlr4-runtime.h"

#include "MyCVisitor.cpp"

using namespace antlr_test;
using namespace std;
using namespace antlr4;
int main(int argc , char* argv[]) {
    vector<int> passSwitch;
    if (argc == 2){
        string arg(argv[1]);
        for(auto s: arg) {
            passSwitch.push_back(int(s - '0'));
        }
    }

    std::ifstream in;
    in.open("../test.sysy");
    ANTLRInputStream input(in);
    ExprTestLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    ExprTestParser parser(&tokens);
    ExprTestParser::CalContext *root = parser.cal();
    ASTVisitor visitor;
    visitor.visitCal(root);
    //auto M = visitor.visit();
    //auto Builder = visitor.getBuilder();
    //PassDriver driver(std::move(M), std::move(Builder), passSwitch);
    //driver.run();
    return 0;
}
// #include 
// int main(){

// }