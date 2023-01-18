// Class /Script/FortniteGame.FortMusicContext
// Size: 0x58
class UFortMusicContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnMusicPackChanged; // 0x30 (0x10)
	class UAthenaMusicPackItemDefinition* DesiredActiveMusicPack; // 0x40 (0x8)
	struct TArray<struct FPrimaryAssetId*> LoadedPacks; // 0x48 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMusicContext.SetActiveMusicPack (Underlying native function: SetActiveMusicPack 0x1e3fa98)
	void SetActiveMusicPack(class UAthenaMusicPackItemDefinition*& NewMusicPack, float& StartTimeOffset); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicContext.IsDefaultMusicEquipped (Underlying native function: IsDefaultMusicEquipped 0x884474c)
	bool IsDefaultMusicEquipped(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMusicContext.GetEquippedMusicPack (Underlying native function: GetEquippedMusicPack 0x1e40084)
	class UAthenaMusicPackItemDefinition* GetEquippedMusicPack(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

