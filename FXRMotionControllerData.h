// ScriptStruct /Script/HeadMountedDisplay.XRMotionControllerData
// Size: 0xe0
struct FXRMotionControllerData
{
	bool bValid; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName DeviceName; // 0x4 (0x4)
	struct FGuid ApplicationInstanceID; // 0x8 (0x10)
	enum EXRVisualType DeviceVisualType; // 0x18 (0x1)
	enum EControllerHand HandIndex; // 0x19 (0x1)
	enum ETrackingStatus TrackingStatus; // 0x1a (0x1)
	unsigned char unreflected_1b[0x5]; // 0x1b (0x5) 
	struct FVector GripPosition; // 0x20 (0x18)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FQuat GripRotation; // 0x40 (0x20)
	struct FVector AimPosition; // 0x60 (0x18)
	unsigned char unreflected_78[0x8]; // 0x78 (0x8) 
	struct FQuat AimRotation; // 0x80 (0x20)
	struct TArray<struct FVector> HandKeyPositions; // 0xa0 (0x10)
	struct TArray<struct FQuat> HandKeyRotations; // 0xb0 (0x10)
	struct TArray<float> HandKeyRadii; // 0xc0 (0x10)
	bool bIsGrasped; // 0xd0 (0x1)
	unsigned char padding_d1[0xf]; // 0xd1 (0xf)
};

