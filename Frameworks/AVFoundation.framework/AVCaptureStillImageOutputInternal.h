/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    BOOL EV0CaptureEnabled;
    BOOL HDRCaptureEnabled;
    BOOL chromaNoiseReductionEnabled;
    unsigned long imageDataFormatType;
    long long imageMaxDataSize;
    BOOL isCapturingPhoto;
    NSDictionary *outputSettings;
    } previewImageSize;
    NSMutableArray *stillImageRequests;
    BOOL suspendsVideoProcessingDuringCapture;
}

- (void)dealloc;
- (id)init;

@end