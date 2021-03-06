/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface ICSTokenizer : NSObject {

	NSData* _data;
	const char* _datastring;
	int _length;
	int _cursor;
	char* _token;
	int _tokenType;
	int _expectedNextTokenType;
	BOOL _printedICS;
	int _logCount;

}

@property (assign) BOOL printedICS;              //@synthesize printedICS=_printedICS - In the implementation block
@property (assign) int logCount;                 //@synthesize logCount=_logCount - In the implementation block
-(char*)nextToken;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(char*)currentToken;
-(BOOL)printedICS;
-(void)setPrintedICS:(BOOL)arg1 ;
-(int)logCount;
-(void)setLogCount:(int)arg1 ;
-(BOOL)consumeFolding;
-(BOOL)consumeEOL;
-(void)consumeWhiteSpace;
-(BOOL)consumeEscaped:(const char*)arg1 ;
-(void)consumePropName;
-(void)consumeParamName;
-(void)consumeParamValue;
-(void)consumePropValue;
-(int)tokenType;
@end

