//
//  DentalAppAppDelegate.h
//  DentalApp
//
//  Created by Mike on 4/2/11.
//  Copyright 2011 Utah State University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DentalAppAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
