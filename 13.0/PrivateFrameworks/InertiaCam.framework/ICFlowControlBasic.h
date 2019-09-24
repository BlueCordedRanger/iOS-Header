//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InertiaCam/ICFlowControl-Protocol.h>

@interface ICFlowControlBasic : NSObject <ICFlowControl>
{
    CDUnknownBlockType shouldBeCanceled;
    CDUnknownBlockType reportProgress;
}

@property(copy, nonatomic) CDUnknownBlockType reportProgress; // @synthesize reportProgress;
@property(copy, nonatomic) CDUnknownBlockType shouldBeCanceled; // @synthesize shouldBeCanceled;
- (void).cxx_destruct;
- (_Bool)ICShouldBeCanceled;
- (void)ICReportProgress:(float)arg1;
- (id)initWithProgress:(CDUnknownBlockType)arg1;
- (id)initWithCancel:(CDUnknownBlockType)arg1;

@end
