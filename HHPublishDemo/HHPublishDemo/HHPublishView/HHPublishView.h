//
//  HHPublishView.h
//  HHPublishDemo
//
//  Created by 崔辉辉 on 2018/8/6.
//  Copyright © 2018年 huihui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlaceHolderTV.h"
#define kToolBarHeight  50
#define kSelectPicHeight  80

@interface HHPublishView : UIScrollView
@property (nonatomic, strong)PlaceHolderTV *textView;
@property (nonatomic, strong)UIImageView *imgV;
@property (nonatomic, assign)CGFloat imgHeight;
- (void)reloadDataWithImage:(UIImage *)image;
@property (nonatomic, copy)void (^addSPV)();
@property (nonatomic, assign)CGFloat keyboardHeight;
@end
