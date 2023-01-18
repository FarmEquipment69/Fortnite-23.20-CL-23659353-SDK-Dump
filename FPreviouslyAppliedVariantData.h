// ScriptStruct /Script/FortniteGame.PreviouslyAppliedVariantData
// Size: 0x88
struct FPreviouslyAppliedVariantData
{
	class UAthenaCharacterItemDefinition* Character; // 0x8 (0x8)
	class UAthenaSkyDiveContrailItemDefinition* Contrail; // 0x10 (0x8)
	class UAthenaPickaxeItemDefinition* Pickaxe; // 0x18 (0x8)
	class UAthenaBackpackItemDefinition* Backpack; // 0x20 (0x8)
	unsigned char unreflected_28[0x50]; // 0x28 (0x50) 
	struct TArray<struct FMcpVariantChannelInfo> Variants; // 0x78 (0x10)
};

