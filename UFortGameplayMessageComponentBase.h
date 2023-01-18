// Class /Script/FortniteGame.FortGameplayMessageComponentBase
// Size: 0x1c0
class UFortGameplayMessageComponentBase : public UActorComponent
{
	unsigned char unreflected_a0[0x28]; // 0xa0 (0x28) 
	struct FMulticastInlineDelegate OnChannelIdsReplicated; // 0xc8 (0x10)
	struct FGameplayTagContainer FilterTags; // 0xd8 (0x20)
	struct FGameplayTagQuery RequiredFilterTagQuery; // 0xf8 (0x48)
	struct FText MessageName; // 0x140 (0x18)
	struct FText MessageDescription; // 0x158 (0x18)
	struct FGameplayTagContainer ChannelIds; // 0x170 (0x20)
	int WeightOffset; // 0x190 (0x4)
	unsigned char unreflected_194[0x4]; // 0x194 (0x4) 
	class UClass* EditWidget; // 0x198 (0x8)
	struct FGameplayTagContainer Tags; // 0x1a0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.SetChannelId (Underlying native function: SetChannelId 0x76c607c)
	void SetChannelId(struct FGameplayTagContainer& NewChannelIds); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.OnRep_ChannelIds (Underlying native function: OnRep_ChannelIds 0x87d1d18)
	void OnRepChannelIds(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.IsEnabled (Underlying native function: IsEnabled 0x87d1664)
	bool IsEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.IsChannelIdSet (Underlying native function: IsChannelIdSet 0x87d14e0)
	bool IsChannelIdSet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.GetMessageName (Underlying native function: GetMessageName 0x87d0960)
	struct FText GetMessageName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.GetMessageDescription (Underlying native function: GetMessageDescription 0x87d08ec)
	struct FText GetMessageDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.GetMessageChannelIndex (Underlying native function: GetMessageChannelIndex 0x87d08a8)
	int GetMessageChannelIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.GetDisabledReason (Underlying native function: GetDisabledReason 0x87d02a8)
	struct FText GetDisabledReason(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayMessageComponentBase.GetChannelId (Underlying native function: GetChannelId 0x87cff08)
	struct FGameplayTagContainer GetChannelId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

