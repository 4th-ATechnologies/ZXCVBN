//
//  ZXCVBN.h
//  ZXCVBN
//
//  Created by Gabriel on 6/11/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else // macOS
#import <Cocoa/Cocoa.h>
#endif

//! Project version number for ZXCVBN.
FOUNDATION_EXPORT double ZXCVBNVersionNumber;

//! Project version string for ZXCVBN.
FOUNDATION_EXPORT const unsigned char ZXCVBNVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ZXCVBN/PublicHeader.h>

#import <ZXCVBN/BBPasswordStrength.h>
