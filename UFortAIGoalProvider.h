// Class /Script/FortniteAI.FortAIGoalProvider
// Size: 0x48
class UFortAIGoalProvider : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UWorld* World; // 0x30 (0x8)
	class UFortAIAssignment* AssignmentOwner; // 0x38 (0x8)
	class UFortAIEncounterInfo* EncounterInfo; // 0x40 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAIGoalProvider.UpdateGoals (Underlying native function: UpdateGoals 0x735d960)
	void UpdateGoals(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalProvider.InitializeGoalProvider (Underlying native function: InitializeGoalProvider 0xa310a30)
	bool InitializeGoalProvider(class UWorld*& ContextWorld, class UFortAIAssignment*& Assignment); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIGoalProvider.GetEncounterInfo (Underlying native function: GetEncounterInfo 0xa3108bc)
	class UFortAIEncounterInfo* GetEncounterInfo(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

