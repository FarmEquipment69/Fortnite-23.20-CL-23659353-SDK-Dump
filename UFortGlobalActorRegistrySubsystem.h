// Class /Script/FortniteGame.FortGlobalActorRegistrySubsystem
// Size: 0x178
class UFortGlobalActorRegistrySubsystem : public UWorldSubsystem
{
	struct TMap<struct FGameplayTag, class UActorRegisterData_GameplayTagBased*> ActorRegistrationDataByGameplayTagMap; // 0x30 (0x50)
	struct TMap<class AActor*, class UActorRegisterData_ActorBased*> ActorRegistrationDataByActorMap; // 0x80 (0x50)
	unsigned char padding_d0[0xa8]; // 0xd0 (0xa8)

	/* Functions */

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.UnregisterActorsWithMultipleGameplayTags (Underlying native function: UnregisterActorsWithMultipleGameplayTags 0x8546cb4)
	void UnregisterActorsWithMultipleGameplayTags(struct TArray<struct FGameplayTag>& GameplayTags, struct TArray<class AActor*>& InActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.UnregisterActorsFromAllGameplayTags (Underlying native function: UnregisterActorsFromAllGameplayTags 0x8437d58)
	void UnregisterActorsFromAllGameplayTags(struct TArray<class AActor*>& InActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.UnregisterActors (Underlying native function: UnregisterActors 0x8546bf4)
	void UnregisterActors(struct FGameplayTag& GameplayTag, struct TArray<class AActor*>& InActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.UnregisterActor (Underlying native function: UnregisterActor 0x8545af8)
	void UnregisterActor(struct FGameplayTag& GameplayTag, class AActor*& InActor); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.RegisterActorsWithMultipleGameplayTags (Underlying native function: RegisterActorsWithMultipleGameplayTags 0x8546cb4)
	void RegisterActorsWithMultipleGameplayTags(struct TArray<struct FGameplayTag>& GameplayTags, struct TArray<class AActor*>& InActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.RegisterActors (Underlying native function: RegisterActors 0x8546bf4)
	void RegisterActors(struct FGameplayTag& GameplayTag, struct TArray<class AActor*>& InActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.RegisterActor (Underlying native function: RegisterActor 0x8545af8)
	void RegisterActor(struct FGameplayTag& GameplayTag, class AActor*& InActor); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.LogActorRegistration (Underlying native function: LogActorRegistration 0x26daa0c)
	void LogActorRegistration(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.GetRegistrationTagsForActor (Underlying native function: GetRegistrationTagsForActor 0x8545930)
	struct TArray<struct FGameplayTag> GetRegistrationTagsForActor(class AActor*& InActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.GetRegisteredActors (Underlying native function: GetRegisteredActors 0x8545850)
	void GetRegisteredActors(struct TArray<class AActor*>& OutActors, struct FGameplayTag& GameplayTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobalActorRegistrySubsystem.GetActorRegistryDataForGameplayTag (Underlying native function: GetActorRegistryDataForGameplayTag 0x85453f8)
	class UActorRegisterData_GameplayTagBased* GetActorRegistryDataForGameplayTag(struct FGameplayTag& GameplayTag); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

