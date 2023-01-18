// Class /Script/AugmentedReality.ARTraceResultLibrary
// Size: 0x28
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry (Underlying native function: GetTrackedGeometry 0x97bc8d8)
	static class UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel (Underlying native function: GetTraceChannel 0x97bc7e4)
	static enum EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform (Underlying native function: GetLocalTransform 0x97bc074)
	static struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform (Underlying native function: GetLocalToWorldTransform 0x97bbee4)
	static struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform (Underlying native function: GetLocalToTrackingTransform 0x97bb524)
	static struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera (Underlying native function: GetDistanceFromCamera 0x97baff4)
	static float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

