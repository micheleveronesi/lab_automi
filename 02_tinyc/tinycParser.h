
// Generated from tinyc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  tinycParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, EQ = 14, 
    LT = 15, LEQ = 16, GT = 17, GEQ = 18, NEQ = 19, PLUS = 20, MINUS = 21, 
    MULT = 22, DIV = 23, MOD = 24, AND = 25, OR = 26, NOT = 27, ID = 28, 
    NUMBER = 29, COMMENT = 30, LINE_COMMENT = 31, WS = 32, ErrorChar = 33
  };

  enum {
    RuleStart = 0, RuleProgram = 1, RuleStatement = 2, RuleDecl = 3, RuleAssign = 4, 
    RuleRobj = 5, RuleOut = 6, RuleWobj = 7, RuleStr = 8, RuleIn = 9, RuleBranch = 10, 
    RuleLoop = 11, RuleExpr = 12, RuleTerm = 13, RuleFactor = 14, RuleRelation = 15, 
    RuleComp = 16, RuleEq = 17
  };

  tinycParser(antlr4::TokenStream *input);
  ~tinycParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartContext;
  class ProgramContext;
  class StatementContext;
  class DeclContext;
  class AssignContext;
  class RobjContext;
  class OutContext;
  class WobjContext;
  class StrContext;
  class InContext;
  class BranchContext;
  class LoopContext;
  class ExprContext;
  class TermContext;
  class FactorContext;
  class RelationContext;
  class CompContext;
  class EqContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();
    antlr4::tree::TerminalNode *EOF();

   
  };

  StartContext* start();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    ProgramContext *program();

   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    AssignContext *assign();
    LoopContext *loop();
    OutContext *out();
    BranchContext *branch();

   
  };

  StatementContext* statement();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

   
  };

  DeclContext* decl();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    RobjContext *robj();

   
  };

  AssignContext* assign();

  class  RobjContext : public antlr4::ParserRuleContext {
  public:
    RobjContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InContext *in();
    ExprContext *expr();

   
  };

  RobjContext* robj();

  class  OutContext : public antlr4::ParserRuleContext {
  public:
    OutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WobjContext *wobj();

   
  };

  OutContext* out();

  class  WobjContext : public antlr4::ParserRuleContext {
  public:
    WobjContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    StrContext *str();

   
  };

  WobjContext* wobj();

  class  StrContext : public antlr4::ParserRuleContext {
  public:
    StrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  StrContext* str();

  class  InContext : public antlr4::ParserRuleContext {
  public:
    InContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  InContext* in();

  class  BranchContext : public antlr4::ParserRuleContext {
  public:
    BranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationContext *relation();
    std::vector<ProgramContext *> program();
    ProgramContext* program(size_t i);

   
  };

  BranchContext* branch();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationContext *relation();
    ProgramContext *program();

   
  };

  LoopContext* loop();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    ExprContext *expr();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    TermContext *term();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

   
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ID();

   
  };

  FactorContext* factor();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompContext *comp();
    RelationContext *relation();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

   
  };

  RelationContext* relation();
  RelationContext* relation(int precedence);
  class  CompContext : public antlr4::ParserRuleContext {
  public:
    CompContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<EqContext *> eq();
    EqContext* eq(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *GT();

   
  };

  CompContext* comp();

  class  EqContext : public antlr4::ParserRuleContext {
  public:
    EqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationContext *relation();
    ExprContext *expr();

   
  };

  EqContext* eq();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);
  bool relationSempred(RelationContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

