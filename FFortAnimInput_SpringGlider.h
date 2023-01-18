// ScriptStruct /Script/FortniteGame.FortAnimInput_SpringGlider
// Size: 0xc0
struct FFortAnimInput_SpringGlider
{
	struct FFloatSpringState GliderXRotationRightSpringLeg; // 0x0 (0xc)
	struct FFloatSpringState GliderYRotationRightSpringLeg; // 0xc (0xc)
	struct FFloatSpringState GliderZLocationSpring; // 0x18 (0xc)
	struct FFloatSpringState GliderXLocationSpring; // 0x24 (0xc)
	struct FFloatSpringState GliderYLocationSpring; // 0x30 (0xc)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FRotator GliderOffsetRotator; // 0x40 (0x18)
	struct FRotator GliderOffsetRotationRightLeg; // 0x58 (0x18)
	struct FRotator GliderOffsetRotationLeftLeg; // 0x70 (0x18)
	struct FVector GliderOffsetLocation; // 0x88 (0x18)
	float GliderYOffsetRotationRightLeg; // 0xa0 (0x4)
	float GliderYOffsetRotationLeftLeg; // 0xa4 (0x4)
	float GliderXOffsetRotationRightLeg; // 0xa8 (0x4)
	float GliderXOffsetRotationLeftLeg; // 0xac (0x4)
	float GliderZOffset; // 0xb0 (0x4)
	float GliderXOffset; // 0xb4 (0x4)
	float GliderYOffset; // 0xb8 (0x4)
	unsigned char padding_bc[0x4]; // 0xbc (0x4)
};

