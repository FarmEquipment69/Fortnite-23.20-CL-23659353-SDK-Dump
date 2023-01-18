// ScriptStruct /Script/FortniteGame.ConditionalMaterialStyle
// Size: 0x20
struct FConditionalMaterialStyle
{
	class UFortMaterialStyle* style; // 0x0 (0x8)
	enum EStyleRequirementMatchPolicy RequirementMatchPolicy; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<class UFortControllerRequirement*> Requirements; // 0x10 (0x10)
};

