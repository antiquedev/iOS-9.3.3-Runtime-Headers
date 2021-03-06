/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDRowBlocks, EDRowBlock;

@interface EDCellIterator : NSObject {

	EDRowBlocks* mRowBlocks;
	EDRowBlock* mCurrentRowBlock;
	EDRowInfo* mCurrentRowInfo;
	unsigned mCurrentRowInfoIndex;
	EDCellHeader* mCurrentCell;
	unsigned mCurrentCellIndex;
	unsigned mDesiredRowNumber;
	unsigned mDesiredColumnNumber;

}
-(EDCellHeader*)adjacentCell:(int)arg1 ;
-(void)dealloc;
-(id)initWithWorksheet:(id)arg1 ;
-(EDCellHeader*)adjacentCellLeft;
-(EDCellHeader*)adjacentCellRight;
-(EDCellHeader*)scanToRowNumber:(unsigned)arg1 columnNumber:(unsigned)arg2 ;
@end

