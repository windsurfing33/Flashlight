//
//  FlashlightResult.h
//  FlashlightKit
//
//  Created by Nate Parrott on 12/26/14.
//  Copyright (c) 2014 Nate Parrott. All rights reserved.
//

#import <Foundation/Foundation.h>
@import WebKit;
@class FlashlightResultView;

@interface FlashlightResult : NSObject

@property (nonatomic) NSDictionary *json;
@property (nonatomic) NSString *pluginPath;
@property (nonatomic,readonly) BOOL canBeTopHit;

- (NSString *)title;
- (BOOL)supportsWebview;
- (void)configureWebview:(WebView *)webView;
- (BOOL)linksOpenInBrowser;
- (BOOL)pressEnter:(FlashlightResultView *)resultView errorCallback:(void(^)(NSString *error))errorCallback;

@end
