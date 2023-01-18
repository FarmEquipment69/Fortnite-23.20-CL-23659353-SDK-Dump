// Class /Script/FortniteGame.FortAccoladeItemDefinition
// Size: 0x488
class UFortAccoladeItemDefinition : public UFortPersistableItemDefinition
{
	enum EFortAccoladeType AccoladeType; // 0x3a8 (0x1)
	enum EFortAccoladeSubtype AccoladeSubtype; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x6]; // 0x3aa (0x6) 
	struct TArray<struct TWeakObjectPtr<class UFortAccoladeItemDefinition>> AccoladeToReplace; // 0x3b0 (0x10)
	struct TWeakObjectPtr<class UTexture2D> PreviouseAccoladeSmallPreviewImage; // 0x3c0 (0x28)
	struct TWeakObjectPtr<class UTexture2D> PreviouseAccoladeLargePreviewImage; // 0x3e8 (0x28)
	enum EXPEventPriorityType Priority; // 0x410 (0x1)
	unsigned char unreflected_411[0x7]; // 0x411 (0x7) 
	struct FScalableFloat XpRewardAmount; // 0x418 (0x28)
	float AccoladeLevel; // 0x440 (0x4)
	bool bOnlyAllowOncePerDay; // 0x444 (0x1)
	bool bIgnoreInAntiAddictionReducedStates; // 0x445 (0x1)
	unsigned char unreflected_446[0x2]; // 0x446 (0x2) 
	class USoundCue* AwardedSoundCue; // 0x448 (0x8)
	struct FScalableFloat XpRewardScalarByCount; // 0x450 (0x28)
	struct TArray<struct FAccoladeSecondaryXpType> SecondaryXpValues; // 0x478 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetPriority (Underlying native function: GetPriority 0x8a46bf4)
	enum EXPEventPriorityType GetPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetPreviousAccoladeSmallPreviewImage (Underlying native function: GetPreviousAccoladeSmallPreviewImage 0x8a46abc)
	struct TWeakObjectPtr<class UTexture2D> GetPreviousAccoladeSmallPreviewImage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetPreviousAccoladeLargePreviewImage (Underlying native function: GetPreviousAccoladeLargePreviewImage 0x8a46a1c)
	struct TWeakObjectPtr<class UTexture2D> GetPreviousAccoladeLargePreviewImage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetAwardedSound (Underlying native function: GetAwardedSound 0x8a464b8)
	class USoundCue* GetAwardedSound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetAccoladeXpValueWithCountScalar (Underlying native function: GetAccoladeXpValueWithCountScalar 0x8a463dc)
	int GetAccoladeXpValueWithCountScalar(int& Count); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetAccoladeXpValue (Underlying native function: GetAccoladeXpValue 0x8a4639c)
	int GetAccoladeXpValue(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetAccoladeType (Underlying native function: GetAccoladeType 0x8a07dc0)
	enum EFortAccoladeType GetAccoladeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetAccoladeSubtype (Underlying native function: GetAccoladeSubtype 0x7392aa8)
	enum EFortAccoladeSubtype GetAccoladeSubtype(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortAccoladeItemDefinition.GetAccoladeLevel (Underlying native function: GetAccoladeLevel 0x2d0142c)
	float GetAccoladeLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

