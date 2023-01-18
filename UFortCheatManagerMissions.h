// Class /Script/FortniteGame.FortCheatManagerMissions
// Size: 0x48
class UFortCheatManagerMissions : public UChildCheatManager
{
	unsigned char unreflected_48[0x48]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManagerMissions.ToggleSecondaryMissionHeaders (Underlying native function: ToggleSecondaryMissionHeaders 0x26daa0c)
	void ToggleSecondaryMissionHeaders(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.TeleportToMissionActor (Underlying native function: TeleportToMissionActor 0x26daa0c)
	void TeleportToMissionActor(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.SendMissionEvent (Underlying native function: SendMissionEvent 0x7239f74)
	void SendMissionEvent(struct FString& MissionEventName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.RegenerateZoneMissionsWithDifficultyLevel (Underlying native function: RegenerateZoneMissionsWithDifficultyLevel 0x71a7128)
	void RegenerateZoneMissionsWithDifficultyLevel(float& DifficultyLevelOverride); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.RegenerateZoneMissions (Underlying native function: RegenerateZoneMissions 0x26daa0c)
	void RegenerateZoneMissions(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.MissionForceSuccess (Underlying native function: MissionForceSuccess 0x8b0c400)
	void MissionForceSuccess(struct FString& MissionName, float& FractionCompleted); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.MissionForcePrimarySuccess (Underlying native function: MissionForcePrimarySuccess 0x71a7128)
	void MissionForcePrimarySuccess(float& FractionCompleted); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.MissionForcePrimaryFailure (Underlying native function: MissionForcePrimaryFailure 0x26daa0c)
	void MissionForcePrimaryFailure(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.MissionForceFailure (Underlying native function: MissionForceFailure 0x7291288)
	void MissionForceFailure(struct FString& MissionName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.LoadMissionGenerator (Underlying native function: LoadMissionGenerator 0x7239f74)
	void LoadMissionGenerator(struct FString& GeneratorName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.LoadMission (Underlying native function: LoadMission 0x7239f74)
	void LoadMission(struct FString& MissionName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.ListMissions (Underlying native function: ListMissions 0x26daa0c)
	void ListMissions(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.ListMissionGenerators (Underlying native function: ListMissionGenerators 0x26daa0c)
	void ListMissionGenerators(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.ForceSaveMissionStateAndWorld (Underlying native function: ForceSaveMissionStateAndWorld 0x7291288)
	void ForceSaveMissionStateAndWorld(struct FString& SaveFileName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.ForceCompleteDumpedObjective (Underlying native function: ForceCompleteDumpedObjective 0x8b0832c)
	void ForceCompleteDumpedObjective(struct FString& MissionName, int& ObjectiveIndex); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.ForceCompleteDisplayedObjective (Underlying native function: ForceCompleteDisplayedObjective 0x7239740)
	void ForceCompleteDisplayedObjective(int& ObjectiveIndex); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.ExecuteNewMissionGeneration (Underlying native function: ExecuteNewMissionGeneration 0x8b07df8)
	void ExecuteNewMissionGeneration(float& DifficultyLevel, struct FString& GeneratorName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.EndDeimosSpawning (Underlying native function: EndDeimosSpawning 0x26daa0c)
	void EndDeimosSpawning(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.DumpAllDisplayedMissions (Underlying native function: DumpAllDisplayedMissions 0x8b07de4)
	void DumpAllDisplayedMissions(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.DumpAllActorsWithAssetTags (Underlying native function: DumpAllActorsWithAssetTags 0x26daa0c)
	void DumpAllActorsWithAssetTags(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.DumpAllActiveMissions (Underlying native function: DumpAllActiveMissions 0x26daa0c)
	void DumpAllActiveMissions(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManagerMissions.DumpActorsWithAssetTags (Underlying native function: DumpActorsWithAssetTags 0x7291288)
	void DumpActorsWithAssetTags(struct FString& TagList); // (Final | Exec | Native | Public)
};

