package cup.example;
import java_cup.runtime.ComplexSymbolFactory;
import java_cup.runtime.ComplexSymbolFactory.Location;
import java_cup.runtime.Symbol;
import java.lang.*;
import java.io.InputStreamReader;

%%

%class Lexer
%implements sym
%public
%unicode
%line
%column
%cup
%char
%{
	

    public Lexer(ComplexSymbolFactory sf, java.io.InputStream is){
		this(is);
        symbolFactory = sf;
    }
	public Lexer(ComplexSymbolFactory sf, java.io.Reader reader){
		this(reader);
        symbolFactory = sf;
    }
    
    private StringBuffer sb;
    private ComplexSymbolFactory symbolFactory;
    private int csline,cscolumn;

    public Symbol symbol(String name, int code){
		return symbolFactory.newSymbol(name, code,
						new Location(yyline+1,yycolumn+1, yychar), // -yylength()
						new Location(yyline+1,yycolumn+yylength(), yychar+yylength())
				);
    }
    public Symbol symbol(String name, int code, String lexem){
	return symbolFactory.newSymbol(name, code, 
						new Location(yyline+1, yycolumn +1, yychar), 
						new Location(yyline+1,yycolumn+yylength(), yychar+yylength()), lexem);
    }
    
    protected void emit_warning(String message){
    	System.out.println("scanner warning: " + message + " at : 2 "+ 
    			(yyline+1) + " " + (yycolumn+1) + " " + yychar);
    }
    
    protected void emit_error(String message){
    	System.out.println("scanner error: " + message + " at : 2" + 
    			(yyline+1) + " " + (yycolumn+1) + " " + yychar);
    }
%}

Newline    = \r | \n | \r\n
Whitespace = [ \t\f] | {Newline}
Number     = [0-9]+

/* comments */
Comment = {TraditionalComment} | {EndOfLineComment}
TraditionalComment = "/*" {CommentContent} \*+ "/"
EndOfLineComment = "//" [^\r\n]* {Newline}
CommentContent = ( [^*] | \*+[^*/] )*

ident = ([:jletter:] | "_" ) ([:jletterdigit:] | [:jletter:] | "_" )*


%eofval{
    return symbolFactory.newSymbol("EOF",sym.EOF);
%eofval}

%state CODESEG

%%  

<YYINITIAL> {

  {Whitespace} {                              }
  ";"          { return symbolFactory.newSymbol("SEMI", SEMI); }
  "+"          { return symbolFactory.newSymbol("PLUS", PLUS); }
  "-"          { return symbolFactory.newSymbol("MINUS", MINUS); }
  "*"          { return symbolFactory.newSymbol("TIMES", TIMES); }
  "n"          { return symbolFactory.newSymbol("UMINUS", UMINUS); }
  "("          { return symbolFactory.newSymbol("LPAREN", LPAREN); }
  ")"          { return symbolFactory.newSymbol("RPAREN", RPAREN); }
  
  
  "BLACK[1]"   { return symbolFactory.newSymbol("BLACKONE", BLACKONE); }
  "BLACK[2]"   { return symbolFactory.newSymbol("BLACKTWO", BLACKTWO); }
  "BLACK[3]"   { return symbolFactory.newSymbol("BLACKTHREE", BLACKTHREE); }
  
  "BROWN[1]"   { return symbolFactory.newSymbol("BROWNONE", BROWNONE); }
  "BROWN[2]"   { return symbolFactory.newSymbol("BROWNTWO", BROWNTWO); }
  "BROWN[3]"   { return symbolFactory.newSymbol("BROWNTHREE", BROWNTHREE); }
  
  "RED[1]"   { return symbolFactory.newSymbol("REDONE", REDONE); }
  "RED[2]"   { return symbolFactory.newSymbol("REDTWO", REDTWO); }
  "RED[3]"   { return symbolFactory.newSymbol("REDTHREE", REDTHREE); }

  "ORANGE[1]"   { return symbolFactory.newSymbol("ORANGEONE", ORANGEONE); }
  "ORANGE[2]"   { return symbolFactory.newSymbol("ORANGETWO", ORANGETWO); }
  "ORANGE[3]"   { return symbolFactory.newSymbol("ORANGETHREE", ORANGETHREE); }

  "YELLOW[1]"   { return symbolFactory.newSymbol("YELLOWONE", YELLOWONE); }
  "YELLOW[2]"   { return symbolFactory.newSymbol("YELLOWTWO", YELLOWTWO); }
  "YELLOW[3]"   { return symbolFactory.newSymbol("YELLOWTHREE", YELLOWTHREE); }
  
  "GREEN[1]"   { return symbolFactory.newSymbol("GREENONE", GREENONE); }
  "GREEN[2]"   { return symbolFactory.newSymbol("GREENTWO", GREENTWO); }
  "GREEN[3]"   { return symbolFactory.newSymbol("GREENTHREE", GREENTHREE); }
  
  "BLUE[1]"   { return symbolFactory.newSymbol("BLUEONE", BLUEONE); }
  "BLUE[2]"   { return symbolFactory.newSymbol("BLUETWO", BLUETWO); }
  "BLUE[3]"   { return symbolFactory.newSymbol("BLUETHREE", BLUETHREE); }
  
  "PURPLE[1]"   { return symbolFactory.newSymbol("PURPLEONE", PURPLEONE); }
  "PURPLE[2]"   { return symbolFactory.newSymbol("PURPLETWO", PURPLETWO); }
  "PURPLE[3]"   { return symbolFactory.newSymbol("PURPLETHREE", PURPLETHREE); }
  
  "GRAY[1]"   { return symbolFactory.newSymbol("GRAYKONE", GRAYONE); }
  "GRAY[2]"   { return symbolFactory.newSymbol("GRAYTWO", GRAYTWO); }

  
  "WHITE[1]"   { return symbolFactory.newSymbol("WHITEONE", WHITEONE); }
  "WHITE[2]"   { return symbolFactory.newSymbol("WHITETWO", WHITETWO); }

  "SILVER[3]"   { return symbolFactory.newSymbol("SILVERONE", SILVERTHREE); }
  "SILVER[4]"   { return symbolFactory.newSymbol("SILVERTWO", SILVERFOUR); }
  
  "GOLDEN[3]"   { return symbolFactory.newSymbol("GOLDENONE", GOLDENTHREE); }
  "GOLDEN[4]"   { return symbolFactory.newSymbol("GOLDENTWO",GOLDENFOUR); }

 
  {Number}     { return symbolFactory.newSymbol("NUMBER", NUMBER, Integer.parseInt(yytext())); }
  
}



// error fallback
.|\n          { emit_warning("Unrecognized character '" +yytext()+"' -- ignored"); }
