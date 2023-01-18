// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
// Size: 0x830
class UCameraAnimationSequenceCameraStandIn : public UObject
{
	float FieldOfView; // 0x28 (0x4)
	unsigned char bConstrainAspectRatio; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	float AspectRatio; // 0x30 (0x4)
	unsigned char unreflected_34[0xc]; // 0x34 (0xc) 
	struct FPostProcessSettings PostProcessSettings; // 0x40 (0x6e0)
	float PostProcessBlendWeight; // 0x720 (0x4)
	struct FCameraFilmbackSettings Filmback; // 0x724 (0xc)
	struct FCameraLensSettings LensSettings; // 0x730 (0x1c)
	unsigned char unreflected_74c[0x4]; // 0x74c (0x4) 
	struct FCameraFocusSettings FocusSettings; // 0x750 (0x60)
	float CurrentFocalLength; // 0x7b0 (0x4)
	float CurrentAperture; // 0x7b4 (0x4)
	float CurrentFocusDistance; // 0x7b8 (0x4)
	unsigned char padding_7bc[0x74]; // 0x7bc (0x74)
};

