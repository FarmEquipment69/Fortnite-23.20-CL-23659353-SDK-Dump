// Class /Script/FortniteGame.FortMusicCombatBank
// Size: 0x50
class UFortMusicCombatBank : public UDataAsset
{
	class UFortMusicAsset* Assets[0x4]; // 0x30 (0x8) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.FortMusicCombatBank.GetAssetFromCombatIntensity (Underlying native function: GetAssetFromCombatIntensity 0x8e7e054)
	class UFortMusicAsset* GetAssetFromCombatIntensity(struct TEnumAsByte<EFortMusicCombatIntensity>& Intensity); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

