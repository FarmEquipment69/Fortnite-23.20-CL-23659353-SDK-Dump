// ScriptStruct /Script/FortniteGame.TemplateOptionValue
// Size: 0x70
struct FTemplateOptionValue
{
	struct FName Key; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FGameplayTagQuery RequiredCondition; // 0x8 (0x48)
	enum EValueCostCalculationMethod CalculationMethod; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	struct FInstancedStruct StructAssets; // 0x58 (0x10)
	int InstancePayloadValue; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

