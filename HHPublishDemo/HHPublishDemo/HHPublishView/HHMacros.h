//
//  YYTMacros.h
//  yyt-teacher
//
//  Created by ebsinori on 16/7/19.
//  Copyright © 2016年 ebsinori. All rights reserved.
//

#ifndef HHMacros_h
#define HHMacros_h

// System
#if TARGET_IPHONE_SIMULATOR
#define SIMULATOR 1
#elif TARGET_OS_IPHONE
#define SIMULATOR 0
#endif

#define SYSTEM_VERSION                  [[[UIDevice currentDevice] systemVersion] floatValue]

// View
#define SCREEN_WIDTH                    [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT                   [UIScreen mainScreen].bounds.size.height

//判断是否iPhone X
#define IS_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

// status bar height.
#define STATUS_BAR_HEIGHT (IS_iPhoneX ? 44.f : 20.f)

// Navigation bar height.
#define NAVIGATION_BAR_HEIGHT 44.f

// Status bar & navigation bar height.
#define STATUS_AND_NAVIGATION_HEIGHT (IS_iPhoneX ? 88.f : 64.f)

// Tabbar height.
#define TAB_BAR_HEIGHT (IS_iPhoneX ? (49.f + 34.f) : 49.f)

// Tabbar safe bottom margin.
#define TAB_BAR_SAFE_BOTTOM_MARGIN (IS_iPhoneX ? 34.f : 0.f)


// variables & methods
#define WEAKSELF                        __weak __typeof(self) weakSelf = self;
#define STRONGSELF                      __strong __typeof(self) strongSelf = weakSelf;
#define UserDefault                     [NSUserDefaults standardUserDefaults]
#define UserDefaultValueForKey(key)     [UserDefault valueForKey:key]
#define kFont(size)                     [UIFont systemFontOfSize:size * 5 / 9.0]
#define kBoldFont(size)                 [UIFont boldSystemFontOfSize:size * 5 / 9.0]

///占位图片
#define PLACE_HOLDER_IMAGE              [UIImage imageNamed:@"placeHolder"]
///默认头像
#define DEFAULT_AVATAR                  [UIImage imageNamed:@"avatar"]

#define MsgInterfaceOrientation         @"interfaceOrientationNotification"

// 提示文本
#define NETWORK_ERROR                   @"网络出错，请稍后再试"
#define UPLOAD_FILE_ERROR               @"上传文件格式错误"

#endif /* HHMacros_h */
