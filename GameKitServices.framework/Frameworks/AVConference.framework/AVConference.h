/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSTimer, NSObject<AVConferenceNotificationObserver>, SwitchDetector, NSDictionary, CALayer, NSMutableDictionary, NSObject<AVConferenceDelegate>;

@interface AVConference : NSObject  {
    id opaqueConf;
    BOOL useServer;
    BOOL runningInServer;
    void *serverConnection;
    NSObject<AVConferenceDelegate> *delegate;
    NSObject<AVConferenceNotificationObserver> *genericObserver;
    struct dispatch_queue_s { } *notificationQueue;
    NSMutableDictionary *notificationDictionary;
    NSDictionary *serverBag;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } blobMutex;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } blobCond;
    NSMutableDictionary *blobDict;
    SwitchDetector *detector;
    BOOL useSwitchDetector;
    BOOL testIsRunning;
    BOOL shouldDisplayNetworkQualityGraph_;
    NSTimer *networkQualityUpdateTimer_;
    CALayer *networkQualityGraphLayer_;
}

@property(getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;
@property BOOL requiresWifi;
@property void* localVideoLayer;
@property void* localVideoBackLayer;
@property void* remoteVideoLayer;
@property void* remoteVideoBackLayer;
@property(getter=getLocalFramerate,readonly) double localFramerate;
@property(getter=getLocalBitrate,readonly) double localBitrate;
@property(getter=getRemoteFramerate,readonly) double remoteFramerate;
@property(getter=getRemoteBitrate,readonly) double remoteBitrate;
@property(readonly) double remotePacketLossRate;
@property(readonly) double localPacketLossRate;
@property(readonly) double roundTripTime;
@property(readonly) int localFrameHeight;
@property(readonly) int localFrameWidth;
@property(readonly) int remoteFrameHeight;
@property(readonly) int remoteFrameWidth;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property(readonly) BOOL natType;
@property(retain) CALayer * networkQualityGraphLayer;
@property(retain) NSTimer * networkQualityUpdateTimer;
@property BOOL shouldDisplayNetworkQualityGraph;
@property NSObject<AVConferenceNotificationObserver> * genericObserver;
@property NSObject<AVConferenceDelegate> * delegate;

+ (short)addressPointerFromBlob:(id)arg1;
+ (id)externalAddressForSelfConnectionBlob:(id)arg1;
+ (void)startAudioSession;
+ (void)stopAudioSession;
+ (void)refreshLoggingParameters;
+ (unsigned int)doBlockingConnectionCheck;

- (void)setDelegate:(id)arg1;
- (BOOL)setActive:(BOOL)arg1;
- (id)delegate;
- (void)processApplicationQuery:(id)arg1 responseDict:(id*)arg2;
- (void)setRemoteVideoLayerContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 camera:(int)arg2;
- (void)receivedConnectionBlob:(id)arg1 forTransactionID:(id)arg2 callID:(id)arg3 error:(id)arg4;
- (void)serverReconnected;
- (void)serverDied;
- (void)testIsPausedProc:(id)arg1;
- (id)initWithFlags:(int)arg1;
- (BOOL)isUsingViceroyBlobFormat;
- (void)setSetSessionID:(id)arg1 forCallID:(int)arg2;
- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;
- (id)convertBlobtoOldBlob:(id)arg1;
- (id)convertBlobtoNewBlob:(id)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(int)arg2 connectionID:(id)arg3 usingBlob:(id)arg4 isCaller:(BOOL)arg5 capabilities:(id)arg6 error:(id*)arg7;
- (id)currentAudioInputDevice;
- (BOOL)setAudioInputDevice:(id)arg1;
- (void*)localVideoBackLayer;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)remoteVideoBackLayer;
- (int)getRemoteVideoSlot:(BOOL)arg1;
- (int)getLocalVideoSlot:(BOOL)arg1;
- (BOOL)startPreviewWithError:(id*)arg1;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 notificationEvent:(id)arg2;
- (void)processCancelRelayRequest:(int)arg1 cancelDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (id)genericObserver;
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;
- (BOOL)setServerInfo:(id)arg1;
- (void)updateGKSConnectivitySettings;
- (void)setShouldDisplayNetworkQualityGraph:(BOOL)arg1;
- (void)listenForNotifications;
- (void)setGenericObserver:(id)arg1;
- (BOOL)shouldDisplayNetworkQualityGraph;
- (void)addTransaction:(id)arg1 outputDictionary:(id*)arg2;
- (void)warmupForCall;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)getIsAudioPaused:(char *)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(int)arg2 error:(id*)arg3;
- (BOOL)getIsVideoPaused:(char *)arg1 callID:(int)arg2 error:(id*)arg3;
- (void)stopListeningForNotifications;
- (void)setUseViceroyBlobFormat:(BOOL)arg1;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(int*)arg2 error:(id*)arg3;
- (void)setPeerCN:(id)arg1 callID:(int)arg2;
- (void)setSessionID:(id)arg1 callID:(int)arg2;
- (double)networkQualityForCallID:(int)arg1;
- (BOOL)requiresWifi;
- (void)setRequiresWifi:(BOOL)arg1;
- (void)startNetworkQualityUpdateTimer;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(int)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 error:(id*)arg6;
- (void)stopCallID:(int)arg1;
- (void)remoteCancelledCallID:(int)arg1;
- (void)setCallReport:(int)arg1 withReport:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (BOOL)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (void*)localVideoLayer;
- (void)setLocalVideoLayer:(void*)arg1;
- (void*)remoteVideoLayer;
- (float)networkQuality;
- (id)networkQualityGraphLayer;
- (BOOL)updateNetworkQualityGraph;
- (void)setNetworkQualityUpdateTimer:(id)arg1;
- (id)networkQualityUpdateTimer;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setNetworkQualityGraphLayer:(id)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (double)getLocalFramerate;
- (double)getLocalBitrate;
- (double)getRemoteFramerate;
- (double)getRemoteBitrate;
- (int)localFrameHeight;
- (int)localFrameWidth;
- (int)remoteFrameHeight;
- (int)remoteFrameWidth;
- (double)remotePacketLossRate;
- (double)localPacketLossRate;
- (double)roundTripTime;
- (id)statsForCallID:(int)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (BOOL)natType;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)startPreview:(BOOL)arg1 withError:(id*)arg2;
- (void)stopPreview;
- (void)stopNetworkQualityUpdateTimer;
- (BOOL)isRunningPreview;
- (void)applyServerInfo:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localVideoAttributes;
- (void)setLocalVideoAttributes:(id)arg1;
- (unsigned int)doBlockingConnectionCheck;
- (void)processRelayRequestResponse:(int)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(int)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)asyncConnectionBlobRequestForParticipantID:(id)arg1 transactionID:(id)arg2;
- (void)processServerSideApplicationQuery:(id)arg1 responseDict:(id*)arg2;
- (id)init;
- (void)dealloc;

@end
