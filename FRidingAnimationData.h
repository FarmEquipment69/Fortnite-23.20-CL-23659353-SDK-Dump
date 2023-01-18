// ScriptStruct /Script/IrwinRuntime.RidingAnimationData
// Size: 0x14
struct FRidingAnimationData
{
	bool bIsRidden; // 0x0 (0x1)
	bool bIsTurningInPlace; // 0x1 (0x1)
	bool bIsSprinting; // 0x2 (0x1)
	bool bIsBeingPetted; // 0x3 (0x1)
	bool bIsMovingBackwards; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float TurnInPlaceRotationSpeed; // 0x8 (0x4)
	float TurnInPlaceAngleDelta; // 0xc (0x4)
	float RiderReferentialYaw; // 0x10 (0x4)
};

