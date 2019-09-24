//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NviConstants : NSObject
{
}

+ (id)nviLogsRootDir;
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)monoChannelLpcmASBD;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)numChannelsForNviDirectionality;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRate;

@end
