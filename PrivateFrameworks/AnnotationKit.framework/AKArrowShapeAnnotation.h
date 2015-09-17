/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol> {
    float _arrowHeadLength;
    float _arrowHeadWidth;
    float _arrowLineWidth;
}

@property float arrowHeadLength;
@property float arrowHeadWidth;
@property float arrowLineWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIColor *fillColor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;

- (float)arrowHeadLength;
- (float)arrowHeadWidth;
- (float)arrowLineWidth;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (void)setArrowHeadLength:(float)arg1;
- (void)setArrowHeadWidth:(float)arg1;
- (void)setArrowLineWidth:(float)arg1;

@end