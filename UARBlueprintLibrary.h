// Class /Script/AugmentedReality.ARBlueprintLibrary
// Size: 0x28
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent (Underlying native function: UnpinComponent 0x97bfd9c)
	static void UnpinComponent(class USceneComponent*& ComponentToUnpin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture (Underlying native function: ToggleARCapture 0x97bfcd8)
	static bool ToggleARCapture(bool& bOnOff, enum EARCaptureType& CaptureType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession (Underlying native function: StopARSession 0x97bfcc4)
	static void StopARSession(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession (Underlying native function: StartARSession 0x97bfa88)
	static void StartARSession(class UARSessionConfig*& SessionConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera (Underlying native function: SetEnabledXRCamera 0x97bedd8)
	static void SetEnabledXRCamera(bool& bOnOff); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale (Underlying native function: SetARWorldScale 0x97be82c)
	static void SetARWorldScale(float& InWorldScale); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation (Underlying native function: SetARWorldOriginLocationAndRotation 0x97be6cc)
	static void SetARWorldOriginLocationAndRotation(struct FVector& OriginLocation, struct FRotator& OriginRotation, bool& bIsTransformInWorldSpace, bool& bMaintainUpDirection); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform (Underlying native function: SetAlignmentTransform 0x97be900)
	static void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore (Underlying native function: SaveARPinToLocalStore 0x97bdb10)
	static bool SaveARPinToLocalStore(struct FName& InSaveName, class UARPin*& InPin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera (Underlying native function: ResizeXRCamera 0x97bda7c)
	static struct FIntPoint* ResizeXRCamera(struct FIntPoint*& InSize); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin (Underlying native function: RemovePin 0x97bd89c)
	static void RemovePin(class UARPin*& PinToRemove); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore (Underlying native function: RemoveARPinFromLocalStore 0x97bd81c)
	static void RemoveARPinFromLocalStore(struct FName& InSaveName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore (Underlying native function: RemoveAllARPinsFromLocalStore 0x97bd888)
	static void RemoveAllARPinsFromLocalStore(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult (Underlying native function: PinComponentToTraceResult 0x97bd6bc)
	static class UARPin* PinComponentToTraceResult(class USceneComponent*& ComponentToPin, struct FARTraceResult& TraceResult, struct FName& DebugName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin (Underlying native function: PinComponentToARPin 0x97bd5f8)
	static bool PinComponentToARPin(class USceneComponent*& ComponentToPin, class UARPin*& Pin); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent (Underlying native function: PinComponent 0x97bd43c)
	static class UARPin* PinComponent(class USceneComponent*& ComponentToPin, struct FTransform& PinToWorldTransform, class UARTrackedGeometry*& TrackedGeometry, struct FName& DebugName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession (Underlying native function: PauseARSession 0x97bd428)
	static void PauseARSession(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore (Underlying native function: LoadARPinsFromLocalStore 0x97bd370)
	static struct TMap<struct FName, class UARPin*> LoadARPinsFromLocalStore(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D (Underlying native function: LineTraceTrackedObjects3D 0x97bcf90)
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector& Start, struct FVector& End, bool& bTestFeaturePoints, bool& bTestGroundPlane, bool& bTestPlaneExtents, bool& bTestPlaneBoundaryPolygon); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects (Underlying native function: LineTraceTrackedObjects 0x97bd1b0)
	static struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D& ScreenCoord, bool& bTestFeaturePoints, bool& bTestGroundPlane, bool& bTestPlaneExtents, bool& bTestPlaneBoundaryPolygon); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported (Underlying native function: IsSessionTypeSupported 0x97bcef4)
	static bool IsSessionTypeSupported(enum EARSessionType& SessionType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported (Underlying native function: IsSessionTrackingFeatureSupported 0x97bce34)
	static bool IsSessionTrackingFeatureSupported(enum EARSessionType& SessionType, enum EARSessionTrackingFeature& SessionTrackingFeature); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported (Underlying native function: IsSceneReconstructionSupported 0x97bcd74)
	static bool IsSceneReconstructionSupported(enum EARSessionType& SessionType, enum EARSceneReconstruction& SceneReconstructionMethod); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported (Underlying native function: IsARSupported 0x97bcd50)
	static bool IsARSupported(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported (Underlying native function: IsARPinLocalStoreSupported 0x97bcd2c)
	static bool IsARPinLocalStoreSupported(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady (Underlying native function: IsARPinLocalStoreReady 0x97bcd08)
	static bool IsARPinLocalStoreReady(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus (Underlying native function: GetWorldMappingStatus 0x97bca4c)
	static enum EARWorldMappingState GetWorldMappingStatus(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason (Underlying native function: GetTrackingQualityReason 0x97bc9f8)
	static enum EARTrackingQualityReason GetTrackingQualityReason(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality (Underlying native function: GetTrackingQuality 0x97bc9d4)
	static enum EARTrackingQuality GetTrackingQuality(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats (Underlying native function: GetSupportedVideoFormats 0x97bc730)
	static struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum EARSessionType& SessionType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig (Underlying native function: GetSessionConfig 0x97bc6e0)
	static class UARSessionConfig* GetSessionConfig(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud (Underlying native function: GetPointCloud 0x97bc654)
	static struct TArray<struct FVector> GetPointCloud(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage (Underlying native function: GetPersonSegmentationImage 0x97bc608)
	static class UARTexture* GetPersonSegmentationImage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage (Underlying native function: GetPersonSegmentationDepthImage 0x97bc5e0)
	static class UARTexture* GetPersonSegmentationDepthImage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation (Underlying native function: GetObjectClassificationAtLocation 0x97bc22c)
	static bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum EARObjectClassification& OutClassification, struct FVector& OutClassificationLocation, float& MaxLocationDiff); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported (Underlying native function: GetNumberOfTrackedFacesSupported 0x97bc1f0)
	static int GetNumberOfTrackedFacesSupported(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate (Underlying native function: GetCurrentLightEstimate 0x97baf90)
	static class UARLightEstimate* GetCurrentLightEstimate(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics (Underlying native function: GetCameraIntrinsics 0x97bae34)
	static bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage (Underlying native function: GetCameraImage 0x97badec)
	static class UARTextureCameraImage* GetCameraImage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth (Underlying native function: GetCameraDepth 0x97bada4)
	static class UARTextureCameraDepth* GetCameraDepth(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale (Underlying native function: GetARWorldScale 0x97ba4cc)
	static float GetARWorldScale(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture (Underlying native function: GetARTexture 0x97ba44c)
	static class UARTexture* GetARTexture(enum EARTextureType& TextureType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus (Underlying native function: GetARSessionStatus 0x97ba3d4)
	static struct FARSessionStatus GetARSessionStatus(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses (Underlying native function: GetAllTrackedPoses 0x97baaf8)
	static struct TArray<class UARTrackedPose*> GetAllTrackedPoses(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints (Underlying native function: GetAllTrackedPoints 0x97baa84)
	static struct TArray<class UARTrackedPoint*> GetAllTrackedPoints(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes (Underlying native function: GetAllTrackedPlanes 0x97baa10)
	static struct TArray<class UARPlaneGeometry*> GetAllTrackedPlanes(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages (Underlying native function: GetAllTrackedImages 0x97ba99c)
	static struct TArray<class UARTrackedImage*> GetAllTrackedImages(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes (Underlying native function: GetAllTrackedEnvironmentCaptureProbes 0x97ba928)
	static struct TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses (Underlying native function: GetAllTracked2DPoses 0x97ba888)
	static struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins (Underlying native function: GetAllPins 0x97ba814)
	static struct TArray<class UARPin*> GetAllPins(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass (Underlying native function: GetAllGeometriesByClass 0x97ba5c4)
	static struct TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(class UClass*& GeometryClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries (Underlying native function: GetAllGeometries 0x97ba550)
	static struct TArray<class UARTrackedGeometry*> GetAllGeometries(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform (Underlying native function: GetAlignmentTransform 0x97ba4f4)
	static struct FTransform GetAlignmentTransform(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName (Underlying native function: FindTrackedPointsByName 0x97ba1f0)
	static struct TArray<class UARTrackedPoint*> FindTrackedPointsByName(struct FString& PointName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry (Underlying native function: DebugDrawTrackedGeometry 0x97ba030)
	static void DebugDrawTrackedGeometry(class UARTrackedGeometry*& TrackedGeometry, class UObject*& WorldContextObject, struct FLinearColor& Color, float& OutlineThickness, float& PersistForSeconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin (Underlying native function: DebugDrawPin 0x97b9e70)
	static void DebugDrawPin(class UARPin*& ARPin, class UObject*& WorldContextObject, struct FLinearColor& Color, float& Scale, float& PersistForSeconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection (Underlying native function: CalculateClosestIntersection 0x97b9620)
	static void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform (Underlying native function: CalculateAlignmentTransform 0x97b93fc)
	static void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName (Underlying native function: AddTrackedPointWithName 0x97b91a8)
	static bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString& PointName, bool& bDeletePointsWithSameName); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage (Underlying native function: AddRuntimeCandidateImage 0x97b8f74)
	static class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig*& SessionConfig, class UTexture2D*& CandidateTexture, struct FString& FriendlyName, float& PhysicalWidth); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe (Underlying native function: AddManualEnvironmentCaptureProbe 0x97b8e88)
	static bool AddManualEnvironmentCaptureProbe(struct FVector& Location, struct FVector& Extent); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

