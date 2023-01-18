// Class /Script/FortniteAI.FortBotMissionLogic
// Size: 0x78
class UFortBotMissionLogic : public UObject
{
	class AFortMission* Mission; // 0x28 (0x8)
	struct TArray<class AActor*> Goals; // 0x30 (0x10)
	struct TArray<class AFortBotStructureBuilder*> Builders; // 0x40 (0x10)
	class UBehaviorTree* CurrentBehaviorAsset; // 0x50 (0x8)
	struct TArray<class AFortBotController*> AssignedAI; // 0x58 (0x10)
	struct TArray<unsigned char> GoalHasLocator; // 0x68 (0x10)

	/* Functions */

	// Function /Script/FortniteAI.FortBotMissionLogic.SpawnStructureBuilder (Underlying native function: SpawnStructureBuilder 0xa331934)
	class AFortBotStructureBuilder* SpawnStructureBuilder(class AActor*& MissionGoal, class UFortBuildingInstructions*& BuildingInstructions); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotMissionLogic.SetGoalsInvulnerable (Underlying native function: SetGoalsInvulnerable 0xa331834)
	void SetGoalsInvulnerable(bool& bGodMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotMissionLogic.SetCurrentBehavior (Underlying native function: SetCurrentBehavior 0xa3317b4)
	void SetCurrentBehavior(class UBehaviorTree*& Behavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotMissionLogic.ResetBehavior (Underlying native function: ResetBehavior 0xa331728)
	void ResetBehavior(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotMissionLogic.OnMissionStarted (Has no native function)
	void OnMissionStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortBotMissionLogic.OnMissionFinished (Has no native function)
	void OnMissionFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortBotMissionLogic.OnMissionActivated (Has no native function)
	void OnMissionActivated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortBotMissionLogic.OnInteractWithMissionGoal (Has no native function)
	bool OnInteractWithMissionGoal(class AFortAIController*& BotAI, class AActor*& MissionGoal); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortBotMissionLogic.OnCanStartOtherMission (Has no native function)
	bool OnCanStartOtherMission(class AFortAIController*& BotAI, class AFortMission*& OtherMission); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortBotMissionLogic.OnAssignedBehavior (Has no native function)
	void OnAssignedBehavior(class AFortAIController*& BotAI); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortBotMissionLogic.MarkSingleLocator (Underlying native function: MarkSingleLocator 0xa330fe0)
	void MarkSingleLocator(class AActor*& LocatorActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotMissionLogic.MarkAllLocated (Underlying native function: MarkAllLocated 0xa330fa0)
	void MarkAllLocated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortBotMissionLogic.ClearAllLocated (Underlying native function: ClearAllLocated 0xa330a10)
	void ClearAllLocated(); // (Final | Native | Public | BlueprintCallable)
};

