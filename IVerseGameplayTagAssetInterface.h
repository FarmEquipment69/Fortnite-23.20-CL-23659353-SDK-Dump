// Class /Script/VerseGameplayTags.VerseGameplayTagAssetInterface
// Size: 0x28
class IVerseGameplayTagAssetInterface : public IInterface
{

	/* Functions */

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag (Underlying native function: HasMatchingGameplayTag 0x706b444)
	bool HasMatchingGameplayTag(struct FVerseGameplayTag*& TagToCheck); // (Native | Public | Const)

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags (Underlying native function: HasAnyMatchingGameplayTags 0x706b398)
	bool HasAnyMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | Const)

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags (Underlying native function: HasAllMatchingGameplayTags 0x706b2ec)
	bool HasAllMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | Const)

	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags (Underlying native function: GetOwnedGameplayTags 0x706b24c)
	void GetOwnedGameplayTags(struct FVerseGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | Const)
};

