// Class /Script/FortniteGame.FortCardPackItemDefinition
// Size: 0x4c8
class UFortCardPackItemDefinition : public UFortAccountItemDefinition
{
	bool bIsLlama; // 0x420 (0x1)
	bool bIsChoicePack; // 0x421 (0x1)
	bool bAutoOpenAsReward; // 0x422 (0x1)
	unsigned char unreflected_423[0x1]; // 0x423 (0x1) 
	int LootTier; // 0x424 (0x4)
	struct FString LootTierGroup; // 0x428 (0x10)
	int DisplayRarityLevel; // 0x438 (0x4)
	unsigned char unreflected_43c[0x4]; // 0x43c (0x4) 
	struct TWeakObjectPtr<class UTexture> PackImage; // 0x440 (0x28)
	struct TWeakObjectPtr<class UTexture2D> XRayTexture; // 0x468 (0x28)
	struct FLinearColor PackColor; // 0x490 (0x10)
	struct TWeakObjectPtr<class UFortPackPersonality> PackPersonality; // 0x4a0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortCardPackItemDefinition.IsLlama (Underlying native function: IsLlama 0x7239108)
	bool IsLlama(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItemDefinition.IsChoicePack (Underlying native function: IsChoicePack 0x8efd184)
	bool IsChoicePack(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItemDefinition.GetXRayImage (Underlying native function: GetXRayImage 0x8efcfa4)
	struct TWeakObjectPtr<class UTexture2D> GetXRayImage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItemDefinition.GetPackPersonality (Underlying native function: GetPackPersonality 0x8efc9d8)
	class UFortPackPersonality* GetPackPersonality(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItemDefinition.GetPackImage (Underlying native function: GetPackImage 0x8efc9a8)
	class UTexture* GetPackImage(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItemDefinition.GetPackColor (Underlying native function: GetPackColor 0x8efc98c)
	struct FLinearColor GetPackColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCardPackItemDefinition.GetDisplayRarityLevel (Underlying native function: GetDisplayRarityLevel 0x2d013fc)
	int GetDisplayRarityLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

