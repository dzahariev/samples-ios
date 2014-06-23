//
//  ModelController.h
//  PgeBased
//
//  Created by Zahariev, Dobromir on 6/23/14.
//  Copyright (c) 2014 dzahariev. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
