// Class /Script/FortniteGame.FortHero
// Size: 0x270
class UFortHero : public UFortWorker
{
	struct FString heroname; // 0x1d0 (0x10)
	struct TArray<struct FFortSavedModeLoadout> modeloadouts; // 0x1e0 (0x10)
	bool Refundable; // 0x1f0 (0x1)
	unsigned char unreflected_1f1[0x7]; // 0x1f1 (0x7) 
	struct TArray<struct FMcpVariantReader> OutfitVariants; // 0x1f8 (0x10)
	struct TArray<struct FMcpVariantReader> BackblingVariants; // 0x208 (0x10)
	struct TArray<class UFortHeroSpecialization*> Specializations; // 0x218 (0x10)
	struct TArray<class UFortAbilityKit*> SpecializationAbilityKits; // 0x228 (0x10)
	struct TArray<class UCustomCharacterPart*> CharacterParts; // 0x238 (0x10)
	unsigned char unreflected_248[0x8]; // 0x248 (0x8) 
	struct TArray<struct FMcpVariantChannelInfo> OutfitVariantChannels; // 0x250 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> BackblingVariantChannels; // 0x260 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortHero.IsLevelClamped (Underlying native function: IsLevelClamped 0x8ed2570)
	bool IsLevelClamped(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHero.IsInExpeditionSquad (Underlying native function: IsInExpeditionSquad 0x8ed254c)
	bool IsInExpeditionSquad(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHero.GetUnclampedLevel (Underlying native function: GetUnclampedLevel 0x2d00a0c)
	int GetUnclampedLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHero.GetHeroTypeBP (Underlying native function: GetHeroTypeBP 0x8ecf900)
	class UFortHeroType* GetHeroTypeBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

