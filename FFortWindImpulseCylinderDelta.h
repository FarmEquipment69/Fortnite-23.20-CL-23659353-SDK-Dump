// ScriptStruct /Script/FortniteGame.FortWindImpulseCylinderDelta
// Size: 0xf8
struct FFortWindImpulseCylinderDelta
{
	struct FVector DeltaCenter; // 0x0 (0x18)
	bool bInitialized; // 0x18 (0x1)
	bool bRippleOutward; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float SectionWidth; // 0x1c (0x4)
	float InnerSectionRadius; // 0x20 (0x4)
	float OuterSectionRadius; // 0x24 (0x4)
	float MaximumRadius; // 0x28 (0x4)
	float DesiredOverallBlendTime; // 0x2c (0x4)
	float SectionBlendTime; // 0x30 (0x4)
	float SectionCurrentBlendTime; // 0x34 (0x4)
	float PreviousMagnitude; // 0x38 (0x4)
	float SectionCurrentMagnitude; // 0x3c (0x4)
	float DesiredMagnitude; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FBox OuterWorldBounds; // 0x48 (0x38)
	struct FBox InnerWorldBounds; // 0x80 (0x38)
	struct FBox WindImpulseBounds; // 0xb8 (0x38)
	struct FFortWindImpulseHandle WindImpulseHandleToModify; // 0xf0 (0x4)
	unsigned char padding_f4[0x4]; // 0xf4 (0x4)
};

