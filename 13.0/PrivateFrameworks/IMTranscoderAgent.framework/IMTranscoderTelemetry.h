//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMTranscoderTelemetry : NSObject
{
    unsigned char _signpostId;
}

- (void)emitSignpostTranscodeSkipSourceUTI:(id)arg1;
- (void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg1;
- (void)emitSignpostTranscodeStepForDestinationUTI:(id)arg1;
- (void)emitSignpostNoTranscodeFromUTI:(id)arg1;
- (void)_emitSignpostTranscodeRange:(long long)arg1 begin:(_Bool)arg2;
- (void)_emitSignpostPreviewGenerationRange:(long long)arg1 begin:(_Bool)arg2;
- (void)emitPreviewGenerationEndFromUTI:(id)arg1;
- (void)emitPreviewGenerationBeginFromUTI:(id)arg1;
- (void)emitTranscodeEndFromUTI:(id)arg1;
- (void)emitTranscodeBeginFromUTI:(id)arg1;
- (long long)_telemetryImageTypeForUTI:(id)arg1;
- (id)init;

@end
