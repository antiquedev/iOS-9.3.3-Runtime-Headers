/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface __NSCFString : NSMutableString
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)_isCString;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)cStringLength;
-(const unsigned short*)_fastCharacterContents;
-(void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(const char*)UTF8String;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(BOOL)hasPrefix:(id)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(BOOL)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)_tryRetain;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(BOOL)isNSString__;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(const char*)cString;
-(void)finalize;
@end

