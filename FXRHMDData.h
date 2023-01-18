// ScriptStruct /Script/HeadMountedDisplay.XRHMDData
// Size: 0x60
struct FXRHMDData
{
	bool bValid; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName DeviceName; // 0x4 (0x4)
	struct FGuid ApplicationInstanceID; // 0x8 (0x10)
	enum ETrackingStatus TrackingStatus; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FVector Position; // 0x20 (0x18)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FQuat Rotation; // 0x40 (0x20)
};

