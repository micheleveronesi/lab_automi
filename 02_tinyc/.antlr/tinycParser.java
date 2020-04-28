// Generated from /home/michele/Desktop/lab_automi/02_tinyc/tinyc.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class tinycParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, EQ=14, LT=15, LEQ=16, GT=17, GEQ=18, 
		NEQ=19, PLUS=20, MINUS=21, MULT=22, DIV=23, MOD=24, AND=25, OR=26, NOT=27, 
		ID=28, NUMBER=29, COMMENT=30, LINE_COMMENT=31, WS=32, ErrorChar=33;
	public static final int
		RULE_start = 0, RULE_program = 1, RULE_statement = 2, RULE_decl = 3, RULE_assign = 4, 
		RULE_robj = 5, RULE_out = 6, RULE_wobj = 7, RULE_str = 8, RULE_in = 9, 
		RULE_branch = 10, RULE_loop = 11, RULE_expr = 12, RULE_term = 13, RULE_factor = 14, 
		RULE_relation = 15, RULE_comp = 16, RULE_eq = 17;
	public static final String[] ruleNames = {
		"start", "program", "statement", "decl", "assign", "robj", "out", "wobj", 
		"str", "in", "branch", "loop", "expr", "term", "factor", "relation", "comp", 
		"eq"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'int'", "'='", "'write'", "'('", "')'", "'\"'", "'read'", 
		"'if'", "'{'", "'}'", "'else'", "'while'", "'=='", "'<'", "'<='", "'>'", 
		"'>='", "'!='", "'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, "EQ", "LT", "LEQ", "GT", "GEQ", "NEQ", "PLUS", "MINUS", "MULT", 
		"DIV", "MOD", "AND", "OR", "NOT", "ID", "NUMBER", "COMMENT", "LINE_COMMENT", 
		"WS", "ErrorChar"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "tinyc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public tinycParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class StartContext extends ParserRuleContext {
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public TerminalNode EOF() { return getToken(tinycParser.EOF, 0); }
		public StartContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_start; }
	}

	public final StartContext start() throws RecognitionException {
		StartContext _localctx = new StartContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_start);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(36);
			program();
			setState(37);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgramContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_program);
		try {
			setState(43);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(39);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(40);
				statement();
				setState(41);
				program();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public DeclContext decl() {
			return getRuleContext(DeclContext.class,0);
		}
		public AssignContext assign() {
			return getRuleContext(AssignContext.class,0);
		}
		public LoopContext loop() {
			return getRuleContext(LoopContext.class,0);
		}
		public OutContext out() {
			return getRuleContext(OutContext.class,0);
		}
		public BranchContext branch() {
			return getRuleContext(BranchContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statement);
		try {
			setState(56);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
				enterOuterAlt(_localctx, 1);
				{
				setState(45);
				decl();
				setState(46);
				match(T__0);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(48);
				assign();
				setState(49);
				match(T__0);
				}
				break;
			case T__12:
				enterOuterAlt(_localctx, 3);
				{
				setState(51);
				loop();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 4);
				{
				setState(52);
				out();
				setState(53);
				match(T__0);
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 5);
				{
				setState(55);
				branch();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(tinycParser.ID, 0); }
		public DeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decl; }
	}

	public final DeclContext decl() throws RecognitionException {
		DeclContext _localctx = new DeclContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_decl);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			match(T__1);
			setState(59);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(tinycParser.ID, 0); }
		public RobjContext robj() {
			return getRuleContext(RobjContext.class,0);
		}
		public AssignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign; }
	}

	public final AssignContext assign() throws RecognitionException {
		AssignContext _localctx = new AssignContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_assign);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(61);
			match(ID);
			setState(62);
			match(T__2);
			setState(63);
			robj();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RobjContext extends ParserRuleContext {
		public InContext in() {
			return getRuleContext(InContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public RobjContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_robj; }
	}

	public final RobjContext robj() throws RecognitionException {
		RobjContext _localctx = new RobjContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_robj);
		try {
			setState(67);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(65);
				in();
				}
				break;
			case T__4:
			case ID:
			case NUMBER:
				enterOuterAlt(_localctx, 2);
				{
				setState(66);
				expr(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OutContext extends ParserRuleContext {
		public WobjContext wobj() {
			return getRuleContext(WobjContext.class,0);
		}
		public OutContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_out; }
	}

	public final OutContext out() throws RecognitionException {
		OutContext _localctx = new OutContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_out);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			match(T__3);
			setState(70);
			match(T__4);
			setState(71);
			wobj();
			setState(72);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WobjContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StrContext str() {
			return getRuleContext(StrContext.class,0);
		}
		public WobjContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_wobj; }
	}

	public final WobjContext wobj() throws RecognitionException {
		WobjContext _localctx = new WobjContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_wobj);
		try {
			setState(76);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case ID:
			case NUMBER:
				enterOuterAlt(_localctx, 1);
				{
				setState(74);
				expr(0);
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 2);
				{
				setState(75);
				str();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StrContext extends ParserRuleContext {
		public StrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_str; }
	}

	public final StrContext str() throws RecognitionException {
		StrContext _localctx = new StrContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_str);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(78);
			match(T__6);
			setState(82);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					{
					setState(79);
					matchWildcard();
					}
					} 
				}
				setState(84);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(85);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InContext extends ParserRuleContext {
		public InContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_in; }
	}

	public final InContext in() throws RecognitionException {
		InContext _localctx = new InContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_in);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(T__7);
			setState(88);
			match(T__4);
			setState(89);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BranchContext extends ParserRuleContext {
		public RelationContext relation() {
			return getRuleContext(RelationContext.class,0);
		}
		public List<ProgramContext> program() {
			return getRuleContexts(ProgramContext.class);
		}
		public ProgramContext program(int i) {
			return getRuleContext(ProgramContext.class,i);
		}
		public BranchContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_branch; }
	}

	public final BranchContext branch() throws RecognitionException {
		BranchContext _localctx = new BranchContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_branch);
		try {
			setState(111);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(91);
				match(T__8);
				setState(92);
				match(T__4);
				setState(93);
				relation(0);
				setState(94);
				match(T__5);
				setState(95);
				match(T__9);
				setState(96);
				program();
				setState(97);
				match(T__10);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(99);
				match(T__8);
				setState(100);
				match(T__4);
				setState(101);
				relation(0);
				setState(102);
				match(T__5);
				setState(103);
				match(T__9);
				setState(104);
				program();
				setState(105);
				match(T__10);
				setState(106);
				match(T__11);
				setState(107);
				match(T__9);
				setState(108);
				program();
				setState(109);
				match(T__10);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LoopContext extends ParserRuleContext {
		public RelationContext relation() {
			return getRuleContext(RelationContext.class,0);
		}
		public ProgramContext program() {
			return getRuleContext(ProgramContext.class,0);
		}
		public LoopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loop; }
	}

	public final LoopContext loop() throws RecognitionException {
		LoopContext _localctx = new LoopContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_loop);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			match(T__12);
			setState(114);
			match(T__4);
			setState(115);
			relation(0);
			setState(116);
			match(T__5);
			setState(117);
			match(T__9);
			setState(118);
			program();
			setState(119);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(tinycParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(tinycParser.MINUS, 0); }
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(122);
			term(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(132);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(130);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(124);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(125);
						match(PLUS);
						setState(126);
						term(0);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(127);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(128);
						match(MINUS);
						setState(129);
						term(0);
						}
						break;
					}
					} 
				}
				setState(134);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TermContext extends ParserRuleContext {
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public TerminalNode MULT() { return getToken(tinycParser.MULT, 0); }
		public TerminalNode DIV() { return getToken(tinycParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(tinycParser.MOD, 0); }
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	}

	public final TermContext term() throws RecognitionException {
		return term(0);
	}

	private TermContext term(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TermContext _localctx = new TermContext(_ctx, _parentState);
		TermContext _prevctx = _localctx;
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_term, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(136);
			factor();
			}
			_ctx.stop = _input.LT(-1);
			setState(149);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(147);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
					case 1:
						{
						_localctx = new TermContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_term);
						setState(138);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(139);
						match(MULT);
						setState(140);
						factor();
						}
						break;
					case 2:
						{
						_localctx = new TermContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_term);
						setState(141);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(142);
						match(DIV);
						setState(143);
						factor();
						}
						break;
					case 3:
						{
						_localctx = new TermContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_term);
						setState(144);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(145);
						match(MOD);
						setState(146);
						factor();
						}
						break;
					}
					} 
				}
				setState(151);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class FactorContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NUMBER() { return getToken(tinycParser.NUMBER, 0); }
		public TerminalNode ID() { return getToken(tinycParser.ID, 0); }
		public FactorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_factor; }
	}

	public final FactorContext factor() throws RecognitionException {
		FactorContext _localctx = new FactorContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_factor);
		try {
			setState(158);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
				enterOuterAlt(_localctx, 1);
				{
				setState(152);
				match(T__4);
				setState(153);
				expr(0);
				setState(154);
				match(T__5);
				}
				break;
			case NUMBER:
				enterOuterAlt(_localctx, 2);
				{
				setState(156);
				match(NUMBER);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 3);
				{
				setState(157);
				match(ID);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationContext extends ParserRuleContext {
		public CompContext comp() {
			return getRuleContext(CompContext.class,0);
		}
		public RelationContext relation() {
			return getRuleContext(RelationContext.class,0);
		}
		public TerminalNode AND() { return getToken(tinycParser.AND, 0); }
		public TerminalNode OR() { return getToken(tinycParser.OR, 0); }
		public RelationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relation; }
	}

	public final RelationContext relation() throws RecognitionException {
		return relation(0);
	}

	private RelationContext relation(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		RelationContext _localctx = new RelationContext(_ctx, _parentState);
		RelationContext _prevctx = _localctx;
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_relation, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(161);
			comp(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(171);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(169);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new RelationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relation);
						setState(163);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(164);
						match(AND);
						setState(165);
						comp(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relation);
						setState(166);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(167);
						match(OR);
						setState(168);
						comp(0);
						}
						break;
					}
					} 
				}
				setState(173);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class CompContext extends ParserRuleContext {
		public TerminalNode NOT() { return getToken(tinycParser.NOT, 0); }
		public EqContext eq() {
			return getRuleContext(EqContext.class,0);
		}
		public CompContext comp() {
			return getRuleContext(CompContext.class,0);
		}
		public TerminalNode LT() { return getToken(tinycParser.LT, 0); }
		public TerminalNode LEQ() { return getToken(tinycParser.LEQ, 0); }
		public TerminalNode EQ() { return getToken(tinycParser.EQ, 0); }
		public TerminalNode NEQ() { return getToken(tinycParser.NEQ, 0); }
		public TerminalNode GEQ() { return getToken(tinycParser.GEQ, 0); }
		public TerminalNode GT() { return getToken(tinycParser.GT, 0); }
		public CompContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comp; }
	}

	public final CompContext comp() throws RecognitionException {
		return comp(0);
	}

	private CompContext comp(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		CompContext _localctx = new CompContext(_ctx, _parentState);
		CompContext _prevctx = _localctx;
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_comp, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOT:
				{
				setState(175);
				match(NOT);
				setState(176);
				eq();
				}
				break;
			case T__4:
			case ID:
			case NUMBER:
				{
				setState(177);
				eq();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(200);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(198);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new CompContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_comp);
						setState(180);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(181);
						match(LT);
						setState(182);
						eq();
						}
						break;
					case 2:
						{
						_localctx = new CompContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_comp);
						setState(183);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(184);
						match(LEQ);
						setState(185);
						eq();
						}
						break;
					case 3:
						{
						_localctx = new CompContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_comp);
						setState(186);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(187);
						match(EQ);
						setState(188);
						eq();
						}
						break;
					case 4:
						{
						_localctx = new CompContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_comp);
						setState(189);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(190);
						match(NEQ);
						setState(191);
						eq();
						}
						break;
					case 5:
						{
						_localctx = new CompContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_comp);
						setState(192);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(193);
						match(GEQ);
						setState(194);
						eq();
						}
						break;
					case 6:
						{
						_localctx = new CompContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_comp);
						setState(195);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(196);
						match(GT);
						setState(197);
						eq();
						}
						break;
					}
					} 
				}
				setState(202);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class EqContext extends ParserRuleContext {
		public RelationContext relation() {
			return getRuleContext(RelationContext.class,0);
		}
		public FactorContext factor() {
			return getRuleContext(FactorContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public EqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_eq; }
	}

	public final EqContext eq() throws RecognitionException {
		EqContext _localctx = new EqContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_eq);
		try {
			setState(209);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(203);
				match(T__4);
				setState(204);
				relation(0);
				setState(205);
				match(T__5);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(207);
				factor();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(208);
				expr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 12:
			return expr_sempred((ExprContext)_localctx, predIndex);
		case 13:
			return term_sempred((TermContext)_localctx, predIndex);
		case 15:
			return relation_sempred((RelationContext)_localctx, predIndex);
		case 16:
			return comp_sempred((CompContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean term_sempred(TermContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 4);
		case 3:
			return precpred(_ctx, 3);
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean relation_sempred(RelationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 5:
			return precpred(_ctx, 3);
		case 6:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean comp_sempred(CompContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 7);
		case 8:
			return precpred(_ctx, 6);
		case 9:
			return precpred(_ctx, 5);
		case 10:
			return precpred(_ctx, 4);
		case 11:
			return precpred(_ctx, 3);
		case 12:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3#\u00d6\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\3\2\3\2\3\3\3\3\3\3\3\3\5\3.\n\3\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\5\4;\n\4\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\5"+
		"\7F\n\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\5\tO\n\t\3\n\3\n\7\nS\n\n\f\n\16\n"+
		"V\13\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\fr\n\f\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\7\16\u0085"+
		"\n\16\f\16\16\16\u0088\13\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\7\17\u0096\n\17\f\17\16\17\u0099\13\17\3\20\3\20\3"+
		"\20\3\20\3\20\3\20\5\20\u00a1\n\20\3\21\3\21\3\21\3\21\3\21\3\21\3\21"+
		"\3\21\3\21\7\21\u00ac\n\21\f\21\16\21\u00af\13\21\3\22\3\22\3\22\3\22"+
		"\5\22\u00b5\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\3\22\3\22\3\22\3\22\3\22\7\22\u00c9\n\22\f\22\16\22\u00cc\13"+
		"\22\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u00d4\n\23\3\23\3T\6\32\34 \"\24"+
		"\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$\2\2\2\u00de\2&\3\2\2\2\4-"+
		"\3\2\2\2\6:\3\2\2\2\b<\3\2\2\2\n?\3\2\2\2\fE\3\2\2\2\16G\3\2\2\2\20N\3"+
		"\2\2\2\22P\3\2\2\2\24Y\3\2\2\2\26q\3\2\2\2\30s\3\2\2\2\32{\3\2\2\2\34"+
		"\u0089\3\2\2\2\36\u00a0\3\2\2\2 \u00a2\3\2\2\2\"\u00b4\3\2\2\2$\u00d3"+
		"\3\2\2\2&\'\5\4\3\2\'(\7\2\2\3(\3\3\2\2\2).\5\6\4\2*+\5\6\4\2+,\5\4\3"+
		"\2,.\3\2\2\2-)\3\2\2\2-*\3\2\2\2.\5\3\2\2\2/\60\5\b\5\2\60\61\7\3\2\2"+
		"\61;\3\2\2\2\62\63\5\n\6\2\63\64\7\3\2\2\64;\3\2\2\2\65;\5\30\r\2\66\67"+
		"\5\16\b\2\678\7\3\2\28;\3\2\2\29;\5\26\f\2:/\3\2\2\2:\62\3\2\2\2:\65\3"+
		"\2\2\2:\66\3\2\2\2:9\3\2\2\2;\7\3\2\2\2<=\7\4\2\2=>\7\36\2\2>\t\3\2\2"+
		"\2?@\7\36\2\2@A\7\5\2\2AB\5\f\7\2B\13\3\2\2\2CF\5\24\13\2DF\5\32\16\2"+
		"EC\3\2\2\2ED\3\2\2\2F\r\3\2\2\2GH\7\6\2\2HI\7\7\2\2IJ\5\20\t\2JK\7\b\2"+
		"\2K\17\3\2\2\2LO\5\32\16\2MO\5\22\n\2NL\3\2\2\2NM\3\2\2\2O\21\3\2\2\2"+
		"PT\7\t\2\2QS\13\2\2\2RQ\3\2\2\2SV\3\2\2\2TU\3\2\2\2TR\3\2\2\2UW\3\2\2"+
		"\2VT\3\2\2\2WX\7\t\2\2X\23\3\2\2\2YZ\7\n\2\2Z[\7\7\2\2[\\\7\b\2\2\\\25"+
		"\3\2\2\2]^\7\13\2\2^_\7\7\2\2_`\5 \21\2`a\7\b\2\2ab\7\f\2\2bc\5\4\3\2"+
		"cd\7\r\2\2dr\3\2\2\2ef\7\13\2\2fg\7\7\2\2gh\5 \21\2hi\7\b\2\2ij\7\f\2"+
		"\2jk\5\4\3\2kl\7\r\2\2lm\7\16\2\2mn\7\f\2\2no\5\4\3\2op\7\r\2\2pr\3\2"+
		"\2\2q]\3\2\2\2qe\3\2\2\2r\27\3\2\2\2st\7\17\2\2tu\7\7\2\2uv\5 \21\2vw"+
		"\7\b\2\2wx\7\f\2\2xy\5\4\3\2yz\7\r\2\2z\31\3\2\2\2{|\b\16\1\2|}\5\34\17"+
		"\2}\u0086\3\2\2\2~\177\f\5\2\2\177\u0080\7\26\2\2\u0080\u0085\5\34\17"+
		"\2\u0081\u0082\f\4\2\2\u0082\u0083\7\27\2\2\u0083\u0085\5\34\17\2\u0084"+
		"~\3\2\2\2\u0084\u0081\3\2\2\2\u0085\u0088\3\2\2\2\u0086\u0084\3\2\2\2"+
		"\u0086\u0087\3\2\2\2\u0087\33\3\2\2\2\u0088\u0086\3\2\2\2\u0089\u008a"+
		"\b\17\1\2\u008a\u008b\5\36\20\2\u008b\u0097\3\2\2\2\u008c\u008d\f\6\2"+
		"\2\u008d\u008e\7\30\2\2\u008e\u0096\5\36\20\2\u008f\u0090\f\5\2\2\u0090"+
		"\u0091\7\31\2\2\u0091\u0096\5\36\20\2\u0092\u0093\f\4\2\2\u0093\u0094"+
		"\7\32\2\2\u0094\u0096\5\36\20\2\u0095\u008c\3\2\2\2\u0095\u008f\3\2\2"+
		"\2\u0095\u0092\3\2\2\2\u0096\u0099\3\2\2\2\u0097\u0095\3\2\2\2\u0097\u0098"+
		"\3\2\2\2\u0098\35\3\2\2\2\u0099\u0097\3\2\2\2\u009a\u009b\7\7\2\2\u009b"+
		"\u009c\5\32\16\2\u009c\u009d\7\b\2\2\u009d\u00a1\3\2\2\2\u009e\u00a1\7"+
		"\37\2\2\u009f\u00a1\7\36\2\2\u00a0\u009a\3\2\2\2\u00a0\u009e\3\2\2\2\u00a0"+
		"\u009f\3\2\2\2\u00a1\37\3\2\2\2\u00a2\u00a3\b\21\1\2\u00a3\u00a4\5\"\22"+
		"\2\u00a4\u00ad\3\2\2\2\u00a5\u00a6\f\5\2\2\u00a6\u00a7\7\33\2\2\u00a7"+
		"\u00ac\5\"\22\2\u00a8\u00a9\f\4\2\2\u00a9\u00aa\7\34\2\2\u00aa\u00ac\5"+
		"\"\22\2\u00ab\u00a5\3\2\2\2\u00ab\u00a8\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad"+
		"\u00ab\3\2\2\2\u00ad\u00ae\3\2\2\2\u00ae!\3\2\2\2\u00af\u00ad\3\2\2\2"+
		"\u00b0\u00b1\b\22\1\2\u00b1\u00b2\7\35\2\2\u00b2\u00b5\5$\23\2\u00b3\u00b5"+
		"\5$\23\2\u00b4\u00b0\3\2\2\2\u00b4\u00b3\3\2\2\2\u00b5\u00ca\3\2\2\2\u00b6"+
		"\u00b7\f\t\2\2\u00b7\u00b8\7\21\2\2\u00b8\u00c9\5$\23\2\u00b9\u00ba\f"+
		"\b\2\2\u00ba\u00bb\7\22\2\2\u00bb\u00c9\5$\23\2\u00bc\u00bd\f\7\2\2\u00bd"+
		"\u00be\7\20\2\2\u00be\u00c9\5$\23\2\u00bf\u00c0\f\6\2\2\u00c0\u00c1\7"+
		"\25\2\2\u00c1\u00c9\5$\23\2\u00c2\u00c3\f\5\2\2\u00c3\u00c4\7\24\2\2\u00c4"+
		"\u00c9\5$\23\2\u00c5\u00c6\f\4\2\2\u00c6\u00c7\7\23\2\2\u00c7\u00c9\5"+
		"$\23\2\u00c8\u00b6\3\2\2\2\u00c8\u00b9\3\2\2\2\u00c8\u00bc\3\2\2\2\u00c8"+
		"\u00bf\3\2\2\2\u00c8\u00c2\3\2\2\2\u00c8\u00c5\3\2\2\2\u00c9\u00cc\3\2"+
		"\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb#\3\2\2\2\u00cc\u00ca"+
		"\3\2\2\2\u00cd\u00ce\7\7\2\2\u00ce\u00cf\5 \21\2\u00cf\u00d0\7\b\2\2\u00d0"+
		"\u00d4\3\2\2\2\u00d1\u00d4\5\36\20\2\u00d2\u00d4\5\32\16\2\u00d3\u00cd"+
		"\3\2\2\2\u00d3\u00d1\3\2\2\2\u00d3\u00d2\3\2\2\2\u00d4%\3\2\2\2\23-:E"+
		"NTq\u0084\u0086\u0095\u0097\u00a0\u00ab\u00ad\u00b4\u00c8\u00ca\u00d3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}