//
//  AppDelegate.h
//  thirdApp
//
//  Created by Vladislav A. Rudskoy on 16/10/2016.
//  Copyright © 2016 Vladislav A. Rudskoy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

