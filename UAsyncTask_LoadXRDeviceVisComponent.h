// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40 (0x10)
	unsigned char unreflected_50[0x8]; // 0x50 (0x8) 
	class UPrimitiveComponent* SpawnedComponent; // 0x58 (0x8)

	/* Functions */

	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync (Underlying native function: AddNamedDeviceVisualizationComponentAsync 0x97cbf90)
	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor*& Target, struct FName& SystemName, struct FName& DeviceName, bool& bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId*& XRDeviceId, class UPrimitiveComponent*& NewComponent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync (Underlying native function: AddDeviceVisualizationComponentAsync 0x97cb99c)
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor*& Target, struct FXRDeviceId*& XRDeviceId, bool& bManualAttachment, struct FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

