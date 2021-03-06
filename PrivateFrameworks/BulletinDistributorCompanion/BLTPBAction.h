/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable <NSCopying> {

	int _activationMode;
	BLTPBAppearance* _appearance;
	int _behavior;
	NSData* _behaviorParameters;
	NSString* _identifier;
	NSString* _launchURL;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) BLTPBAppearance * appearance;              //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) int activationMode;                        //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchURL; 
@property (nonatomic,retain) NSString * launchURL;                      //@synthesize launchURL=_launchURL - In the implementation block
@property (assign,nonatomic) BOOL hasBehavior; 
@property (assign,nonatomic) int behavior;                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) BOOL hasBehaviorParameters; 
@property (nonatomic,retain) NSData * behaviorParameters;               //@synthesize behaviorParameters=_behaviorParameters - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BLTPBAppearance *)appearance;
-(id)dictionaryRepresentation;
-(int)behavior;
-(int)activationMode;
-(void)setBehavior:(int)arg1 ;
-(void)setActivationMode:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(NSData *)behaviorParameters;
-(void)setBehaviorParameters:(NSData *)arg1 ;
-(void)setLaunchURL:(NSString *)arg1 ;
-(NSString *)launchURL;
-(void)setAppearance:(BLTPBAppearance *)arg1 ;
-(BOOL)hasLaunchURL;
-(void)setHasBehavior:(BOOL)arg1 ;
-(BOOL)hasBehavior;
-(BOOL)hasBehaviorParameters;
@end

