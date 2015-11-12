//
//  AppDelegate.h
//  TestingGit
//
//  Created by Mac1 on 12/11/2015.
//  Copyright © 2015 Self. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(void)SaveDataInplist:(NSArray*)datesArray;
-(NSArray*)loadDataFromplist;
@end

