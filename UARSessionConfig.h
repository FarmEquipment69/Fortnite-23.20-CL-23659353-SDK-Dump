// Class /Script/AugmentedReality.ARSessionConfig
// Size: 0x110
class UARSessionConfig : public UDataAsset
{
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30 (0x1)
	bool bGenerateCollisionForMeshData; // 0x31 (0x1)
	bool bGenerateNavMeshForMeshData; // 0x32 (0x1)
	bool bUseMeshDataForOcclusion; // 0x33 (0x1)
	bool bRenderMeshDataInWireframe; // 0x34 (0x1)
	bool bTrackSceneObjects; // 0x35 (0x1)
	bool bUsePersonSegmentationForOcclusion; // 0x36 (0x1)
	bool bUseSceneDepthForOcclusion; // 0x37 (0x1)
	bool bUseAutomaticImageScaleEstimation; // 0x38 (0x1)
	bool bUseStandardOnboardingUX; // 0x39 (0x1)
	enum EARWorldAlignment WorldAlignment; // 0x3a (0x1)
	enum EARSessionType SessionType; // 0x3b (0x1)
	enum EARPlaneDetectionMode PlaneDetectionMode; // 0x3c (0x1)
	bool bHorizontalPlaneDetection; // 0x3d (0x1)
	bool bVerticalPlaneDetection; // 0x3e (0x1)
	bool bEnableAutoFocus; // 0x3f (0x1)
	enum EARLightEstimationMode LightEstimationMode; // 0x40 (0x1)
	enum EARFrameSyncMode FrameSyncMode; // 0x41 (0x1)
	bool bEnableAutomaticCameraOverlay; // 0x42 (0x1)
	bool bEnableAutomaticCameraTracking; // 0x43 (0x1)
	bool bResetCameraTracking; // 0x44 (0x1)
	bool bResetTrackedObjects; // 0x45 (0x1)
	unsigned char unreflected_46[0x2]; // 0x46 (0x2) 
	struct TArray<class UARCandidateImage*> CandidateImages; // 0x48 (0x10)
	int MaxNumSimultaneousImagesTracked; // 0x58 (0x4)
	enum EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c (0x1)
	unsigned char unreflected_5d[0x3]; // 0x5d (0x3) 
	struct TArray<unsigned char> WorldMapData; // 0x60 (0x10)
	struct TArray<class UARCandidateObject*> CandidateObjects; // 0x70 (0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x80 (0xc)
	bool bUseOptimalVideoFormat; // 0x8c (0x1)
	enum EARFaceTrackingDirection FaceTrackingDirection; // 0x8d (0x1)
	enum EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e (0x1)
	unsigned char unreflected_8f[0x1]; // 0x8f (0x1) 
	int MaxNumberOfTrackedFaces; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct TArray<unsigned char> SerializedARCandidateImageDatabase; // 0x98 (0x10)
	enum EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8 (0x1)
	enum EARSceneReconstruction SceneReconstructionMethod; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x6]; // 0xaa (0x6) 
	class UClass* PlaneComponentClass; // 0xb0 (0x8)
	class UClass* PointComponentClass; // 0xb8 (0x8)
	class UClass* FaceComponentClass; // 0xc0 (0x8)
	class UClass* ImageComponentClass; // 0xc8 (0x8)
	class UClass* QRCodeComponentClass; // 0xd0 (0x8)
	class UClass* PoseComponentClass; // 0xd8 (0x8)
	class UClass* EnvironmentProbeComponentClass; // 0xe0 (0x8)
	class UClass* ObjectComponentClass; // 0xe8 (0x8)
	class UClass* MeshComponentClass; // 0xf0 (0x8)
	class UClass* GeoAnchorComponentClass; // 0xf8 (0x8)
	class UMaterialInterface* DefaultMeshMaterial; // 0x100 (0x8)
	class UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects (Underlying native function: ShouldResetTrackedObjects 0x97bfa74)
	bool ShouldResetTrackedObjects(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking (Underlying native function: ShouldResetCameraTracking 0x97bfa60)
	bool ShouldResetCameraTracking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay (Underlying native function: ShouldRenderCameraOverlay 0x8815064)
	bool ShouldRenderCameraOverlay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking (Underlying native function: ShouldEnableCameraTracking 0x97bfa4c)
	bool ShouldEnableCameraTracking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus (Underlying native function: ShouldEnableAutoFocus 0x97bfa38)
	bool ShouldEnableAutoFocus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData (Underlying native function: SetWorldMapData 0x97bf954)
	void SetWorldMapData(struct TArray<unsigned char>& WorldMapData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable (Underlying native function: SetSessionTrackingFeatureToEnable 0x97bf8d8)
	void SetSessionTrackingFeatureToEnable(enum EARSessionTrackingFeature& InSessionTrackingFeature); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod (Underlying native function: SetSceneReconstructionMethod 0x97bf85c)
	void SetSceneReconstructionMethod(enum EARSceneReconstruction& InSceneReconstructionMethod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects (Underlying native function: SetResetTrackedObjects 0x97bf7e0)
	void SetResetTrackedObjects(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking (Underlying native function: SetResetCameraTracking 0x97bf764)
	void SetResetCameraTracking(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate (Underlying native function: SetFaceTrackingUpdate 0x97bf004)
	void SetFaceTrackingUpdate(enum EARFaceTrackingUpdate& InUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection (Underlying native function: SetFaceTrackingDirection 0x97bef88)
	void SetFaceTrackingDirection(enum EARFaceTrackingDirection& InDirection); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus (Underlying native function: SetEnableAutoFocus 0x97bed5c)
	void SetEnableAutoFocus(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat (Underlying native function: SetDesiredVideoFormat 0x97becd0)
	void SetDesiredVideoFormat(struct FARVideoFormat& NewFormat); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList (Underlying native function: SetCandidateObjectList 0x97beb34)
	void SetCandidateObjectList(struct TArray<class UARCandidateObject*>& InCandidateObjects); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData (Underlying native function: GetWorldMapData 0x97bca30)
	struct TArray<unsigned char> GetWorldMapData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment (Underlying native function: GetWorldAlignment 0x97bca1c)
	enum EARWorldAlignment GetWorldAlignment(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType (Underlying native function: GetSessionType 0x97bc704)
	enum EARSessionType GetSessionType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod (Underlying native function: GetSceneReconstructionMethod 0x97bc6c8)
	enum EARSceneReconstruction GetSceneReconstructionMethod(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode (Underlying native function: GetPlaneDetectionMode 0x97bc630)
	enum EARPlaneDetectionMode GetPlaneDetectionMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked (Underlying native function: GetMaxNumSimultaneousImagesTracked 0x7f9287c)
	int GetMaxNumSimultaneousImagesTracked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode (Underlying native function: GetLightEstimationMode 0x89b8b40)
	enum EARLightEstimationMode GetLightEstimationMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode (Underlying native function: GetFrameSyncMode 0x97bb198)
	enum EARFrameSyncMode GetFrameSyncMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate (Underlying native function: GetFaceTrackingUpdate 0x97bb180)
	enum EARFaceTrackingUpdate GetFaceTrackingUpdate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection (Underlying native function: GetFaceTrackingDirection 0x97bb168)
	enum EARFaceTrackingDirection GetFaceTrackingDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType (Underlying native function: GetEnvironmentCaptureProbeType 0x97bb0e8)
	enum EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature (Underlying native function: GetEnabledSessionTrackingFeature 0x97bb0d0)
	enum EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat (Underlying native function: GetDesiredVideoFormat 0x97bafcc)
	struct FARVideoFormat GetDesiredVideoFormat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList (Underlying native function: GetCandidateObjectList 0x97baef4)
	struct TArray<class UARCandidateObject*> GetCandidateObjectList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList (Underlying native function: GetCandidateImageList 0x751a86c)
	struct TArray<class UARCandidateImage*> GetCandidateImageList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject (Underlying native function: AddCandidateObject 0x97b89d0)
	void AddCandidateObject(class UARCandidateObject*& CandidateObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage (Underlying native function: AddCandidateImage 0x97b8934)
	void AddCandidateImage(class UARCandidateImage*& NewCandidateImage); // (Final | Native | Public | BlueprintCallable)
};

