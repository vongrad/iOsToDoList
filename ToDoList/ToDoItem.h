//
//  ToDoItem.h
//  ToDoList
//
//  Created by Adam Vongrej on 6/28/15.
//  Copyright (c) 2015 Adam Vongrej. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property (readonly) NSDate *creationDate;
@property BOOL completed;

@end
