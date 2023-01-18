// ScriptStruct /Script/FortniteAI.FortAILODSetting_CharacterMovement
// Size: 0x188
struct FFortAILODSetting_CharacterMovement : FFortAthenaAILODSetting
{
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FScalableFloat Interval; // 0x8 (0x28)
	struct FScalableFloat RandomDeviation; // 0x30 (0x28)
	struct FScalableFloat MinimumDynamicInterval; // 0x58 (0x28)
	struct FScalableFloat MaximumDotDifferenceBetweenInputVectors; // 0x80 (0x28)
	struct FScalableFloat bDisableAvoidance; // 0xa8 (0x28)
	struct FScalableFloat bBotsEnableNavWalkingMode; // 0xd0 (0x28)
	struct FScalableFloat bBotsEnablePhysNavWalkingPathFollowingMode; // 0xf8 (0x28)
	struct FScalableFloat bSweepWhileNavWalking; // 0x120 (0x28)
	struct FScalableFloat bGenerateOverlapInNavWalking; // 0x148 (0x28)
	unsigned char padding_170[0x18]; // 0x170 (0x18)
};

