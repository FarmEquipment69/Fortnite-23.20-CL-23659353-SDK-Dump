// Class /Script/FortniteAI.FortBTDecorator_DistanceBetween
// Size: 0xd0
class UFortBTDecorator_DistanceBetween : public UBTDecorator
{
	struct TEnumAsByte<EArithmeticKeyOperation> Operator; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70 (0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98 (0x28)
	float SpecifiedDistance; // 0xc0 (0x4)
	unsigned char bUseSelf; // 0xc4 (0x1)
	unsigned char bCalculateAs2D; // 0xc4 (0x1)
	unsigned char unreflected_c5[0x3]; // 0xc5 (0x3) 
	float DistanceCalculationUpdateRate; // 0xc8 (0x4)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)
};

