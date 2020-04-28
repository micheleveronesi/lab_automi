
// Generated from tinyc.g4 by ANTLR 4.7.2



#include "tinycParser.h"


using namespace antlrcpp;
using namespace antlr4;

tinycParser::tinycParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

tinycParser::~tinycParser() {
  delete _interpreter;
}

std::string tinycParser::getGrammarFileName() const {
  return "tinyc.g4";
}

const std::vector<std::string>& tinycParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& tinycParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

tinycParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::ProgramContext* tinycParser::StartContext::program() {
  return getRuleContext<tinycParser::ProgramContext>(0);
}

tree::TerminalNode* tinycParser::StartContext::EOF() {
  return getToken(tinycParser::EOF, 0);
}


size_t tinycParser::StartContext::getRuleIndex() const {
  return tinycParser::RuleStart;
}


tinycParser::StartContext* tinycParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, tinycParser::RuleStart);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    program();
    setState(37);
    match(tinycParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

tinycParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::StatementContext* tinycParser::ProgramContext::statement() {
  return getRuleContext<tinycParser::StatementContext>(0);
}

tinycParser::ProgramContext* tinycParser::ProgramContext::program() {
  return getRuleContext<tinycParser::ProgramContext>(0);
}


size_t tinycParser::ProgramContext::getRuleIndex() const {
  return tinycParser::RuleProgram;
}


tinycParser::ProgramContext* tinycParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, tinycParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(39);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(40);
      statement();
      setState(41);
      program();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

tinycParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::DeclContext* tinycParser::StatementContext::decl() {
  return getRuleContext<tinycParser::DeclContext>(0);
}

tinycParser::AssignContext* tinycParser::StatementContext::assign() {
  return getRuleContext<tinycParser::AssignContext>(0);
}

tinycParser::LoopContext* tinycParser::StatementContext::loop() {
  return getRuleContext<tinycParser::LoopContext>(0);
}

tinycParser::OutContext* tinycParser::StatementContext::out() {
  return getRuleContext<tinycParser::OutContext>(0);
}

tinycParser::BranchContext* tinycParser::StatementContext::branch() {
  return getRuleContext<tinycParser::BranchContext>(0);
}


size_t tinycParser::StatementContext::getRuleIndex() const {
  return tinycParser::RuleStatement;
}


tinycParser::StatementContext* tinycParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, tinycParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinycParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(45);
        decl();
        setState(46);
        match(tinycParser::T__0);
        break;
      }

      case tinycParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(48);
        assign();
        setState(49);
        match(tinycParser::T__0);
        break;
      }

      case tinycParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(51);
        loop();
        break;
      }

      case tinycParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(52);
        out();
        setState(53);
        match(tinycParser::T__0);
        break;
      }

      case tinycParser::T__8: {
        enterOuterAlt(_localctx, 5);
        setState(55);
        branch();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

tinycParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinycParser::DeclContext::ID() {
  return getToken(tinycParser::ID, 0);
}


size_t tinycParser::DeclContext::getRuleIndex() const {
  return tinycParser::RuleDecl;
}


tinycParser::DeclContext* tinycParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 6, tinycParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(tinycParser::T__1);
    setState(59);
    match(tinycParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

tinycParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinycParser::AssignContext::ID() {
  return getToken(tinycParser::ID, 0);
}

tinycParser::RobjContext* tinycParser::AssignContext::robj() {
  return getRuleContext<tinycParser::RobjContext>(0);
}


size_t tinycParser::AssignContext::getRuleIndex() const {
  return tinycParser::RuleAssign;
}


tinycParser::AssignContext* tinycParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 8, tinycParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(tinycParser::ID);
    setState(62);
    match(tinycParser::T__2);
    setState(63);
    robj();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RobjContext ------------------------------------------------------------------

tinycParser::RobjContext::RobjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::InContext* tinycParser::RobjContext::in() {
  return getRuleContext<tinycParser::InContext>(0);
}

tinycParser::ExprContext* tinycParser::RobjContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}


size_t tinycParser::RobjContext::getRuleIndex() const {
  return tinycParser::RuleRobj;
}


tinycParser::RobjContext* tinycParser::robj() {
  RobjContext *_localctx = _tracker.createInstance<RobjContext>(_ctx, getState());
  enterRule(_localctx, 10, tinycParser::RuleRobj);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinycParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(65);
        in();
        break;
      }

      case tinycParser::T__4:
      case tinycParser::ID:
      case tinycParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(66);
        expr(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext ------------------------------------------------------------------

tinycParser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::WobjContext* tinycParser::OutContext::wobj() {
  return getRuleContext<tinycParser::WobjContext>(0);
}


size_t tinycParser::OutContext::getRuleIndex() const {
  return tinycParser::RuleOut;
}


tinycParser::OutContext* tinycParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 12, tinycParser::RuleOut);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(tinycParser::T__3);
    setState(70);
    match(tinycParser::T__4);
    setState(71);
    wobj();
    setState(72);
    match(tinycParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WobjContext ------------------------------------------------------------------

tinycParser::WobjContext::WobjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::ExprContext* tinycParser::WobjContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}

tinycParser::StrContext* tinycParser::WobjContext::str() {
  return getRuleContext<tinycParser::StrContext>(0);
}


size_t tinycParser::WobjContext::getRuleIndex() const {
  return tinycParser::RuleWobj;
}


tinycParser::WobjContext* tinycParser::wobj() {
  WobjContext *_localctx = _tracker.createInstance<WobjContext>(_ctx, getState());
  enterRule(_localctx, 14, tinycParser::RuleWobj);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinycParser::T__4:
      case tinycParser::ID:
      case tinycParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        expr(0);
        break;
      }

      case tinycParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(75);
        str();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrContext ------------------------------------------------------------------

tinycParser::StrContext::StrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t tinycParser::StrContext::getRuleIndex() const {
  return tinycParser::RuleStr;
}


tinycParser::StrContext* tinycParser::str() {
  StrContext *_localctx = _tracker.createInstance<StrContext>(_ctx, getState());
  enterRule(_localctx, 16, tinycParser::RuleStr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(tinycParser::T__6);
    setState(82);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(79);
        matchWildcard(); 
      }
      setState(84);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(85);
    match(tinycParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InContext ------------------------------------------------------------------

tinycParser::InContext::InContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t tinycParser::InContext::getRuleIndex() const {
  return tinycParser::RuleIn;
}


tinycParser::InContext* tinycParser::in() {
  InContext *_localctx = _tracker.createInstance<InContext>(_ctx, getState());
  enterRule(_localctx, 18, tinycParser::RuleIn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(tinycParser::T__7);
    setState(88);
    match(tinycParser::T__4);
    setState(89);
    match(tinycParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchContext ------------------------------------------------------------------

tinycParser::BranchContext::BranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::RelationContext* tinycParser::BranchContext::relation() {
  return getRuleContext<tinycParser::RelationContext>(0);
}

std::vector<tinycParser::ProgramContext *> tinycParser::BranchContext::program() {
  return getRuleContexts<tinycParser::ProgramContext>();
}

tinycParser::ProgramContext* tinycParser::BranchContext::program(size_t i) {
  return getRuleContext<tinycParser::ProgramContext>(i);
}


size_t tinycParser::BranchContext::getRuleIndex() const {
  return tinycParser::RuleBranch;
}


tinycParser::BranchContext* tinycParser::branch() {
  BranchContext *_localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 20, tinycParser::RuleBranch);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      match(tinycParser::T__8);
      setState(92);
      match(tinycParser::T__4);
      setState(93);
      relation(0);
      setState(94);
      match(tinycParser::T__5);
      setState(95);
      match(tinycParser::T__9);
      setState(96);
      program();
      setState(97);
      match(tinycParser::T__10);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(99);
      match(tinycParser::T__8);
      setState(100);
      match(tinycParser::T__4);
      setState(101);
      relation(0);
      setState(102);
      match(tinycParser::T__5);
      setState(103);
      match(tinycParser::T__9);
      setState(104);
      program();
      setState(105);
      match(tinycParser::T__10);
      setState(106);
      match(tinycParser::T__11);
      setState(107);
      match(tinycParser::T__9);
      setState(108);
      program();
      setState(109);
      match(tinycParser::T__10);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

tinycParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::RelationContext* tinycParser::LoopContext::relation() {
  return getRuleContext<tinycParser::RelationContext>(0);
}

tinycParser::ProgramContext* tinycParser::LoopContext::program() {
  return getRuleContext<tinycParser::ProgramContext>(0);
}


size_t tinycParser::LoopContext::getRuleIndex() const {
  return tinycParser::RuleLoop;
}


tinycParser::LoopContext* tinycParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 22, tinycParser::RuleLoop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(tinycParser::T__12);
    setState(114);
    match(tinycParser::T__4);
    setState(115);
    relation(0);
    setState(116);
    match(tinycParser::T__5);
    setState(117);
    match(tinycParser::T__9);
    setState(118);
    program();
    setState(119);
    match(tinycParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

tinycParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::TermContext* tinycParser::ExprContext::term() {
  return getRuleContext<tinycParser::TermContext>(0);
}

tinycParser::ExprContext* tinycParser::ExprContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}

tree::TerminalNode* tinycParser::ExprContext::PLUS() {
  return getToken(tinycParser::PLUS, 0);
}

tree::TerminalNode* tinycParser::ExprContext::MINUS() {
  return getToken(tinycParser::MINUS, 0);
}


size_t tinycParser::ExprContext::getRuleIndex() const {
  return tinycParser::RuleExpr;
}



tinycParser::ExprContext* tinycParser::expr() {
   return expr(0);
}

tinycParser::ExprContext* tinycParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinycParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  tinycParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, tinycParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(132);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(130);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(124);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(125);
          match(tinycParser::PLUS);
          setState(126);
          term(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(127);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(128);
          match(tinycParser::MINUS);
          setState(129);
          term(0);
          break;
        }

        } 
      }
      setState(134);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

tinycParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::FactorContext* tinycParser::TermContext::factor() {
  return getRuleContext<tinycParser::FactorContext>(0);
}

tinycParser::TermContext* tinycParser::TermContext::term() {
  return getRuleContext<tinycParser::TermContext>(0);
}

tree::TerminalNode* tinycParser::TermContext::MULT() {
  return getToken(tinycParser::MULT, 0);
}

tree::TerminalNode* tinycParser::TermContext::DIV() {
  return getToken(tinycParser::DIV, 0);
}

tree::TerminalNode* tinycParser::TermContext::MOD() {
  return getToken(tinycParser::MOD, 0);
}


size_t tinycParser::TermContext::getRuleIndex() const {
  return tinycParser::RuleTerm;
}



tinycParser::TermContext* tinycParser::term() {
   return term(0);
}

tinycParser::TermContext* tinycParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinycParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  tinycParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, tinycParser::RuleTerm, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(136);
    factor();
    _ctx->stop = _input->LT(-1);
    setState(149);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(147);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(138);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(139);
          match(tinycParser::MULT);
          setState(140);
          factor();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(141);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(142);
          match(tinycParser::DIV);
          setState(143);
          factor();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleTerm);
          setState(144);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(145);
          match(tinycParser::MOD);
          setState(146);
          factor();
          break;
        }

        } 
      }
      setState(151);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

tinycParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::ExprContext* tinycParser::FactorContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}

tree::TerminalNode* tinycParser::FactorContext::NUMBER() {
  return getToken(tinycParser::NUMBER, 0);
}

tree::TerminalNode* tinycParser::FactorContext::ID() {
  return getToken(tinycParser::ID, 0);
}


size_t tinycParser::FactorContext::getRuleIndex() const {
  return tinycParser::RuleFactor;
}


tinycParser::FactorContext* tinycParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 28, tinycParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinycParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(152);
        match(tinycParser::T__4);
        setState(153);
        expr(0);
        setState(154);
        match(tinycParser::T__5);
        break;
      }

      case tinycParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(156);
        match(tinycParser::NUMBER);
        break;
      }

      case tinycParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(157);
        match(tinycParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationContext ------------------------------------------------------------------

tinycParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::CompContext* tinycParser::RelationContext::comp() {
  return getRuleContext<tinycParser::CompContext>(0);
}

tinycParser::RelationContext* tinycParser::RelationContext::relation() {
  return getRuleContext<tinycParser::RelationContext>(0);
}

tree::TerminalNode* tinycParser::RelationContext::AND() {
  return getToken(tinycParser::AND, 0);
}

tree::TerminalNode* tinycParser::RelationContext::OR() {
  return getToken(tinycParser::OR, 0);
}


size_t tinycParser::RelationContext::getRuleIndex() const {
  return tinycParser::RuleRelation;
}



tinycParser::RelationContext* tinycParser::relation() {
   return relation(0);
}

tinycParser::RelationContext* tinycParser::relation(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinycParser::RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, parentState);
  tinycParser::RelationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, tinycParser::RuleRelation, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(161);
    comp();
    _ctx->stop = _input->LT(-1);
    setState(171);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(169);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelation);
          setState(163);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(164);
          match(tinycParser::AND);
          setState(165);
          comp();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelation);
          setState(166);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(167);
          match(tinycParser::OR);
          setState(168);
          comp();
          break;
        }

        } 
      }
      setState(173);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompContext ------------------------------------------------------------------

tinycParser::CompContext::CompContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinycParser::CompContext::NOT() {
  return getToken(tinycParser::NOT, 0);
}

std::vector<tinycParser::EqContext *> tinycParser::CompContext::eq() {
  return getRuleContexts<tinycParser::EqContext>();
}

tinycParser::EqContext* tinycParser::CompContext::eq(size_t i) {
  return getRuleContext<tinycParser::EqContext>(i);
}

tree::TerminalNode* tinycParser::CompContext::LT() {
  return getToken(tinycParser::LT, 0);
}

tree::TerminalNode* tinycParser::CompContext::LEQ() {
  return getToken(tinycParser::LEQ, 0);
}

tree::TerminalNode* tinycParser::CompContext::EQ() {
  return getToken(tinycParser::EQ, 0);
}

tree::TerminalNode* tinycParser::CompContext::NEQ() {
  return getToken(tinycParser::NEQ, 0);
}

tree::TerminalNode* tinycParser::CompContext::GEQ() {
  return getToken(tinycParser::GEQ, 0);
}

tree::TerminalNode* tinycParser::CompContext::GT() {
  return getToken(tinycParser::GT, 0);
}


size_t tinycParser::CompContext::getRuleIndex() const {
  return tinycParser::RuleComp;
}


tinycParser::CompContext* tinycParser::comp() {
  CompContext *_localctx = _tracker.createInstance<CompContext>(_ctx, getState());
  enterRule(_localctx, 32, tinycParser::RuleComp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(174);
      match(tinycParser::NOT);
      setState(175);
      eq();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      eq();
      setState(177);
      match(tinycParser::LT);
      setState(178);
      eq();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(180);
      eq();
      setState(181);
      match(tinycParser::LEQ);
      setState(182);
      eq();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(184);
      eq();
      setState(185);
      match(tinycParser::EQ);
      setState(186);
      eq();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(188);
      eq();
      setState(189);
      match(tinycParser::NEQ);
      setState(190);
      eq();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(192);
      eq();
      setState(193);
      match(tinycParser::GEQ);
      setState(194);
      eq();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(196);
      eq();
      setState(197);
      match(tinycParser::GT);
      setState(198);
      eq();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(200);
      eq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqContext ------------------------------------------------------------------

tinycParser::EqContext::EqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinycParser::RelationContext* tinycParser::EqContext::relation() {
  return getRuleContext<tinycParser::RelationContext>(0);
}

tinycParser::ExprContext* tinycParser::EqContext::expr() {
  return getRuleContext<tinycParser::ExprContext>(0);
}


size_t tinycParser::EqContext::getRuleIndex() const {
  return tinycParser::RuleEq;
}


tinycParser::EqContext* tinycParser::eq() {
  EqContext *_localctx = _tracker.createInstance<EqContext>(_ctx, getState());
  enterRule(_localctx, 34, tinycParser::RuleEq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(203);
      match(tinycParser::T__4);
      setState(204);
      relation(0);
      setState(205);
      match(tinycParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(207);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool tinycParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 13: return termSempred(dynamic_cast<TermContext *>(context), predicateIndex);
    case 15: return relationSempred(dynamic_cast<RelationContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool tinycParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool tinycParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool tinycParser::relationSempred(RelationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> tinycParser::_decisionToDFA;
atn::PredictionContextCache tinycParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN tinycParser::_atn;
std::vector<uint16_t> tinycParser::_serializedATN;

std::vector<std::string> tinycParser::_ruleNames = {
  "start", "program", "statement", "decl", "assign", "robj", "out", "wobj", 
  "str", "in", "branch", "loop", "expr", "term", "factor", "relation", "comp", 
  "eq"
};

std::vector<std::string> tinycParser::_literalNames = {
  "", "';'", "'int'", "'='", "'write'", "'('", "')'", "'\"'", "'read'", 
  "'if'", "'{'", "'}'", "'else'", "'while'", "'=='", "'<'", "'<='", "'>'", 
  "'>='", "'!='", "'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'"
};

std::vector<std::string> tinycParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "EQ", "LT", "LEQ", 
  "GT", "GEQ", "NEQ", "PLUS", "MINUS", "MULT", "DIV", "MOD", "AND", "OR", 
  "NOT", "ID", "NUMBER", "COMMENT", "LINE_COMMENT", "WS", "ErrorChar"
};

dfa::Vocabulary tinycParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> tinycParser::_tokenNames;

tinycParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x23, 0xd5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 0xa, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x46, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x4f, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x7, 0xa, 0x53, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x56, 0xb, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x72, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x85, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x88, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0x96, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x99, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xa1, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xac, 0xa, 0x11, 0xc, 
    0x11, 0xe, 0x11, 0xaf, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xcc, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xd3, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x54, 0x5, 0x1a, 0x1c, 0x20, 0x14, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x2, 0x2, 0x2, 0xdc, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x47, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x50, 0x3, 0x2, 0x2, 0x2, 0x14, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x71, 0x3, 0x2, 0x2, 0x2, 0x18, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x22, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0x4, 
    0x3, 0x2, 0x27, 0x28, 0x7, 0x2, 0x2, 0x3, 0x28, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2e, 0x5, 0x6, 0x4, 0x2, 0x2a, 0x2b, 0x5, 0x6, 0x4, 0x2, 
    0x2b, 0x2c, 0x5, 0x4, 0x3, 0x2, 0x2c, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x5, 0x8, 0x5, 0x2, 0x30, 0x31, 0x7, 
    0x3, 0x2, 0x2, 0x31, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x5, 0xa, 
    0x6, 0x2, 0x33, 0x34, 0x7, 0x3, 0x2, 0x2, 0x34, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x3b, 0x5, 0x18, 0xd, 0x2, 0x36, 0x37, 0x5, 0xe, 0x8, 0x2, 
    0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3b, 0x5, 0x16, 0xc, 0x2, 0x3a, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0x4, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x1e, 0x2, 
    0x2, 0x3e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x1e, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0x5, 0x2, 0x2, 0x41, 0x42, 0x5, 0xc, 0x7, 0x2, 0x42, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x5, 0x14, 0xb, 0x2, 0x44, 0x46, 
    0x5, 0x1a, 0xe, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0xd, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x6, 
    0x2, 0x2, 0x48, 0x49, 0x7, 0x7, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x10, 0x9, 
    0x2, 0x4a, 0x4b, 0x7, 0x8, 0x2, 0x2, 0x4b, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x4f, 0x5, 0x1a, 0xe, 0x2, 0x4d, 0x4f, 0x5, 0x12, 0xa, 0x2, 0x4e, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x54, 0x7, 0x9, 0x2, 0x2, 0x51, 0x53, 0xb, 
    0x2, 0x2, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x58, 0x7, 0x9, 0x2, 0x2, 0x58, 0x13, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x5a, 0x7, 0xa, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x7, 0x2, 0x2, 0x5b, 0x5c, 
    0x7, 0x8, 0x2, 0x2, 0x5c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 
    0xb, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x7, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x20, 
    0x11, 0x2, 0x60, 0x61, 0x7, 0x8, 0x2, 0x2, 0x61, 0x62, 0x7, 0xc, 0x2, 
    0x2, 0x62, 0x63, 0x5, 0x4, 0x3, 0x2, 0x63, 0x64, 0x7, 0xd, 0x2, 0x2, 
    0x64, 0x72, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0xb, 0x2, 0x2, 0x66, 
    0x67, 0x7, 0x7, 0x2, 0x2, 0x67, 0x68, 0x5, 0x20, 0x11, 0x2, 0x68, 0x69, 
    0x7, 0x8, 0x2, 0x2, 0x69, 0x6a, 0x7, 0xc, 0x2, 0x2, 0x6a, 0x6b, 0x5, 
    0x4, 0x3, 0x2, 0x6b, 0x6c, 0x7, 0xd, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0xe, 
    0x2, 0x2, 0x6d, 0x6e, 0x7, 0xc, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x4, 0x3, 
    0x2, 0x6f, 0x70, 0x7, 0xd, 0x2, 0x2, 0x70, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x71, 0x65, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0xf, 0x2, 0x2, 0x74, 0x75, 
    0x7, 0x7, 0x2, 0x2, 0x75, 0x76, 0x5, 0x20, 0x11, 0x2, 0x76, 0x77, 0x7, 
    0x8, 0x2, 0x2, 0x77, 0x78, 0x7, 0xc, 0x2, 0x2, 0x78, 0x79, 0x5, 0x4, 
    0x3, 0x2, 0x79, 0x7a, 0x7, 0xd, 0x2, 0x2, 0x7a, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x7c, 0x8, 0xe, 0x1, 0x2, 0x7c, 0x7d, 0x5, 0x1c, 0xf, 0x2, 
    0x7d, 0x86, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0xc, 0x5, 0x2, 0x2, 0x7f, 
    0x80, 0x7, 0x16, 0x2, 0x2, 0x80, 0x85, 0x5, 0x1c, 0xf, 0x2, 0x81, 0x82, 
    0xc, 0x4, 0x2, 0x2, 0x82, 0x83, 0x7, 0x17, 0x2, 0x2, 0x83, 0x85, 0x5, 
    0x1c, 0xf, 0x2, 0x84, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x84, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x8, 0xf, 0x1, 0x2, 0x8a, 
    0x8b, 0x5, 0x1e, 0x10, 0x2, 0x8b, 0x97, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 
    0xc, 0x6, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x18, 0x2, 0x2, 0x8e, 0x96, 0x5, 
    0x1e, 0x10, 0x2, 0x8f, 0x90, 0xc, 0x5, 0x2, 0x2, 0x90, 0x91, 0x7, 0x19, 
    0x2, 0x2, 0x91, 0x96, 0x5, 0x1e, 0x10, 0x2, 0x92, 0x93, 0xc, 0x4, 0x2, 
    0x2, 0x93, 0x94, 0x7, 0x1a, 0x2, 0x2, 0x94, 0x96, 0x5, 0x1e, 0x10, 0x2, 
    0x95, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x7, 
    0x2, 0x2, 0x9b, 0x9c, 0x5, 0x1a, 0xe, 0x2, 0x9c, 0x9d, 0x7, 0x8, 0x2, 
    0x2, 0x9d, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x7, 0x1f, 0x2, 0x2, 
    0x9f, 0xa1, 0x7, 0x1e, 0x2, 0x2, 0xa0, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x8, 0x11, 0x1, 0x2, 0xa3, 0xa4, 0x5, 
    0x22, 0x12, 0x2, 0xa4, 0xad, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0xc, 0x5, 
    0x2, 0x2, 0xa6, 0xa7, 0x7, 0x1b, 0x2, 0x2, 0xa7, 0xac, 0x5, 0x22, 0x12, 
    0x2, 0xa8, 0xa9, 0xc, 0x4, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x1c, 0x2, 0x2, 
    0xaa, 0xac, 0x5, 0x22, 0x12, 0x2, 0xab, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x1d, 
    0x2, 0x2, 0xb1, 0xcc, 0x5, 0x24, 0x13, 0x2, 0xb2, 0xb3, 0x5, 0x24, 0x13, 
    0x2, 0xb3, 0xb4, 0x7, 0x11, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x24, 0x13, 0x2, 
    0xb5, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x24, 0x13, 0x2, 0xb7, 
    0xb8, 0x7, 0x12, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x24, 0x13, 0x2, 0xb9, 0xcc, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x24, 0x13, 0x2, 0xbb, 0xbc, 0x7, 
    0x10, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x24, 0x13, 0x2, 0xbd, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbf, 0x5, 0x24, 0x13, 0x2, 0xbf, 0xc0, 0x7, 0x15, 0x2, 
    0x2, 0xc0, 0xc1, 0x5, 0x24, 0x13, 0x2, 0xc1, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc3, 0x5, 0x24, 0x13, 0x2, 0xc3, 0xc4, 0x7, 0x14, 0x2, 0x2, 0xc4, 
    0xc5, 0x5, 0x24, 0x13, 0x2, 0xc5, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x5, 0x24, 0x13, 0x2, 0xc7, 0xc8, 0x7, 0x13, 0x2, 0x2, 0xc8, 0xc9, 0x5, 
    0x24, 0x13, 0x2, 0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x24, 
    0x13, 0x2, 0xcb, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x7, 0x2, 0x2, 0xce, 0xcf, 0x5, 
    0x20, 0x11, 0x2, 0xcf, 0xd0, 0x7, 0x8, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd3, 0x5, 0x1a, 0xe, 0x2, 0xd2, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x2d, 0x3a, 0x45, 0x4e, 0x54, 0x71, 0x84, 0x86, 0x95, 0x97, 0xa0, 
    0xab, 0xad, 0xcb, 0xd2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

tinycParser::Initializer tinycParser::_init;
