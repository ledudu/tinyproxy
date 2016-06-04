
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_PORT = 258,
     KW_LISTEN = 259,
     KW_LOGFILE = 260,
     KW_PIDFILE = 261,
     KW_SYSLOG = 262,
     KW_MAXCLIENTS = 263,
     KW_MAXSPARESERVERS = 264,
     KW_MINSPARESERVERS = 265,
     KW_STARTSERVERS = 266,
     KW_MAXREQUESTSPERCHILD = 267,
     KW_TIMEOUT = 268,
     KW_USER = 269,
     KW_GROUP = 270,
     KW_ANONYMOUS = 271,
     KW_XTINYPROXY = 272,
     KW_FILTER = 273,
     KW_FILTERURLS = 274,
     KW_FILTEREXTENDED = 275,
     KW_FILTER_DEFAULT_DENY = 276,
     KW_FILTER_CASESENSITIVE = 277,
     KW_UPSTREAM = 278,
     KW_CONNECTPORT = 279,
     KW_BIND = 280,
     KW_STATHOST = 281,
     KW_ALLOW = 282,
     KW_DENY = 283,
     KW_ERRORPAGE = 284,
     KW_DEFAULT_ERRORPAGE = 285,
     KW_STATPAGE = 286,
     KW_VIA_PROXY_NAME = 287,
     KW_PROXY_HTTP = 288,
     KW_PROXY_SOCKS4 = 289,
     KW_PROXY_SOCKS5 = 290,
     KW_YES = 291,
     KW_NO = 292,
     KW_LOGLEVEL = 293,
     KW_LOG_CRITICAL = 294,
     KW_LOG_ERROR = 295,
     KW_LOG_WARNING = 296,
     KW_LOG_NOTICE = 297,
     KW_LOG_CONNECT = 298,
     KW_LOG_INFO = 299,
     IDENTIFIER = 300,
     NUMBER = 301,
     STRING = 302,
     NUMERIC_ADDRESS = 303,
     NETMASK_ADDRESS = 304
   };
#endif
/* Tokens.  */
#define KW_PORT 258
#define KW_LISTEN 259
#define KW_LOGFILE 260
#define KW_PIDFILE 261
#define KW_SYSLOG 262
#define KW_MAXCLIENTS 263
#define KW_MAXSPARESERVERS 264
#define KW_MINSPARESERVERS 265
#define KW_STARTSERVERS 266
#define KW_MAXREQUESTSPERCHILD 267
#define KW_TIMEOUT 268
#define KW_USER 269
#define KW_GROUP 270
#define KW_ANONYMOUS 271
#define KW_XTINYPROXY 272
#define KW_FILTER 273
#define KW_FILTERURLS 274
#define KW_FILTEREXTENDED 275
#define KW_FILTER_DEFAULT_DENY 276
#define KW_FILTER_CASESENSITIVE 277
#define KW_UPSTREAM 278
#define KW_CONNECTPORT 279
#define KW_BIND 280
#define KW_STATHOST 281
#define KW_ALLOW 282
#define KW_DENY 283
#define KW_ERRORPAGE 284
#define KW_DEFAULT_ERRORPAGE 285
#define KW_STATPAGE 286
#define KW_VIA_PROXY_NAME 287
#define KW_PROXY_HTTP 288
#define KW_PROXY_SOCKS4 289
#define KW_PROXY_SOCKS5 290
#define KW_YES 291
#define KW_NO 292
#define KW_LOGLEVEL 293
#define KW_LOG_CRITICAL 294
#define KW_LOG_ERROR 295
#define KW_LOG_WARNING 296
#define KW_LOG_NOTICE 297
#define KW_LOG_CONNECT 298
#define KW_LOG_INFO 299
#define IDENTIFIER 300
#define NUMBER 301
#define STRING 302
#define NUMERIC_ADDRESS 303
#define NETMASK_ADDRESS 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 37 "grammar.y"

	unsigned int num;
	char *cptr;



/* Line 1676 of yacc.c  */
#line 157 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


