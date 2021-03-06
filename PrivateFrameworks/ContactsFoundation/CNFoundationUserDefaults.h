/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>

@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@required
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(unsigned long long)sortOrder;
-(id)countryCode;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1;
-(unsigned long long)newContactNameOrder;
-(void)setNameOrder:(unsigned long long)arg1;
-(unsigned long long)nameOrder;

@end


@class NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
+(id)sharedDefaults;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(unsigned long long)sortOrder;
-(id)countryCode;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1 ;
-(unsigned long long)newContactNameOrder;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(unsigned long long)nameOrder;
@end

