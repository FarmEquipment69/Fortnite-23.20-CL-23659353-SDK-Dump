// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking (Underlying native function: AddNamedDeviceVisualizationComponentBlocking 0x97cc23c)
	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor*& Target, struct FName& SystemName, struct FName& DeviceName, bool& bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId*& XRDeviceId); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking (Underlying native function: AddDeviceVisualizationComponentBlocking 0x97cbbc8)
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor*& Target, struct FXRDeviceId*& XRDeviceId, bool& bManualAttachment, struct FTransform& RelativeTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

