// Class /Script/GameplayAbilities.AbilitySystemGlobals
// Size: 0x208
class UAbilitySystemGlobals : public UObject
{
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28 (0x18)
	unsigned char unreflected_40[0x28]; // 0x40 (0x28) 
	bool bUseDebugTargetFromHud; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	struct FGameplayTag ActivateFailIsDeadTag; // 0x6c (0x4)
	struct FName ActivateFailIsDeadName; // 0x70 (0x4)
	struct FGameplayTag ActivateFailCooldownTag; // 0x74 (0x4)
	struct FName ActivateFailCooldownName; // 0x78 (0x4)
	struct FGameplayTag ActivateFailCostTag; // 0x7c (0x4)
	struct FName ActivateFailCostName; // 0x80 (0x4)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x84 (0x4)
	struct FName ActivateFailTagsBlockedName; // 0x88 (0x4)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0x8c (0x4)
	struct FName ActivateFailTagsMissingName; // 0x90 (0x4)
	struct FGameplayTag ActivateFailNetworkingTag; // 0x94 (0x4)
	struct FName ActivateFailNetworkingName; // 0x98 (0x4)
	int MinimalReplicationTagCountBits; // 0x9c (0x4)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xa0 (0x10)
	bool bAllowGameplayModEvaluationChannels; // 0xb0 (0x1)
	enum EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xb1 (0x1)
	unsigned char unreflected_b2[0x2]; // 0xb2 (0x2) 
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0xb4 (0x4) (ARRAY) 
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FSoftObjectPath GlobalCurveTableName; // 0xe0 (0x18)
	class UCurveTable* GlobalCurveTable; // 0xf8 (0x8)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x100 (0x18)
	class UDataTable* GlobalAttributeMetaDataTable; // 0x118 (0x8)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x120 (0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x138 (0x10)
	struct TArray<class UCurveTable*> GlobalAttributeDefaultsTables; // 0x148 (0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x158 (0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x170 (0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x188 (0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x198 (0x18)
	class UGameplayTagReponseTable* GameplayTagResponseTable; // 0x1b0 (0x8)
	bool PredictTargetGameplayEffects; // 0x1b8 (0x1)
	bool ReplicateActivationOwnedTags; // 0x1b9 (0x1)
	unsigned char unreflected_1ba[0x6]; // 0x1ba (0x6) 
	class UGameplayCueManager* GlobalGameplayCueManager; // 0x1c0 (0x8)
	unsigned char padding_1c8[0x40]; // 0x1c8 (0x40)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts (Underlying native function: ToggleIgnoreAbilitySystemCosts 0x6b1419c)
	void ToggleIgnoreAbilitySystemCosts(); // (Exec | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns (Underlying native function: ToggleIgnoreAbilitySystemCooldowns 0x6b14184)
	void ToggleIgnoreAbilitySystemCooldowns(); // (Exec | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility (Underlying native function: ServerEndPlayerAbility 0x6b13f58)
	void ServerEndPlayerAbility(struct FString& AbilityNameMatch); // (Final | Exec | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility (Underlying native function: ServerCancelPlayerAbility 0x6b13f58)
	void ServerCancelPlayerAbility(struct FString& AbilityNameMatch); // (Final | Exec | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility (Underlying native function: ServerActivatePlayerAbility 0x6b13f58)
	void ServerActivatePlayerAbility(struct FString& AbilityNameMatch); // (Final | Exec | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities (Underlying native function: ListPlayerAbilities 0x26daa0c)
	void ListPlayerAbilities(); // (Final | Exec | Native | Public)
};

