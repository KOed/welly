//
//  WLExitAreaHotspotHandler.h
//  Welly
//
//  Created by K.O.ed on 09-1-26.
//  Copyright 2009 Welly Group. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WLMouseHotspotHandler.h"

extern NSString *const WLCommandSequencePageUp;
extern NSString *const WLCommandSequencePageDown;
extern NSString *const WLCommandSequenceLeftArrow;
extern NSString *const WLCommandSequenceHome;
extern NSString *const WLCommandSequenceEnd;

/*!
    @class
    @abstract    A mouse hotspot handler deal with three moving areas.
    @discussion  The three moving areas includes: an exit area, which lies in the left side of term view; a page up area, which lies at the top of the right side; and a page down area, which lies at the bottom of the right side.
*/
@interface WLMovingAreaHotspotHandler : WLMouseHotspotHandler <WLMouseUpHandler, WLUpdatable, WLContextualMenuHandler> {
	NSCursor *_leftArrowCursor;
	NSCursor *_pageUpCursor;
	NSCursor *_pageDownCursor;
}
@end
