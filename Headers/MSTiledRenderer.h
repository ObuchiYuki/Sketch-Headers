//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, MSArtboardTitleRenderer, MSCGContextPool, MSFlowItemCollector, MSFlowRenderer, MSGPUArtboardShadow, MSImmutableDocumentData, MSMemoryBuffer, MSOverlayItemContainer, MSRenderPassState, MSRenderingCache, MSRenderingDriver, MSTileMipLevel, NSArray, NSDictionary, NSOperationQueue, NSString, NSView;
@protocol MSGPURenderer, MSGPUTexture, MSOverlayItemDataSource, MSRenderingContextCacheProvider, MSTiledRendererHostView;

@interface MSTiledRenderer : NSObject
{
    MSRenderingDriver *_driver;
    BOOL _hideOverlay;
    BOOL _inFastZoom;
    BOOL _rasterisationInProgress;
    BOOL _clearOtherLevels;
    BOOL _forceSyncFirstFrame;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    id <MSOverlayItemDataSource> _overlayRenderingDelegate;
    NSView<MSTiledRendererHostView> *_hostView;
    MSImmutableDocumentData *_renderedDocument;
    MSOverlayItemContainer *_overlayContainer;
    id <MSGPURenderer> _renderer;
    NSArray *_tileLevels;
    MSTileMipLevel *_previousLevel;
    MSMemoryBuffer *_contextMemory;
    MSMemoryBuffer *_overlayMemory;
    id <MSGPUTexture> _overlayTexture;
    MSRenderingCache *_renderingCache;
    MSRenderPassState *_lastPassState;
    MSFlowRenderer *_flowRenderer;
    MSCGContextPool *_contextPool;
    NSString *_previousPageObjectID;
    unsigned long long _layerCount;
    MSGPUArtboardShadow *_artboardShadow;
    MSArtboardTitleRenderer *_artboardTitleRenderer;
    NSOperationQueue *_rasterisationQueue;
    NSString *_renderedPageID;
    MSFlowItemCollector *_flowCollector;
    NSDictionary *_cachedFlows;
}

+ (id)preferredAcceleratorClassName;
+ (BOOL)performRendererAvailabilityChecks;
@property(copy, nonatomic) NSDictionary *cachedFlows; // @synthesize cachedFlows=_cachedFlows;
@property(retain, nonatomic) MSFlowItemCollector *flowCollector; // @synthesize flowCollector=_flowCollector;
@property(nonatomic) BOOL forceSyncFirstFrame; // @synthesize forceSyncFirstFrame=_forceSyncFirstFrame;
@property(retain) NSString *renderedPageID; // @synthesize renderedPageID=_renderedPageID;
@property(readonly, nonatomic) NSOperationQueue *rasterisationQueue; // @synthesize rasterisationQueue=_rasterisationQueue;
@property(readonly, nonatomic) MSArtboardTitleRenderer *artboardTitleRenderer; // @synthesize artboardTitleRenderer=_artboardTitleRenderer;
@property(readonly, nonatomic) MSGPUArtboardShadow *artboardShadow; // @synthesize artboardShadow=_artboardShadow;
@property(nonatomic) unsigned long long layerCount; // @synthesize layerCount=_layerCount;
@property(retain, nonatomic) NSString *previousPageObjectID; // @synthesize previousPageObjectID=_previousPageObjectID;
@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property BOOL clearOtherLevels; // @synthesize clearOtherLevels=_clearOtherLevels;
@property BOOL rasterisationInProgress; // @synthesize rasterisationInProgress=_rasterisationInProgress;
@property(retain, nonatomic) MSFlowRenderer *flowRenderer; // @synthesize flowRenderer=_flowRenderer;
@property(retain, nonatomic) MSRenderPassState *lastPassState; // @synthesize lastPassState=_lastPassState;
@property(retain, nonatomic) MSRenderingCache *renderingCache; // @synthesize renderingCache=_renderingCache;
@property(retain, nonatomic) id <MSGPUTexture> overlayTexture; // @synthesize overlayTexture=_overlayTexture;
@property(retain, nonatomic) MSMemoryBuffer *overlayMemory; // @synthesize overlayMemory=_overlayMemory;
@property(retain, nonatomic) MSMemoryBuffer *contextMemory; // @synthesize contextMemory=_contextMemory;
@property(nonatomic) BOOL inFastZoom; // @synthesize inFastZoom=_inFastZoom;
@property(nonatomic) __weak MSTileMipLevel *previousLevel; // @synthesize previousLevel=_previousLevel;
@property(readonly, nonatomic) NSArray *tileLevels; // @synthesize tileLevels=_tileLevels;
@property(readonly, nonatomic) id <MSGPURenderer> renderer; // @synthesize renderer=_renderer;
@property(retain) MSOverlayItemContainer *overlayContainer; // @synthesize overlayContainer=_overlayContainer;
@property(retain) MSImmutableDocumentData *renderedDocument; // @synthesize renderedDocument=_renderedDocument;
@property(nonatomic) BOOL hideOverlay; // @synthesize hideOverlay=_hideOverlay;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) __weak id <MSOverlayItemDataSource> overlayRenderingDelegate; // @synthesize overlayRenderingDelegate=_overlayRenderingDelegate;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *layer;
- (BOOL)isDrawing;
- (void)endFastZooming;
- (void)beginFastZooming;
- (void)_scheduleRedraw;
- (void)_fastZoomExit;
- (void)_drawOverlayForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 pageOverlayRenderOptions:(unsigned long long)arg3 overlayColors:(id)arg4 canvasColorSpace:(id)arg5 overlayImageBuffer:(id)arg6 flowItems:(id)arg7;
- (void)_drawAcceleratedOverlayElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 pageOverlayRenderOptions:(unsigned long long)arg3 overlayColors:(id)arg4 canvasColorSpace:(struct CGColorSpace *)arg5 flowItems:(id)arg6;
- (id)_prepareOverlayImageBufferForPixelViewSize:(struct CGSize)arg1;
- (id)_beginOverlayForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 pixelViewSize:(struct CGSize)arg3 pageOverlayRenderOptions:(unsigned long long)arg4 overlayColors:(id)arg5 flowItems:(id)arg6;
- (BOOL)_requiresCPUFlowRendering:(unsigned long long)arg1 flowItems:(id)arg2;
- (void)_renderSlicesForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 pageOverlayRenderOptions:(unsigned long long)arg3 overlayColors:(id)arg4 canvasColorSpace:(struct CGColorSpace *)arg5;
- (void)_drawOverlayTextureFromBuffer:(id)arg1;
- (void)_renderPageOverlayElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 options:(unsigned long long)arg3 baseOrigin:(struct CGPoint)arg4 rect:(struct CGRect)arg5 overlayColors:(id)arg6;
- (void)_drawGridForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5;
- (void)_drawGuidesForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5;
- (id)_createGuideBufferForGroup:(id)arg1 rect:(struct CGRect)arg2 totalZoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5;
- (void)updateContentForPage:(id)arg1 document:(id)arg2 renderingParameters:(struct MSRenderingParameters)arg3 pixelViewSize:(struct CGSize)arg4 pixelated:(BOOL)arg5 pageOverlayRenderOptions:(unsigned long long)arg6 cacheProvider:(id)arg7 canvasColorSpace:(id)arg8 renderContentSynchronously:(BOOL)arg9 overlayColors:(id)arg10 dirtyRectBlock:(CDUnknownBlockType)arg11;
- (id)flowItems:(unsigned long long)arg1 onPage:(id)arg2;
- (void)_doUpdateContentInRect:(struct CGRect)arg1 forPage:(id)arg2 document:(id)arg3 renderingParameters:(struct MSRenderingParameters)arg4 pixelViewSize:(struct CGSize)arg5 pixelated:(BOOL)arg6 pageOverlayRenderOptions:(unsigned long long)arg7 cacheProvider:(id)arg8 canvasColorSpace:(id)arg9 renderContentSynchronously:(BOOL)arg10 overlayColors:(id)arg11 overlayItemImages:(id)arg12 hasUserFocus:(BOOL)arg13;
- (BOOL)_requiresCPUOverlayBufferForPage:(id)arg1 pageOverlayRenderOptions:(unsigned long long)arg2 overlayItems:(id)arg3 flowItems:(id)arg4;
- (void)_uniteDirtyRect:(struct CGRect)arg1;
- (id)_createDocumentColorSpaceWithCanvasColorSpace:(id)arg1 document:(id)arg2;
- (id)_findTileLevelForContentWithZoom:(double)arg1;
- (CDStruct_3f22a1f4)_updatePageObjectID:(id)arg1 document:(id)arg2 dirtyRect:(struct CGRect)arg3;
- (void)_removeAllTilesAndClearDirtyRegions;
- (CDStruct_3b01f0aa *)_visibleDirtyRects:(struct CGRect)arg1 totalZoom:(double)arg2 previousContentScale:(double)arg3 level:(id)arg4;
- (void)_flattenTilesInRects:(CDStruct_3b01f0aa *)arg1 forPage:(id)arg2 document:(id)arg3 backingScaleFactor:(double)arg4 zoomValue:(double)arg5 cacheProvider:(id)arg6 tiles:(id)arg7 documentColorSpace:(struct CGColorSpace *)arg8 renderContentSynchronously:(BOOL)arg9 timeout:(unsigned long long)arg10;
- (void)_rasterisationFinishedForTileLevel:(id)arg1 page:(id)arg2 document:(id)arg3;
- (void)_tileFlatteningWorker:(CDStruct_3b01f0aa *)arg1 zoomValue:(double)arg2 backingScaleFactor:(double)arg3 forPage:(id)arg4 document:(id)arg5 cacheProvider:(id)arg6 tiles:(id)arg7 contentsScale:(double)arg8 documentColorSpace:(struct CGColorSpace *)arg9;
- (id)_createArtboardShadowBufferForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (void)_drawArtboardShadowsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (id)_createPageBackgroundBufferForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2;
- (void)_drawPageBackgroundElementsForPage:(id)arg1 renderingParameters:(struct MSRenderingParameters)arg2 totalZoom:(double)arg3;
- (void)_drawTilesForPage:(id)arg1 hasArtboards:(BOOL)arg2 renderingParameters:(struct MSRenderingParameters)arg3 pixelViewSize:(struct CGSize)arg4 displayPixels:(BOOL)arg5 pageOverlayRenderOptions:(unsigned long long)arg6 tiles:(id)arg7 overlayColors:(id)arg8 canvasColorSpace:(id)arg9 overlayImageBuffer:(id)arg10 flowItems:(id)arg11 hasUserFocus:(BOOL)arg12;
- (void)_renderTilesWithTotalZoom:(double)arg1 displayPixels:(BOOL)arg2 visibleRect:(struct CGRect)arg3 pixelViewSize:(struct CGSize)arg4 tiles:(id)arg5;
- (CDStruct_75f85af1 *)_renderTileLevelWithTotalZoom:(double)arg1 displayPixels:(BOOL)arg2 visibleRect:(struct CGRect)arg3 tiles:(id)arg4 inRegion:(const CDStruct_75f85af1 *)arg5;
@property(readonly, nonatomic) MSRenderingDriver *driver;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 syncFirstFrame:(BOOL)arg2;

@end

