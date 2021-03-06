// Copyright 2010-2013 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <UIKit/UIButton.h>

typedef enum {
    OUISegmentedControlButtonPositionLeft,
    OUISegmentedControlButtonPositionCenter,
    OUISegmentedControlButtonPositionRight,
    _OUISegmentedControlButtonPositionCount
} OUISegmentedControlButtonPosition;

@interface OUISegmentedControlButton : UIButton

@property(assign,nonatomic) OUISegmentedControlButtonPosition buttonPosition;
@property(strong,nonatomic) UIImage *image;
@property(strong,nonatomic) id representedObject;

- (void)addTarget:(id)target action:(SEL)action; // Convenience; sends action on touch-down.

@end
