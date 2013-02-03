/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject <MPMediaPlayback> {
    MPMusicPlayerControllerInternal *_internal;
}

@property float currentPlaybackRate;
@property double currentPlaybackTime;
@property(readonly) BOOL isPreparedToPlay;

+ (id)applicationMusicPlayer;
+ (id)iPodMusicPlayer;
+ (void)initialize;
+ (id)runLoopForNotifications;
+ (void)setRunLoopForNotifications:(id)arg1;

- (void)_clientCheckInUsingExistencePort:(BOOL)arg1;
- (void)_isQueuePreparedDidChange:(BOOL)arg1;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_musicPlayerDidLaunch;
- (BOOL)_musicPlayerExistencePortIsValid;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(int)arg1;
- (void)_registerForLaunchNotifications;
- (void)_repeatModeDidChange:(int)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_serverDied:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)_shuffleModeDidChange:(int)arg1;
- (void)_stopMigServer;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_unregisterForLaunchNotifications;
- (BOOL)allowsRemoteUIAccess;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (unsigned int)currentChapterIndex;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)endGeneratingPlaybackNotifications;
- (void)endSeeking;
- (void)forwardInvocation:(id)arg1;
- (unsigned int)indexOfNowPlayingItem;
- (id)init;
- (BOOL)isGeniusAvailable;
- (BOOL)isGeniusAvailableForSeedItems:(id)arg1;
- (BOOL)isNowPlayingItemFromGeniusMix;
- (BOOL)isPreparedToPlay;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (void)play;
- (int)playbackSpeed;
- (int)playbackState;
- (void)prepareToPlay;
- (int)repeatMode;
- (BOOL)serverIsAlive;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setPlaybackSpeed:(int)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithQuery:(id)arg1;
- (BOOL)setQueueWithSeedItems:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setUseCachedPlaybackState:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (int)shuffleMode;
- (BOOL)skipInDirection:(int)arg1 error:(id*)arg2;
- (void)stop;
- (unsigned int)unshuffledIndexOfNowPlayingItem;
- (float)volume;

@end