// Class /Script/AugmentedReality.ARPin
// Size: 0x150
class UARPin : public UObject
{
	class UARTrackedGeometry* TrackedGeometry; // 0x28 (0x8)
	class USceneComponent* PinnedComponent; // 0x30 (0x8)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform LocalToTrackingTransform; // 0x40 (0x60)
	struct FTransform LocalToAlignedTrackingTransform; // 0xa0 (0x60)
	enum EARTrackingState TrackingState; // 0x100 (0x1)
	unsigned char unreflected_101[0x1f]; // 0x101 (0x1f) 
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0x130 (0x10)
	unsigned char padding_140[0x10]; // 0x140 (0x10)

	/* Functions */

	// Function /Script/AugmentedReality.ARPin.GetTrackingState (Underlying native function: GetTrackingState 0x2470eac)
	enum EARTrackingState GetTrackingState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry (Underlying native function: GetTrackedGeometry 0x97bc8c0)
	class UARTrackedGeometry* GetTrackedGeometry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent (Underlying native function: GetPinnedComponent 0x7399960)
	class USceneComponent* GetPinnedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform (Underlying native function: GetLocalToWorldTransform 0x97bbe68)
	struct FTransform GetLocalToWorldTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform (Underlying native function: GetLocalToTrackingTransform 0x97bb4cc)
	struct FTransform GetLocalToTrackingTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPin.GetDebugName (Underlying native function: GetDebugName 0x97bafb4)
	struct FName GetDebugName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPin.DebugDraw (Underlying native function: DebugDraw 0x97b9d24)
	void DebugDraw(class UWorld*& World, struct FLinearColor& Color, float& Scale, float& PersistForSeconds); // (Native | Public | HasOutParms | HasDefaults | Const)
};

