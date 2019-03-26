//
//  CTSEntry.h
//  JournalObjectiveC
//
//  Created by Colin Smith on 3/25/19.
//  Copyright © 2019 Colin Smith. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTSEntry : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) NSString *bodyText;

- (instancetype)initWithName:(NSString *)title bodyText:(NSString *)bodyText;


@end

NS_ASSUME_NONNULL_END
