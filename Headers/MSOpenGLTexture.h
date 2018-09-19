//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSGPUTexture-Protocol.h"

@interface MSOpenGLTexture : NSObject <MSGPUTexture>
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned int _textureID;
    int _filter;
}

@property(nonatomic) int filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) unsigned int textureID; // @synthesize textureID=_textureID;
- (struct CGImage *)readImageWithColorSpace:(struct CGColorSpace *)arg1;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)replaceRegion:(CDStruct_bf95b13b)arg1 bytesPerRow:(unsigned long long)arg2 pixels:(const void *)arg3;
- (void)dealloc;
- (id)initWithTextureID:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;

@end
