// Class /Script/AIModule.BTDecorator_KeepInCone
// Size: 0xc8
class UBTDecorator_KeepInCone : public UBTDecorator
{
	float ConeHalfAngle; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FBlackboardKeySelector ConeOrigin; // 0x70 (0x28)
	struct FBlackboardKeySelector Observed; // 0x98 (0x28)
	unsigned char bUseSelfAsOrigin; // 0xc0 (0x1)
	unsigned char bUseSelfAsObserved; // 0xc0 (0x1)
	unsigned char padding_c1[0x7]; // 0xc1 (0x7)
};

