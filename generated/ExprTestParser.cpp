
// Generated from ./ExprTest.g4 by ANTLR 4.13.2


#include "ExprTestListener.h"
#include "ExprTestVisitor.h"

#include "ExprTestParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprTestParserStaticData final {
  ExprTestParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprTestParserStaticData(const ExprTestParserStaticData&) = delete;
  ExprTestParserStaticData(ExprTestParserStaticData&&) = delete;
  ExprTestParserStaticData& operator=(const ExprTestParserStaticData&) = delete;
  ExprTestParserStaticData& operator=(ExprTestParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprtestParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ExprTestParserStaticData> exprtestParserStaticData = nullptr;

void exprtestParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprtestParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprtestParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprTestParserStaticData>(
    std::vector<std::string>{
      "cal", "expr"
    },
    std::vector<std::string>{
      "", "'*'", "'+'"
    },
    std::vector<std::string>{
      "", "MUL", "ADD", "INT", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,5,21,2,0,7,0,2,1,7,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	5,1,16,8,1,10,1,12,1,19,9,1,1,1,0,1,2,2,0,2,0,0,20,0,4,1,0,0,0,2,6,1,
  	0,0,0,4,5,3,2,1,0,5,1,1,0,0,0,6,7,6,1,-1,0,7,8,5,3,0,0,8,17,1,0,0,0,9,
  	10,10,3,0,0,10,11,5,1,0,0,11,16,3,2,1,4,12,13,10,2,0,0,13,14,5,2,0,0,
  	14,16,3,2,1,3,15,9,1,0,0,0,15,12,1,0,0,0,16,19,1,0,0,0,17,15,1,0,0,0,
  	17,18,1,0,0,0,18,3,1,0,0,0,19,17,1,0,0,0,2,15,17
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprtestParserStaticData = std::move(staticData);
}

}

ExprTestParser::ExprTestParser(TokenStream *input) : ExprTestParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprTestParser::ExprTestParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprTestParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprtestParserStaticData->atn, exprtestParserStaticData->decisionToDFA, exprtestParserStaticData->sharedContextCache, options);
}

ExprTestParser::~ExprTestParser() {
  delete _interpreter;
}

const atn::ATN& ExprTestParser::getATN() const {
  return *exprtestParserStaticData->atn;
}

std::string ExprTestParser::getGrammarFileName() const {
  return "ExprTest.g4";
}

const std::vector<std::string>& ExprTestParser::getRuleNames() const {
  return exprtestParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprTestParser::getVocabulary() const {
  return exprtestParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprTestParser::getSerializedATN() const {
  return exprtestParserStaticData->serializedATN;
}


//----------------- CalContext ------------------------------------------------------------------

ExprTestParser::CalContext::CalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprTestParser::ExprContext* ExprTestParser::CalContext::expr() {
  return getRuleContext<ExprTestParser::ExprContext>(0);
}


size_t ExprTestParser::CalContext::getRuleIndex() const {
  return ExprTestParser::RuleCal;
}

void ExprTestParser::CalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCal(this);
}

void ExprTestParser::CalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCal(this);
}


std::any ExprTestParser::CalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprTestVisitor*>(visitor))
    return parserVisitor->visitCal(this);
  else
    return visitor->visitChildren(this);
}

ExprTestParser::CalContext* ExprTestParser::cal() {
  CalContext *_localctx = _tracker.createInstance<CalContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprTestParser::RuleCal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExprTestParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprTestParser::ExprContext::getRuleIndex() const {
  return ExprTestParser::RuleExpr;
}

void ExprTestParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

std::vector<ExprTestParser::ExprContext *> ExprTestParser::AddContext::expr() {
  return getRuleContexts<ExprTestParser::ExprContext>();
}

ExprTestParser::ExprContext* ExprTestParser::AddContext::expr(size_t i) {
  return getRuleContext<ExprTestParser::ExprContext>(i);
}

tree::TerminalNode* ExprTestParser::AddContext::ADD() {
  return getToken(ExprTestParser::ADD, 0);
}

ExprTestParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprTestParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void ExprTestParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

std::any ExprTestParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprTestVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulContext ------------------------------------------------------------------

std::vector<ExprTestParser::ExprContext *> ExprTestParser::MulContext::expr() {
  return getRuleContexts<ExprTestParser::ExprContext>();
}

ExprTestParser::ExprContext* ExprTestParser::MulContext::expr(size_t i) {
  return getRuleContext<ExprTestParser::ExprContext>(i);
}

tree::TerminalNode* ExprTestParser::MulContext::MUL() {
  return getToken(ExprTestParser::MUL, 0);
}

ExprTestParser::MulContext::MulContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprTestParser::MulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul(this);
}
void ExprTestParser::MulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul(this);
}

std::any ExprTestParser::MulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprTestVisitor*>(visitor))
    return parserVisitor->visitMul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* ExprTestParser::IntContext::INT() {
  return getToken(ExprTestParser::INT, 0);
}

ExprTestParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprTestParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void ExprTestParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprTestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

std::any ExprTestParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprTestVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

ExprTestParser::ExprContext* ExprTestParser::expr() {
   return expr(0);
}

ExprTestParser::ExprContext* ExprTestParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprTestParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprTestParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprTestParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<IntContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(7);
    match(ExprTestParser::INT);
    _ctx->stop = _input->LT(-1);
    setState(17);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(15);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(9);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(10);
          match(ExprTestParser::MUL);
          setState(11);
          expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(12);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(13);
          match(ExprTestParser::ADD);
          setState(14);
          expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(19);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ExprTestParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprTestParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void ExprTestParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprtestParserInitialize();
#else
  ::antlr4::internal::call_once(exprtestParserOnceFlag, exprtestParserInitialize);
#endif
}
