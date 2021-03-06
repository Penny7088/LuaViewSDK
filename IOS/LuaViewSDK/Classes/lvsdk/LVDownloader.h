//
//  LVDownloader.h
//  LVSDK
//
//  Created by dongxicheng on 4/14/15.
//  Copyright (c) 2015 dongxicheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LVHeads.h"


@interface LVDownloader : NSObject<LVProtocal>

@property(nonatomic,weak) LView* lv_lview;
@property(nonatomic,assign) LVUserDataInfo* lv_userData;

@property(nonatomic,copy) id luaObjRetainKey;

-(id) init:(lv_State*) l;

+(int) classDefine:(lv_State *)L ;

@end

