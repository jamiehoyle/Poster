//
//  VKAppDelegate.h
//  Poster
//
//  Created by Ross Penman on 25/09/2013.
//  Copyright (c) 2013 Ross Penman. All rights reserved.
//

#import "VKPanelController.h"
#import <Cocoa/Cocoa.h>

@class VKPanelController;
@interface VKAppDelegate : NSObject <NSApplicationDelegate, VKPanelControllerDelegate>

@property (nonatomic, strong) NSStatusItem *statusItem;
@property (nonatomic, strong) VKPanelController *panelController;

@end
