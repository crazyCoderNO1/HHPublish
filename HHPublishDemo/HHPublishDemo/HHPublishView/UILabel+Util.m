//
//  UILabel+Util.m
//  yyt-teacher
//
//  Created by bnqc on 16/8/14.
//  Copyright © 2016年 ebsinori. All rights reserved.
//

#import "UILabel+Util.h"

@implementation UILabel (Util)

+ (instancetype)labelWithTextColor:(UIColor *)color andFontSize:(CGFloat)fontSize bold:(BOOL)bold {
    UILabel *label = [[UILabel alloc] init];
    label.textColor = color;
    if (bold) {
        label.font = [UIFont boldSystemFontOfSize:fontSize];
    } else {
        label.font = [UIFont systemFontOfSize:fontSize];
    }
    return label;
}

@end
