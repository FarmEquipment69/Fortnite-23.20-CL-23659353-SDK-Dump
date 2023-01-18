// Class /Script/FortniteGame.FortPlayerControllerAthenaXPComponent
// Size: 0x2f8
class UFortPlayerControllerAthenaXPComponent : public UFortControllerComponent
{
	struct TArray<struct FAthenaAccolades> PlayerAccolades; // 0xa0 (0x10)
	struct TArray<struct FCardSlotMedalData> LocalPunchCardMedals; // 0xb0 (0x10)
	struct FXPEventArray EventArray; // 0xc0 (0x120)
	struct TArray<struct FXPEventEntry> WaitingQuestXp; // 0x1e0 (0x10)
	int RestXP; // 0x1f0 (0x4)
	bool bRegisteredWithQuestManager; // 0x1f4 (0x1)
	unsigned char unreflected_1f5[0x7b]; // 0x1f5 (0x7b) 
	struct FAthenaLevelInfo CachedLevelInfo; // 0x270 (0x24)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UAthenaSeasonItemDefinition* CachedSeasonDef; // 0x298 (0x8)
	int CachedSeasonMatchXpBoost; // 0x2a0 (0x4)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	int CurrentLevel; // 0x2a8 (0x4)
	int PlayerXp; // 0x2ac (0x4)
	int TotalXpEarned; // 0x2b0 (0x4)
	int MedalBonusXP; // 0x2b4 (0x4)
	int SurvivalXp; // 0x2b8 (0x4)
	int CombatXp; // 0x2bc (0x4)
	int MatchXp; // 0x2c0 (0x4)
	int ChallengeXp; // 0x2c4 (0x4)
	int64_t HasBRMatchReportCompletedProfileVer; // 0x2c8 (0x8)
	int64_t InMatchProfileVer; // 0x2d0 (0x8)
	struct TArray<class UFortAccoladeItemDefinition*> MedalsEarned; // 0x2d8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortQuestItem>> QuestsUpdated; // 0x2e8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.ServerUpdateCurrentLevel (Underlying native function: ServerUpdateCurrentLevel 0x83fcdf8)
	void ServerUpdateCurrentLevel(int& NewCurrentLevel); // (Final | Net | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnXpUpdated (Underlying native function: OnXpUpdated 0x83fc8e4)
	void OnXpUpdated(int& InCombatXp, int& InSurvivalXp, int& InBonusMedalXp, int& InChallengeXp, int& InMatchXp, int& InTotalXp); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnXPEvent (Underlying native function: OnXPEvent 0x83fc840)
	void OnXPEvent(struct FXPEventInfo& XPEvent); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnRep_InMatchProfileVer (Underlying native function: OnRep_InMatchProfileVer 0x83fc6b0)
	void OnRepInMatchProfileVer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnRep_HasBRMatchReportCompletedProfileVer (Underlying native function: OnRep_HasBRMatchReportCompletedProfileVer 0x83fc634)
	void OnRepHasBRMatchReportCompletedProfileVer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnRep_bRegisteredWithQuestManager (Underlying native function: OnRep_bRegisteredWithQuestManager 0x83fc82c)
	void OnRepbRegisteredWithQuestManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnProfileUpdated (Underlying native function: OnProfileUpdated 0x83fc620)
	void OnProfileUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.OnInMatchProfileUpdate (Underlying native function: OnInMatchProfileUpdate 0x83fc454)
	void OnInMatchProfileUpdate(int64_t& ProfileRevision); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.InitRestedXp (Underlying native function: InitRestedXp 0x83fc17c)
	void InitRestedXp(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.ClientQuestsUpdated (Underlying native function: ClientQuestsUpdated 0x83fbc54)
	void ClientQuestsUpdated(struct TArray<struct FFortQuestObjectiveCompletion>& PendingQuestChanges); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerAthenaXPComponent.ClientMedalsRecived (Underlying native function: ClientMedalsRecived 0x83fbba0)
	void ClientMedalsRecived(struct TArray<struct FAthenaAccolades>& Medals); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)
};

