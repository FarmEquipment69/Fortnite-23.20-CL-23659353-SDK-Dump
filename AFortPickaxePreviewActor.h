// Class /Script/FortniteGame.FortPickaxePreviewActor
// Size: 0x460
class AFortPickaxePreviewActor : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class UAnimMontage* MontageToPlayForSwinging; // 0x298 (0x8)
	class UAthenaPickaxeItemDefinition* CosmeticPickaxeItemDefinition; // 0x2a0 (0x8)
	struct TArray<struct FMcpVariantChannelInfo> PreviewVariantChannels; // 0x2a8 (0x10)
	class AFortWeapon* WeaponActor; // 0x2b8 (0x8)
	struct FDelegate OnSettingsChangedDelegate; // 0x2c0 (0xc)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct FFortAthenaLoadout Loadout; // 0x2d0 (0x178)
	unsigned char padding_448[0x18]; // 0x448 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortPickaxePreviewActor.PreviewPickaxeVariantsApplied (Has no native function)
	void PreviewPickaxeVariantsApplied(class UAthenaPickaxeItemDefinition*& Pickaxe); // (Event | Public | BlueprintEvent)
};

