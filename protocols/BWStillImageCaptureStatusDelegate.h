/* Generated by RuntimeBrowser.
 */

@protocol BWStillImageCaptureStatusDelegate <NSObject>

@required

- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didCapturePhotoForSettingsID:(unsigned long long)arg2;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willCapturePhotoForSettingsID:(unsigned long long)arg2 sisActive:(BOOL)arg3;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willPrepareStillImageBracketWithSettings:(FigCaptureStillImageSettings *)arg2 clientInitiated:(BOOL)arg3;

@end