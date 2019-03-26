//
//  CTSEntry.m
//  JournalObjectiveC
//
//  Created by Colin Smith on 3/25/19.
//  Copyright © 2019 Colin Smith. All rights reserved.
//

#import "CTSEntry.h"

@implementation CTSEntry

-(instancetype)initWithName:(NSString *)title bodyText:(NSString *)bodyText{
    self =[super.init];
    if (self){
        _title = title;
        _bodyText = bodyText;
    }
    return self;
}
@end
