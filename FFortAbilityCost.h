// ScriptStruct /Script/FortniteGame.FortAbilityCost
// Size: 0x40
struct FFortAbilityCost
{
	enum EFortAbilityCostSource CostSource; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FScalableFloat CostValue; // 0x8 (0x28)
	class UFortItemDefinition* ItemDefinition; // 0x30 (0x8)
	bool bOnlyApplyCostOnHit; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

