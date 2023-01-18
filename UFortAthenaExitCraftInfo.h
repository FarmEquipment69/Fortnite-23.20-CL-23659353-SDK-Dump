// Class /Script/FortniteGame.FortAthenaExitCraftInfo
// Size: 0x580
class UFortAthenaExitCraftInfo : public UPrimaryDataAsset
{
	class UClass* ExitCaftClass; // 0x30 (0x8)
	class UClass* ExitCraftSpawnerClass; // 0x38 (0x8)
	struct FExitCraftInfo ExitCraftInfo; // 0x40 (0x1e8)
	struct FGameplayTag SpecialActorSpawnerTag; // 0x228 (0x4)
	unsigned char unreflected_22c[0x4]; // 0x22c (0x4) 
	struct FSlateBrush SpawnerMinimapIconBrush; // 0x230 (0xc0)
	struct FVector2D SpawnerMinimapIconScale; // 0x2f0 (0x10)
	struct FSlateBrush SpawnerCompassIconBrush; // 0x300 (0xc0)
	struct FVector2D SpawnerCompassIconScale; // 0x3c0 (0x10)
	struct FGameplayTag SpecialActorCraftTag; // 0x3d0 (0x4)
	unsigned char unreflected_3d4[0xc]; // 0x3d4 (0xc) 
	struct FSlateBrush CraftMinimapIconBrush; // 0x3e0 (0xc0)
	struct FVector2D CraftMinimapIconScale; // 0x4a0 (0x10)
	struct FSlateBrush CraftCompassIconBrush; // 0x4b0 (0xc0)
	struct FVector2D CraftCompassIconScale; // 0x570 (0x10)
};

