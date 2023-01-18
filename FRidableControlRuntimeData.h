// ScriptStruct /Script/FortniteGame.RidableControlRuntimeData
// Size: 0x40
struct FRidableControlRuntimeData
{
	struct FRotator RidingControllerRotation; // 0x0 (0x18)
	float DesiredTurnInPlaceAngle; // 0x18 (0x4)
	bool bDesiredTurnInPlaceAngleSet; // 0x1c (0x1)
	unsigned char unreflected_1d[0xb]; // 0x1d (0xb) 
	bool bIsRidingSprinting; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float PreviousControlYaw; // 0x2c (0x4)
	bool bMovingBackwards; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float RiderReferentialYaw; // 0x34 (0x4)
	bool bAscending; // 0x38 (0x1)
	bool bIsRidingPetting; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

