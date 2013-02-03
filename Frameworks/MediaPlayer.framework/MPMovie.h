/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSURL;

@interface MPMovie : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    double _endPlaybackTime;
    BOOL _explicitlySetMovieSourceType;
    MPAVItem *_item;
    double _lastKnownDuration;
    } _lastKnownNaturalSize;
    unsigned int _lastKnownType;
    BOOL _movieIsUnplayable;
    int _movieSourceType;
    double _startPlaybackTime;
    NSURL *_url;
}

@property(readonly) double duration;
@property double endPlaybackTime;
@property(readonly) int movieMediaTypes;
@property int movieSourceType;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) double playableDuration;
@property double startPlaybackTime;
@property(readonly) NSURL * url;

+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (id)_MPArrayQueueItem;
- (void)_determineMediaType;
- (void)_durationAvailableNotification:(id)arg1;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_typeAvailableNotification:(id)arg1;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (int)movieMediaTypes;
- (int)movieSourceType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (double)playableDuration;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(int)arg1;
- (void)setStartPlaybackTime:(double)arg1;
- (double)startPlaybackTime;
- (id)url;

@end