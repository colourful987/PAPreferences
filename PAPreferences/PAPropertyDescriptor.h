//
//  PAPropertyDescriptor.h
//  PAPreferencesSample
//
//  Created by Denis Hennessy on 25/01/2014.
//  Copyright (c) 2014 Peer Assembly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PAPropertyDescriptor : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL isSetter;
@property (nonatomic, readonly) NSString *type;

- (id)initWithName:(NSString *)name type:(NSString *)type isSetter:(BOOL)isSetter;

@end
