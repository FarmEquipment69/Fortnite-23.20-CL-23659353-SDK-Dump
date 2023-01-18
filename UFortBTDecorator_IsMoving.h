// Class /Script/FortniteAI.FortBTDecorator_IsMoving
// Size: 0x148
class UFortBTDecorator_IsMoving : public UFortBTDecorator_QueryGameplayAbility
{
	float UpdateInterval; // 0x100 (0x4)
	float MinTime; // 0x104 (0x4)
	bool bUseMinDist; // 0x108 (0x1)
	unsigned char unreflected_109[0x3]; // 0x109 (0x3) 
	float MinDistMinTime; // 0x10c (0x4)
	struct FDistanceToTargetComparison MinDistanceComparison; // 0x110 (0x38)
};

