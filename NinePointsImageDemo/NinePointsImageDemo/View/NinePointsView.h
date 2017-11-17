//
//  NinePointsView.h
//  NinePointsImageDemo
//
//  Created by mjbest on 2017/11/17.
//  Copyright © 2017年 chinaway. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NinePointsView : UIView

@property(nonatomic, strong) NSArray *ninePatchHorizontalPoints;
@property(nonatomic, strong) NSArray *ninePatchVerticalPoints;

@property(nonatomic, retain)  UIImage *nineImage;

@property(nonatomic, strong) NinePatchContentRange *contentRange;

-(void)redrawWithFontSize:(CGFloat)fontSize;
@end