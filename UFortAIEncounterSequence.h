// Class /Script/FortniteAI.FortAIEncounterSequence
// Size: 0x1a0
class UFortAIEncounterSequence : public UObject
{
	struct FFortGeneratedEncounterSequence GeneratedEncounterSequence; // 0x28 (0x30)
	int CurrentEncounterIndexInSequence; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class UFortAIEncounterInfo* CurrentEncounter; // 0x60 (0x8)
	class AFortAIDirector* AssociatedAIDirector; // 0x68 (0x8)
	class AFortMission* AssociatedMission; // 0x70 (0x8)
	struct TArray<class AActor*> TargetActors; // 0x78 (0x10)
	class UFortAIAssignmentSettings* AssignmentSettings; // 0x88 (0x8)
	struct FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x90 (0x28)
	class AActor* OptionalQueryActor; // 0xb8 (0x8)
	struct FGameplayTagContainer InjectedTags; // 0xc0 (0x20)
	struct FFortEncounterSettings EncounterSettings; // 0xe0 (0xc0)

	/* Functions */

	// Function /Script/FortniteAI.FortAIEncounterSequence.StopCurrentEncounter (Underlying native function: StopCurrentEncounter 0xa2a2c10)
	void StopCurrentEncounter(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.StartCurrentEncounterWithSavedData (Underlying native function: StartCurrentEncounterWithSavedData 0xa2a2aa4)
	class UFortAIEncounterInfo* StartCurrentEncounterWithSavedData(enum EFortEncounterSequenceResult& OutRequestResult, int& ActivationDelay); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.StartCurrentEncounter (Underlying native function: StartCurrentEncounter 0xa2a2758)
	class UFortAIEncounterInfo* StartCurrentEncounter(enum EFortEncounterSequenceResult& OutRequestResult, struct TArray<class AActor*>& InTargetActors, class UFortAIAssignmentSettings*& InAssignmentSettings, struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class AActor*& InOptionalQueryActor, struct FGameplayTagContainer& InInjectedTags, struct FFortEncounterSettings& InEncounterSettings, int& ActivationDelay); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.SetEncounterStartingData (Underlying native function: SetEncounterStartingData 0xa2a2024)
	void SetEncounterStartingData(struct TArray<class AActor*>& InTargetActors, class UFortAIAssignmentSettings*& InAssignmentSettings, struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class AActor*& InOptionalQueryActor, struct FGameplayTagContainer& InInjectedTags, struct FFortEncounterSettings& InEncounterSettings); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.Previous (Underlying native function: Previous 0xa2a1480)
	enum EFortEncounterSequenceResult Previous(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.Next (Underlying native function: Next 0xa29fb44)
	enum EFortEncounterSequenceResult Next(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.Last (Underlying native function: Last 0xa29ebc0)
	enum EFortEncounterSequenceResult Last(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIEncounterSequence.IsOnFinalIndexInSequence (Underlying native function: IsOnFinalIndexInSequence 0xa29eb8c)
	bool IsOnFinalIndexInSequence(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterSequence.HasEncounter (Underlying native function: HasEncounter 0xa29e84c)
	bool HasEncounter(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterSequence.GetNumEncountersInSequence (Underlying native function: GetNumEncountersInSequence 0x731dc50)
	int GetNumEncountersInSequence(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterSequence.GetEncounterIndexInSequence (Underlying native function: GetEncounterIndexInSequence 0x7f9287c)
	int GetEncounterIndexInSequence(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterSequence.GetCurrentEncounter (Underlying native function: GetCurrentEncounter 0x743b7f0)
	class UFortAIEncounterInfo* GetCurrentEncounter(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAIEncounterSequence.EncounterBelongsToSequence (Underlying native function: EncounterBelongsToSequence 0xa29e2b0)
	bool EncounterBelongsToSequence(class UFortAIEncounterInfo*& InEncounter); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

