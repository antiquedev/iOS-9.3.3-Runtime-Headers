/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(id)searchableItemsWithIdentifiers:(id)arg1 ;
-(id)allSearchableItems;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2 ;
-(id)newManagedObjectContext;
-(void)contextWillSave:(id)arg1 ;
@end
