// Class /Script/AIModule.BTDecorator_ConeCheck
// Size: 0xf0
class UBTDecorator_ConeCheck : public UBTDecorator
{
	float ConeHalfAngle; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FBlackboardKeySelector ConeOrigin; // 0x70 (0x28)
	struct FBlackboardKeySelector ConeDirection; // 0x98 (0x28)
	struct FBlackboardKeySelector Observed; // 0xc0 (0x28)
	unsigned char padding_e8[0x8]; // 0xe8 (0x8)
};

