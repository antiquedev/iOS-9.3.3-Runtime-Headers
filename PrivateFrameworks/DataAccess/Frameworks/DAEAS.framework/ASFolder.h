/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ASFolder : ASItem <NSCoding> {

	BOOL _renameOnCollision;
	int _folderType;
	int _localID;
	NSString* _serverID;
	NSString* _parentID;
	NSString* _displayName;
	long long _dataclass;
	long long _changeType;

}

@property (nonatomic,copy) NSString * serverID;                   //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,copy) NSString * parentID;                   //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int folderType;                      //@synthesize folderType=_folderType - In the implementation block
@property (assign,nonatomic) long long dataclass;                 //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) int localID;                         //@synthesize localID=_localID - In the implementation block
@property (assign,nonatomic) long long changeType;                //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL renameOnCollision;              //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(void)setDataclass:(long long)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(long long)dataclass;
-(void)setLocalID:(int)arg1 ;
-(int)localID;
-(id)_folderTypeString;
-(void)setFolderTypeNumber:(id)arg1 ;
-(BOOL)mayContainDataclasses:(long long)arg1 ;
-(id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5 ;
-(BOOL)renameOnCollision;
-(int)folderType;
-(void)setFolderType:(int)arg1 ;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
@end
