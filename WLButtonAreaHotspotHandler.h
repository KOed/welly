//
//  WLButtonAreaHotspotHandler.h
//  Welly
//
//  Created by K.O.ed on 09-1-27.
//  Copyright 2009 Welly Group. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WLMouseHotspotHandler.h"
#import "WLTerminal.h"

extern NSString * const WLButtonNameComposePost;
extern NSString * const WLButtonNameDeletePost;
extern NSString * const WLButtonNameShowNote;
extern NSString * const WLButtonNameShowHelp;
extern NSString * const WLButtonNameNormalToDigest;
extern NSString * const WLButtonNameDigestToThread;
extern NSString * const WLButtonNameThreadToMark;
extern NSString * const WLButtonNameMarkToOrigin;
extern NSString * const WLButtonNameOriginToNormal;
extern NSString * const WLButtonNameSwitchDisplayAllBoards;
extern NSString * const WLButtonNameSwitchSortBoards;
extern NSString * const WLButtonNameSwitchBoardsNumber;
extern NSString * const WLButtonNameDeleteBoard;

typedef struct {
	int state;
	NSString *signature;
	int signatureLengthOfBytes;
	NSString *buttonName;
	NSString *commandSequence;
} WLButtonDescription;

@class WLTerminalView;
@interface WLButtonAreaHotspotHandler : WLMouseHotspotHandler <WLMouseUpHandler, WLUpdatable> {
	NSString *_commandSequence;
}
@end
