/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ASParseRule : NSObject {

	int _minimumNumber;
	int _maximumNumber;
	int _codePage;
	int _token;
	Class _objectClass;
	SEL _setterMethod;
	long long _dataclass;
	NSDictionary* _subclassRuleSet;
	NSDictionary* _callbackDict;
	NSDictionary* _streamCallbackDict;

}
-(int)token;
-(int)codePage;
-(id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 codePage:(int)arg3 token:(int)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 dataclass:(long long)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10 ;
-(long long)dataclass;
-(Class)objectClass;
-(id)subclassRuleSet;
-(SEL)setterMethod;
-(int)minimumNumber;
-(int)maximumNumber;
-(id)callbackDict;
-(id)streamCallbackDict;
@end

