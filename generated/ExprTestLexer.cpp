
// Generated from ./ExprTest.g4 by ANTLR 4.13.2


#include "ExprTestLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprTestLexerStaticData final {
  ExprTestLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprTestLexerStaticData(const ExprTestLexerStaticData&) = delete;
  ExprTestLexerStaticData(ExprTestLexerStaticData&&) = delete;
  ExprTestLexerStaticData& operator=(const ExprTestLexerStaticData&) = delete;
  ExprTestLexerStaticData& operator=(ExprTestLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprtestlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ExprTestLexerStaticData> exprtestlexerLexerStaticData = nullptr;

void exprtestlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprtestlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprtestlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprTestLexerStaticData>(
    std::vector<std::string>{
      "MUL", "ADD", "INT", "NEWLINE", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'*'", "'+'"
    },
    std::vector<std::string>{
      "", "MUL", "ADD", "INT", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,5,34,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,2,5,2,19,8,2,10,2,12,2,22,9,2,3,2,24,8,2,1,3,3,3,27,8,3,1,3,
  	1,3,1,4,1,4,1,4,1,4,0,0,5,1,1,3,2,5,3,7,4,9,5,1,0,3,1,0,49,57,1,0,48,
  	57,2,0,9,10,32,32,36,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,
  	0,9,1,0,0,0,1,11,1,0,0,0,3,13,1,0,0,0,5,23,1,0,0,0,7,26,1,0,0,0,9,30,
  	1,0,0,0,11,12,5,42,0,0,12,2,1,0,0,0,13,14,5,43,0,0,14,4,1,0,0,0,15,24,
  	5,48,0,0,16,20,7,0,0,0,17,19,7,1,0,0,18,17,1,0,0,0,19,22,1,0,0,0,20,18,
  	1,0,0,0,20,21,1,0,0,0,21,24,1,0,0,0,22,20,1,0,0,0,23,15,1,0,0,0,23,16,
  	1,0,0,0,24,6,1,0,0,0,25,27,5,13,0,0,26,25,1,0,0,0,26,27,1,0,0,0,27,28,
  	1,0,0,0,28,29,5,10,0,0,29,8,1,0,0,0,30,31,7,2,0,0,31,32,1,0,0,0,32,33,
  	6,4,0,0,33,10,1,0,0,0,4,0,20,23,26,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprtestlexerLexerStaticData = std::move(staticData);
}

}

ExprTestLexer::ExprTestLexer(CharStream *input) : Lexer(input) {
  ExprTestLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprtestlexerLexerStaticData->atn, exprtestlexerLexerStaticData->decisionToDFA, exprtestlexerLexerStaticData->sharedContextCache);
}

ExprTestLexer::~ExprTestLexer() {
  delete _interpreter;
}

std::string ExprTestLexer::getGrammarFileName() const {
  return "ExprTest.g4";
}

const std::vector<std::string>& ExprTestLexer::getRuleNames() const {
  return exprtestlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprTestLexer::getChannelNames() const {
  return exprtestlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprTestLexer::getModeNames() const {
  return exprtestlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprTestLexer::getVocabulary() const {
  return exprtestlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprTestLexer::getSerializedATN() const {
  return exprtestlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprTestLexer::getATN() const {
  return *exprtestlexerLexerStaticData->atn;
}




void ExprTestLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprtestlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprtestlexerLexerOnceFlag, exprtestlexerLexerInitialize);
#endif
}
