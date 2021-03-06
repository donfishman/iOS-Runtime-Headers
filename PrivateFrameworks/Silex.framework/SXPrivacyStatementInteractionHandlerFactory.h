/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPrivacyStatementInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory> {
    <SXVideoPlaybackController> * _playbackController;
    <SXPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideoPlaybackController> *playbackController;
@property (nonatomic, readonly) <SXPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1 playbackController:(id)arg2;
- (id)playbackController;
- (id)playbackCoordinatorProvider;

@end
