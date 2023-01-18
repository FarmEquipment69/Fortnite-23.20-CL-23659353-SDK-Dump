// Class /Script/HeadMountedDisplay.MotionControllerComponent
// Size: 0x660
class UMotionControllerComponent : public UPrimitiveComponent
{
	int PlayerIndex; // 0x540 (0x4)
	enum EControllerHand Hand; // 0x544 (0x1)
	unsigned char unreflected_545[0x3]; // 0x545 (0x3) 
	struct FName MotionSource; // 0x548 (0x4)
	unsigned char bDisableLowLatencyUpdate; // 0x54c (0x1)
	unsigned char unreflected_54d[0x3]; // 0x54d (0x3) 
	enum ETrackingStatus CurrentTrackingStatus; // 0x550 (0x1)
	bool bDisplayDeviceModel; // 0x551 (0x1)
	unsigned char unreflected_552[0x2]; // 0x552 (0x2) 
	struct FName DisplayModelSource; // 0x554 (0x4)
	class UStaticMesh* CustomDisplayMesh; // 0x558 (0x8)
	struct TArray<class UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x560 (0x10)
	unsigned char unreflected_570[0xd8]; // 0x570 (0xd8) 
	class UPrimitiveComponent* DisplayComponent; // 0x648 (0x8)
	unsigned char padding_650[0x10]; // 0x650 (0x10)

	/* Functions */

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource (Underlying native function: SetTrackingSource 0x97d04d0)
	void SetTrackingSource(enum EControllerHand& NewSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource (Underlying native function: SetTrackingMotionSource 0x97d0380)
	void SetTrackingMotionSource(struct FName& NewSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel (Underlying native function: SetShowDeviceModel 0x97cff6c)
	void SetShowDeviceModel(bool& bShowControllerModel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource (Underlying native function: SetDisplayModelSource 0x97cfcd4)
	void SetDisplayModelSource(struct FName& NewDisplayModelSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh (Underlying native function: SetCustomDisplayMesh 0x97cfbfc)
	void SetCustomDisplayMesh(class UStaticMesh*& NewDisplayMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex (Underlying native function: SetAssociatedPlayerIndex 0x97cfa94)
	void SetAssociatedPlayerIndex(int& NewPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated (Has no native function)
	void OnMotionControllerUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked (Underlying native function: IsTracked 0x97cf9c4)
	bool IsTracked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource (Underlying native function: GetTrackingSource 0x97cf0c8)
	enum EControllerHand GetTrackingSource(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue (Underlying native function: GetParameterValue 0x97ce58c)
	float GetParameterValue(struct FName& InName, bool& bValueFound); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition (Underlying native function: GetHandJointPosition 0x97ce100)
	struct FVector GetHandJointPosition(int& jointIndex, bool& bValueFound); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)
};

