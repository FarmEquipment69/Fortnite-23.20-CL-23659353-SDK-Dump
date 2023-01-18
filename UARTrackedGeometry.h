// Class /Script/AugmentedReality.ARTrackedGeometry
// Size: 0x160
class UARTrackedGeometry : public UObject
{
	struct FGuid UniqueId; // 0x28 (0x10)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform LocalToTrackingTransform; // 0x40 (0x60)
	struct FTransform LocalToAlignedTrackingTransform; // 0xa0 (0x60)
	enum EARTrackingState TrackingState; // 0x100 (0x1)
	unsigned char unreflected_101[0xf]; // 0x101 (0xf) 
	class UMRMeshComponent* UnderlyingMesh; // 0x110 (0x8)
	enum EARObjectClassification ObjectClassification; // 0x118 (0x1)
	enum EARSpatialMeshUsageFlags SpatialMeshUsageFlags; // 0x119 (0x1)
	unsigned char unreflected_11a[0x16]; // 0x11a (0x16) 
	int LastUpdateFrameNumber; // 0x130 (0x4)
	unsigned char unreflected_134[0xc]; // 0x134 (0xc) 
	struct FName DebugName; // 0x140 (0x4)
	unsigned char padding_144[0x1c]; // 0x144 (0x1c)

	/* Functions */

	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked (Underlying native function: IsTracked 0x97bcf74)
	bool IsTracked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag (Underlying native function: HasSpatialMeshUsageFlag 0x97bcb4c)
	bool HasSpatialMeshUsageFlag(enum EARSpatialMeshUsageFlags& InFlag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh (Underlying native function: GetUnderlyingMesh 0x8063270)
	class UMRMeshComponent* GetUnderlyingMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState (Underlying native function: GetTrackingState 0x2470eac)
	enum EARTrackingState GetTrackingState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification (Underlying native function: GetObjectClassification 0x97bc214)
	enum EARObjectClassification GetObjectClassification(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName (Underlying native function: GetName 0x97bc17c)
	struct FString GetName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform (Underlying native function: GetLocalToWorldTransform 0x97bbff8)
	struct FTransform GetLocalToWorldTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform (Underlying native function: GetLocalToTrackingTransform 0x97bb4cc)
	struct FTransform GetLocalToTrackingTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp (Underlying native function: GetLastUpdateTimestamp 0x97bb3cc)
	float GetLastUpdateTimestamp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber (Underlying native function: GetLastUpdateFrameNumber 0x97bb3b4)
	int GetLastUpdateFrameNumber(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName (Underlying native function: GetDebugName 0x875fff4)
	struct FName GetDebugName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

